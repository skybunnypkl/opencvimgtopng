#include <opencv2/opencv.hpp>

int main(int argc, char* argv[]){

	if (argc < 2){
		std::cout << "You Need an Image to Process!\n\n Example : imgtopng image.jpg" << std::endl;
		exit(0);
	}
	//Function in Opencv to read image
	cv::Mat image = cv::imread(argv[1]);


	if (image.empty()) return -1;

	//Save image in PNG
	cv::imwrite("output.png", image);
	return 0;
}