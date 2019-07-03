#include <iostream>
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "Camera.cpp"

using namespace std;
using namespace cv;

int main()
{
    Camera camera1;
	camera1.openCamera();
	camera1.setFrame(640,480);
	camera1.readFrame();
    camera1.closeCamera();
	return 0;
}