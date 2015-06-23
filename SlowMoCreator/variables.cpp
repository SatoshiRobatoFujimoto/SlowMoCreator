#include "stdafx.h"
#include <time.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#using <system.dll>	

using namespace System::IO;
using namespace System;
using namespace cv;
using namespace std;


int frames_number = 0;
int fps = 0;
int frame_rate =0;
int frame_width = 640;
int frame_height = 480;
VideoWriter outputVideo;
cv::Size resolution;
string name;
Mat source;
string videoToOpenNameStr;	 // The Std::string name holder
string videoToSaveNameStr;	 // The Std::string name holder where to save the 





















