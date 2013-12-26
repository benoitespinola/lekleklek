#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableSmoothing();
    ofSetCircleResolution(400);
    minhaGota = Gota(10);
    ofBackground(6,6,6);
}

//--------------------------------------------------------------
void testApp::update(){
    //minhaGota.update();
    minhasBolas.update();
    if(ofGetFrameNum()%30 == 0) std::cout << ofGetFrameRate() << endl;
}

//--------------------------------------------------------------
void testApp::draw(){
    //minhaGota.draw();
    minhasBolas.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    minhasBolas.mouseMoved(x, y);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
