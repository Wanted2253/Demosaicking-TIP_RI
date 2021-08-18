#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <opencv2/opencv.hpp>
#include "demosaic.h"
using namespace std;
using namespace cv;
int main() {
	string path = "bayer_pattern_img.bmp";
	Mat img = imread(path);
	Mat dst;
	int pattern = 2;
	Demosaic(img, dst, pattern);
	/*double k = getpsnr(dst, img);
	cout << k;*/
	imshow("Image", dst);
	waitKey(0);
	return 0;
}