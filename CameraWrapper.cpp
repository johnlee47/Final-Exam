#include <stdint.h>
//#include "Camera.h"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

//select camera (set a default camera)
//set width and height of camera (set dafault dimension)
//opne camera
//read from camera or saves it
//close camera


using namespace cv;
using namespace std;

class Camera
{
	private:
		



	public:
		Camera();
		int openCamera();
		void setFrame(int width, int height);
        int readFrame();
        void closeCamera();
        void save();
		//virtual ~Camera();
};


    
Camera::Camera()
{
    
}
cv::Mat frame,edges;
	int cameraValue;
		VideoCapture capture;

int Camera::openCamera()
{
	
	cv::VideoCapture capture(0);
	if(!capture.isOpened()){
		return 0;
	}
}


int Camera::readFrame()
{
	capture >> frame;
	namedWindow("Display",WINDOW_NORMAL);
	
	for(;;){
		capture.read(frame);
		cv::imshow("Display",frame);
		if(waitKey(30)>=0){
				return 0;
			}
	}
			if(frame.empty()){
		std::cerr << "NO picture" << std::endl;
	}
		
			
			
}

void Camera::setFrame(int width, int height)
{
	capture.set(CV_CAP_PROP_FRAME_WIDTH,width);
	capture.set(CV_CAP_PROP_FRAME_HEIGHT,height);
}

void Camera::closeCamera(){
	capture.release();
}

void save(){
	imwrite("1.jpg",frame);
}


