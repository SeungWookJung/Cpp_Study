#ifdef _DEBUG
	#pragma comment(lib, "opencv_world346d.lib")
#else
	#pragma comment(lib, "opencv_world346.lib")
#endif //

#include <iostream>
//#include <opencv2/opencv.hpp>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <opencv2/imgcodecs.hpp>


using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
		Mat image;
		image = imread("../lena.png",IMREAD_COLOR);

		//Mat gray_image;
		//cvtColor(image, gray_image, COLOR_BGR2GRAY);

		imshow("COLOR : ", image);
		//imshow("GRAY : ", gray_image);


		//imwrite("GRAY_IMAGE.jpg", gray_image);


		waitKey(); //���÷��̸� ������Ű�� �뵵(�̹����� �������ؼ�)

		return 0;
}