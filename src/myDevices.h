#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define PORT 110110

class myDevices{
	private:
		int set_units_x; 
		int set_units_y;
		bool debug;
		vector<ofColor> set_unit_colors;
		ofxOscReceiver receiver;
		
	public:
		void setup(int numOfWidthDiveces, int numOfHeightDiveces, bool bDebug);
		void update();
		void drawSimulator(int pos_x, int pos_y);
		void drawLog(int pos_x, int pos_y);
};

