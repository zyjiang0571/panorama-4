#include<iostream> 
#include <opencv/cv.h>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include "sift.h"
  
  
using namespace cv; 
using namespace std;
  
  
int main()  
{  
    Mat img = imread("3.jpg");  
	SIFT testImg(img,3,3, 1.6);
	
	waitKey(6000);  	
	return 0;
}  