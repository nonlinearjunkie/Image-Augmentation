#include <opencv2/core/core.hpp> 
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace cv;

class Image
{
    private:
        Mat image;

    public:
        void read(String img_file);
        void display(String window_name);
        Mat flip_vertical();
        Mat flip_horizontal();

};
