#include "myDevices.h"

void myDevices::setup(int numOfWidthDiveces, int numOfHeightDiveces, bool bDebug) {
	receiver.setup(PORT);
	ofBackground(0);
	debug = bDebug;
	set_units_x = numOfWidthDiveces;
	set_units_y = numOfHeightDiveces;
	ofColor initcolor(100,100,100);

	for (int i = 0; i < set_units_x * set_units_y; i++) {
		set_unit_colors.push_back(initcolor);
	}
	
}

void myDevices::update() {
	while (receiver.hasWaitingMessages()){
		ofxOscMessage m;
		receiver.getNextMessage(&m);
		for (int i = 0; i < (set_units_x * set_units_y); i++) {
			if (m.getAddress() == "/bg_color_zhongyi/"+ ofToString(i)) {
				set_unit_colors[i].r = m.getArgAsInt(0);
				set_unit_colors[i].g = m.getArgAsInt(1);
				set_unit_colors[i].b = m.getArgAsInt(2);
			}
		}
	}
}

void myDevices::drawSimulator(int pos_x, int pos_y) {
	int unit_index = 0;
	for (int i = 0; i < set_units_y; i++) {
		for (int j = 0; j < set_units_x; j++) {
			ofSetColor(set_unit_colors[unit_index]);
			ofDrawRectangle(j * 110 + pos_x, i * 110 + pos_y, 100, 100);
			ofSetColor(255);
			ofDrawBitmapString(ofToString(unit_index), j * 110 + 30 + pos_x, i * 110 + 30 + pos_y);
			unit_index++;
		}
	}
}

void myDevices::drawLog(int pos_x, int pos_y) {
	ofDrawBitmapString("-----KontactLab-----", pos_x, pos_y);
	for (int i = 0; i < set_unit_colors.size(); i++) {
		ofDrawBitmapString(ofToString(i), pos_x, pos_y + (i + 1) * 12);
		ofDrawBitmapString(set_unit_colors[i], pos_x + 50, pos_y + (i + 1) * 12);
	}
}