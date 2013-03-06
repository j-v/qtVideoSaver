#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"

int main(){
    cout << "test" << endl;
    ofAppGlutWindow window;
	ofSetupOpenGL(&window,CAM_WIDTH,CAM_HEIGHT,OF_WINDOW);
	ofRunApp( new testApp());
}
