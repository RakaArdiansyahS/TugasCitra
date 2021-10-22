#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;

int main()
{
	cv::Mat doomer = cv::imread("image.jpg", IMREAD_GRAYSCALE);
	cv::imshow("depressed", doomer);
	cv::imwrite("imagetogray.jpg", doomer); //rgb->gray
	int rows = doomer.rows;
	int cols = doomer.cols;

	cv::Size sz = doomer.size();
	rows = sz.height;
	cols = sz.width; 

	std::cout << "Ukuran Gambar: ";
	std::cout <<  sz << endl; //menampilkan ukuran image

	/*cout << "doomer = " << endl << " " << doomer << endl << endl;*/ //lihat matriks
	cv::waitKey(0);
}