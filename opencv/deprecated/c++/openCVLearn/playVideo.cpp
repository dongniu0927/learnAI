#include <opencv2\opencv.hpp>
using namespace cv;

int main() {
	VideoCapture capture("test.mp4");  // ������Ƶ
	while (1) {
		Mat frame;  // �洢ÿһ֡
		capture >> frame;  // ��ȡ��ǰ֡
		if (frame.empty()) {   // ��Ƶ�������
			break;
		}
		imshow("��ȡ��Ƶ", frame);
		waitKey(30);  // ��ʱ30ms
	}
}