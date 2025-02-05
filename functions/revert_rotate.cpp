#include "revert_rotate.h"

#include <iostream>
#include <opencv2/opencv.hpp>
#include  "rotate.h"

using namespace cv;

 Mat revert_rotate(Mat image,double angle)
{
      double angle1=-(360-angle);
  
       Mat rev_rot=rotate_img(image,angle1);
       return rev_rot;
}