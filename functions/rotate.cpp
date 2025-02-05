#include "rotate.h"
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;




Mat rotate_img(Mat image,double angle) {
   // Get the image center

   //Mat image=imread(imgpath);
    cv::Point2f center(image.cols / 2.0, image.rows / 2.0);

    // Get the rotation matrix
    cv::Mat rotationMatrix = cv::getRotationMatrix2D(center, angle, 1.0);

    // Perform the rotation
    cv::Mat rotatedImage;
    cv::warpAffine(image, rotatedImage, rotationMatrix, image.size());
     return rotatedImage;
    // Save the rotated image
  //  std::string outputPath = "rotated_image.jpg";
   // cv::imwrite(outputPath, rotatedImage);

   // std::cout << "Rotated image saved as " << outputPath << std::endl;
    
    
}
