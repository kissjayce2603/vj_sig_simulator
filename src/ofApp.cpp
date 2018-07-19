#include "ofApp.h"

void ofApp::setup(){
	dev.setup(5, 3);
}

void ofApp::update(){
	dev.update("/bg_color_zhongyi/");
}

void ofApp::draw(){
	dev.drawSimulator(0, 0);
	dev.drawLog(0, 350);

	//Finaly ofColor data will out from like this:
	//std::cout << dev.set_unit_colors[0] << endl;
	//std::cout << dev.set_unit_colors[1] << endl;
	//std::cout << dev.set_unit_colors[2] << endl;
	//std::cout << dev.set_unit_colors[3] << endl;
	//std::cout << dev.set_unit_colors[4] << endl;
	//......

}