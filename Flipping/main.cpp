#include <opencv2/core/core.hpp> 
#include <iostream>
#include "flip.hpp"
 
using namespace cv;
using namespace std;


 
int main()
{
     int x,y;
     Mat ver_flip,hor_flip;
     Image src1;
     src1.read("../test.png");
     src1.display("Original Image");
     ver_flip=src1.flip_vertical();
      imshow(" Vertically Flipped Image", ver_flip); 
      hor_flip=src1.flip_horizontal();
      imshow(" Horizontally Flipped Image", hor_flip); 
      waitKey(0);
  

 return 0;
}
