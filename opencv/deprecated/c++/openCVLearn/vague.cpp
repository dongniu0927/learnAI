#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
using namespace cv;

int main() {
	Mat srcImage = imread("dog.jpg");
	imshow("ԭ��ͼ", srcImage);
	// ���о�ֵ�˲�
	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));
	imshow("�˲���ͼ", dstImage);
	waitKey(0);
}