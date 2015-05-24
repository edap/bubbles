#include "ball.h"

Ball::Ball(){
    color = ofColor::red;
    radius = ofRandom(10.00, 30.00);
    
};

void Ball::draw(){
    ofSpherePrimitive(radius, 20);
};

void Ball::update(){
    position += velocity;
    velocity += accelleration;
};

void Ball::resetForces(){
    accelleration = accelleration * 0;
};

