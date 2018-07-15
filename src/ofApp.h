#pragma once

#include "ofMain.h"
#include "myDevices.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		myDevices dev;
};
