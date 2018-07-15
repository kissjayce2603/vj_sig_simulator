#include "ofApp.h"

void ofApp::setup(){
	dev.setup(5, 3, true);
}

void ofApp::update(){
	dev.update();
}

void ofApp::draw(){
	dev.drawSimulator(0, 0);
	dev.drawLog(0, 350);
}