#include <opencv2/core/core.hpp> 
#include <opencv2/highgui/highgui.hpp> 
#include <iostream>
 
using namespace cv;
using namespace std;
 
int main()
{
    int x,y;
    Mat src1,src2;
 
   
 src1 = imread("../test.png",IMREAD_COLOR);
 if( !src1.data ) { printf("Error loading src1 \n"); return -1;}
 
 src2 = Mat::zeros(src1.rows,src1.cols, CV_8UC3);

 for (float i=0; i<src1.cols ; i++){
 for (float j=0 ; j<src1.rows ; j++)
 {
     x=i;
     y=src1.rows-j;

 if((x>=0 && x<src1.cols) && (y>=0 && y<src1.rows)){
     Vec3b color1 = src1.at<Vec3b>(Point(i,j));
     Vec3b color2 = src2.at<Vec3b>(Point(i,j));
     color2.val[0] = color1.val[0];
     color2.val[1] = color1.val[1];
     color2.val[2] = color1.val[2];
     src2.at<Vec3b>(Point(x,y)) = color2;
 } 
 }
 }
 waitKey(50);
//   namedWindow("Horizontally Flipped Image",WINDOW_AUTOSIZE); 
 imshow(" Horizontally Flipped Image", src2); 
 namedWindow("Original Image",WINDOW_AUTOSIZE); 
 imshow("Original Image", src1);
 waitKey(0);
 return 0;
}

 



 