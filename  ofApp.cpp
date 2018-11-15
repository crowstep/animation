#include "ofApp.h"
#include <string>
#include <iostream>


//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofSetBackgroundAuto(true);
	ofSetFrameRate(15);
	ofSetWindowTitle("The IDEA not exist");
	scene = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

	ofLoadImage(img, loadFrames(time-1));
	img.update();
	time = (int)(ofGetElapsedTimef()*5)%27;

}

//--------------------------------------------------------------
void ofApp::draw(){


		img.draw(0, 0, ofGetWidth(), ofGetHeight());

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}
string itos(int i) // convert int to string
{
	stringstream s;
	s << i;
	return s.str();
}

string ofApp::loadFrames(int n)
{
	string ext = ".gif";
	string name = "K";

	frames[0] = "title.gif";
	frames[1] = "title2.gif";

	do {
		
		for (unsigned int i = 3; i < 27; i++) {
			string filenames = name + itos(i - 1) + ext;
			frames[i - 1].assign(filenames);
			upload = false;
		}
	} while (upload == true);

	return frames[n];
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

