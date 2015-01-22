#include <opencv2/highgui/highgui.hpp>

#include <opencv2/opencv.hpp>

#include <iostream>

int main(int argc, char** argv)

{

   

IplImage* img = cvCreateImage( cvSize( 320, 320 ), IPL_DEPTH_8U, 3 );

cvCircle( img, cvPoint( 75, 100 ), 70, cvScalar( 255, 0, 100 , 255 ), 9, 10, 0 );

cvCircle( img, cvPoint( 240, 100 ), 70, cvScalar( 128, 30, 60 , 50 ), 9, 10, 0 );

    

cvNamedWindow( "OpenCV Demo", CV_WINDOW_NORMAL );

cvShowImage( "OpenCV Demo", img );

    

cvWaitKey(0);

cvDestroyWindow( "OpenCV Demo" );

cvReleaseImage( &img );

    

}
