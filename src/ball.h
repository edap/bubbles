#pragma once

#include "ofMain.h"

class Ball {
public:
    Ball();
    void update();
    void draw();
    void resetForces();
    void applyForce(ofVec3f force);
    
    float radius;
    ofColor color;
    ofVec3f position;
    ofVec3f velocity;
    ofVec3f accelleration;
    ofVec3f windForce;
    ofVec3f gravityForce;
    
};