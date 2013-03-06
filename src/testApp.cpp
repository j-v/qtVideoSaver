#include "testApp.h"

void testApp::setup() {	
	ofSetFrameRate(30);
	//camWidth  = CAM_WIDTH;
	//camHeight = CAM_HEIGHT;
	grabber.initGrabber(CAM_WIDTH,CAM_HEIGHT);
	saver.setup(CAM_WIDTH,CAM_HEIGHT,30);
    
    unsigned char pixels[CAM_WIDTH * CAM_HEIGHT * 4];

    for (int i = 0; i<60; i++) {
        for (int i=0; i<CAM_HEIGHT*CAM_WIDTH; i++) {
            int index = i*4;
            pixels[index] = rand() % 255;
            pixels[index+1] = rand() % 255;
            pixels[index+2] = rand() % 255;
            pixels[index+3] = 255;
        }
        saver.writeRGBA2(pixels);
    }
    saver.finishMovie();
}
	
void testApp::update() {
	//grabber.grabFrame();
}

void testApp::draw() {
//	ofSetColor(0xFF,0xFF,0xFF);
//    
//	if (grabber.isFrameNew()){
//		if(saver.isRecording()) saver.writeRGB(grabber.getPixels());
//	}
//	//grabber.draw(0,0);
}

void testApp::exit(){ 
	//if(saver.isRecording()) saver.finishMovie();
}