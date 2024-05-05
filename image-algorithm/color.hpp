//
//  color.hpp
//  image-algorithm
//
//  Created by Jacob Green on 2024/5/5.
//

#ifndef color_hpp
#define color_hpp

#include <opencv2/opencv.hpp>

using namespace cv;

//颜色分量
Mat color_scale(Mat src_image, float r, float g, float b);

#endif /* color_hpp */
