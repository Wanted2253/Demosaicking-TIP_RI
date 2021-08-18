#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "guidedfiltermlri.h"
#include "guidedfiltertipri.h"
using namespace std;
using namespace cv;
void bayer_split(cv::Mat&, cv::Mat&);
void bayer_mask(cv::Mat&, cv::Mat&);
void demosaic_tipri(cv::Mat&, cv::Mat&, float sigma = 1.0);