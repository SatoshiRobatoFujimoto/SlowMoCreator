#include "stdafx.h"
#include <time.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#using <system.dll>	

using namespace System::IO;
using namespace System;
using namespace cv;
using namespace std;

   
extern int frames_number;
extern int fps;
extern int fps_wanted;
extern int frame_rate;
extern int frame_width;
extern int frame_height;
extern VideoWriter outputVideo;
extern cv::Size resolution;
extern string name;
extern cv::Mat source;
extern string videoToOpenNameStr;
extern string videoToSaveNameStr;
extern bool videoOpen;
extern bool cancel;
extern cv::VideoCapture  inputVideo;
extern int i ;
extern int progress;










