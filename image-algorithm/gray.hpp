//
//  gray.hpp
//  image-algorithm
//
//  Created by Jacob Green on 2024/5/5.
//

#ifndef gray_hpp
#define gray_hpp

#include <opencv2/opencv.hpp>

using namespace cv;

//均值灰度
Mat gray_avg(Mat src_image);

//权重灰度
Mat gray_weight(Mat src_image);

#endif /* gray_hpp */
