#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

int main() {
    std::string image_path = samples::findFile("zebra.jpg");
    Mat img = imread(image_path,IMREAD_COLOR);

    if (img.empty()) {
        std::cout << "Could not read the image...: " << image_path <<std::endl;
        return 1;
    }

    imshow("display",img);
    int k = waitKey(0);
    if(k=='s') {
        imwrite("zeb_save.jpg",img);
    }


}