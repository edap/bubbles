#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"

class BallsGenerator{
public:
    
    BallsGenerator();
    void setup();
    void update(ofVec2f left_eye, ofVec2f right_eye);
    void draw();
    void blow(float blow_power);
    vector<ofVec2f> origins;
    
    ofxBox2d                            box2d;			  //	the box2d world
    vector    <shared_ptr<ofxBox2dCircle> >	circles;		  //	default box2d circles
    vector	  <shared_ptr<ofxBox2dRect> >	boxes;			  //	defalut box2d rects
};

