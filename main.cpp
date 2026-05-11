#include <opencv2/opencv.hpp>
#include <filesystem>
int main(int argc, char* argv[]){

	if (argc < 2){
		std::cout << "You Need an Image to Process!\n\n Example : imgtopng image.jpg" << std::endl;
		exit(0);
	}
	//Function in Opencv to read image
	cv::Mat image = cv::imread(argv[1]);


	if (image.empty()){
		std::cerr << "Error Open image!\n";
		return -1;
	}

	//Save image in PNG
	std::filesystem::path input(argv[1]);
	std::string output = input.stem().string() + ".png"
	
	cv::imwrite(output, image);
	return 0;
}