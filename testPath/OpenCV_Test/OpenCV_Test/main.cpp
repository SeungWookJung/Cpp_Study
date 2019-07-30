#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	Mat image;
	image = imread("lena.png");

	if (image.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	Mat gray_image;
	cvtColor(image, gray_image, COLOR_BGR2GRAY);


	Mat edge_image;
	Canny(gray_image, edge_image, 50, 150);

	//namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.

	imshow("Display window", image);  //출력 담당
	imshow("gray : ", gray_image);
	imshow("edged : ", edge_image);

	waitKey(0); //디스플레이를 정지시키는 용도(이미지를 보기위해서)

	return 0;
}