#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture frame(0);

	if (!frame.isOpened())
	{
		cout << "fail to open camera" << endl;
		return -1;
	}

	Mat image;
	while (frame.grab())
	{
		frame.read(image);
		if (image.empty())
		{
			cout << "fail to read image" << endl;
			break;
		}
		cvtColor(image, image, COLOR_BGR2GRAY);
		Canny(image, image, 50, 150);

		cv::flip(image, image, 1);
		imshow("color", image);

		if (waitKey(27) == 0)
		{
			break;
		}
	}

	return 0;

}