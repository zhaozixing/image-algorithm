//
//  color.cpp
//  image-algorithm
//
//  Created by Jacob Green on 2024/5/5.
//

#include "color.hpp"

using namespace cv;

Mat color_scale(Mat src_image, float r, float g, float b)
{
    Mat color_scale_image = Mat(src_image.rows, src_image.cols, CV_8UC3);
    float R, G, B;
    for (int i=0; i<src_image.rows; i++)
    {
        for(int j=0; j<src_image.cols; j++)
        {

            R = src_image.at<Vec3b>(i,j)[2];
            G = src_image.at<Vec3b>(i,j)[1];
            B = src_image.at<Vec3b>(i,j)[0];
            
            R = r * R>255?255:(r * R<0?0:r * R);
            G = g * G>255?255:(g * G<0?0:g * G);
            B = b * B>255?255:(b * B<0?0:b * B);

            color_scale_image.at<Vec3b>(i,j) = Vec3b(B,G,R);
        }
    }
    return color_scale_image;
}
