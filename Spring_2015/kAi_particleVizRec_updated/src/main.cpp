#include "testApp.h"
//#include "ofAppGlutWindow.h"
#include "testApp.h"

//--------------------------------------------------------------
int main(){
//    ofAppGlutWindow window; // create a window
    // set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
    ofSetupOpenGL(1024, 768, OF_WINDOW);
    ofRunApp(new testApp()); // start the app
}
