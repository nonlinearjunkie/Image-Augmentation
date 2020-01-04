#include "flip.hpp"

void Image::  display(String window_name="Image World"){
       
             String windowName = window_name; //Name of the window
             namedWindow(windowName); // Create a window
             imshow(windowName, image); // Show our image inside the created window.
            // waitKey(0); // Wait for any keystroke in the window
            // destroyWindow(windowName); //destroy the created window

}

 void Image:: read(String img_file){
    image=imread(img_file,IMREAD_COLOR);
};

 Mat Image:: flip_vertical(){
    int x,y;
    Mat src2;
    src2 = Mat::zeros(image.rows,image.cols, CV_8UC3);

 for (float i=0; i<image.cols ; i++){
 for (float j=0 ; j<image.rows ; j++)
 {
     x=image.cols-i;
     y=j;

 if((x>=0 && x<image.cols) && (y>=0 && y<image.rows)){
     Vec3b color1 = image.at<Vec3b>(Point(i,j));
     Vec3b color2 = src2.at<Vec3b>(Point(i,j));
     color2.val[0] = color1.val[0];
     color2.val[1] = color1.val[1];
     color2.val[2] = color1.val[2];
     src2.at<Vec3b>(Point(x,y)) = color2;
 } 
 }
 }
 return src2;
};

 Mat Image:: flip_horizontal()
{
    int x,y;
    Mat src2;
    src2 = Mat::zeros(image.rows,image.cols, CV_8UC3);

 for (float i=0; i<image.cols ; i++){
 for (float j=0 ; j<image.rows ; j++)
 {
     x=i;
     y=image.rows-j;

 if((x>=0 && x<image.cols) && (y>=0 && y<image.rows)){
     Vec3b color1 = image.at<Vec3b>(Point(i,j));
     Vec3b color2 = src2.at<Vec3b>(Point(i,j));
     color2.val[0] = color1.val[0];
     color2.val[1] = color1.val[1];
     color2.val[2] = color1.val[2];
     src2.at<Vec3b>(Point(x,y)) = color2;
 } 
 }
 }
 return src2;
 
};