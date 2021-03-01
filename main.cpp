#include <fdeep/fdeep.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main()
{
    Mat image = imread("zebra.jpg",IMREAD_COLOR);
    assert(image.isContinuous());


    
    const auto model = fdeep::load_model("fdeep_model.json");
    // Use the correct scaling, i.e., low and high.
    const auto input = fdeep::tensor_from_bytes(image.ptr(),
        static_cast<std::size_t>(image.rows),
        static_cast<std::size_t>(image.cols),
        static_cast<std::size_t>(image.channels()),
        0.0f, 1.0f);
    const auto result = model.predict_class({input});
    std::cout << result << std::endl;
}