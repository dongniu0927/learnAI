#include <opencv2\opencv.hpp>
using namespace cv;

void main() {
	Mat srcImage = imread("dog.jpg");
	imshow("��ͼ", srcImage);
	waitKey(0);
}