#include <opencv2\opencv.hpp>
#include <opencv2\imgproc\imgproc.hpp>
using namespace cv;

int main() {
	Mat srcImage = imread("dog.jpg");
	imshow("ԭͼ(��Ե���)", srcImage);
	Mat edge, grayImage;

	cvtColor(srcImage, grayImage, CV_RGB2GRAY); // ת�Ҷ�ͼ

	blur(grayImage, edge, Size(3, 3)); // ����

	Canny(edge, edge, 3, 9, 3); // ����canny����

	imshow("Ч��ͼ����Ե��⣩", edge);

	waitKey(0);
	
	return 0;
}