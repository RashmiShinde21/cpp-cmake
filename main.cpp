#include <opencv2/opencv.hpp>
#include <iostream>
#include "./functions/rotate.h"

using namespace std;

int main(int argc, char* argv[]) {
    // Check if the correct number of arguments is provided
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <image_path> <rotation_angle>" << std::endl;
        return -1;
    }

    // Parse command-line arguments
    std::string imagePath = argv[1];
    double angle = std::stod(argv[2]); // Convert angle to double

    // Load the image
    cv::Mat image = cv::imread(imagePath);
    if (image.empty()) {
        std::cerr << "Error: Could not load image from " << imagePath << std::endl;
        return -1;
    }

    // Get the image center
    /*cv::Point2f center(image.cols / 2.0, image.rows / 2.0);

    // Get the rotation matrix
    cv::Mat rotationMatrix = cv::getRotationMatrix2D(center, angle, 1.0);

    // Perform the rotation
    cv::Mat rotatedImage;
    cv::warpAffine(image, rotatedImage, rotationMatrix, image.size());

    // Save the rotated image
    std::string outputPath = "rotated_image.jpg";
    cv::imwrite(outputPath, rotatedImage);

    std::cout << "Rotated image saved as " << outputPath << std::endl;
    */

     rotate_img(image,angle);


    return 0;
}
