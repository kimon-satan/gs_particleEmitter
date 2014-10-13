//
//  squareParticle.cpp
//  particleEmitter
//
//  Created by Simon on 13/10/2014.
//
//

#include "squareParticle.h"


squareParticle::squareParticle(ofVec2f pos, float t_speed):particle(pos,t_speed){ //this calls the base class constructor
 
}

void squareParticle::draw(){
    
    ofPushStyle(); //this is like pushMatrix but for things such as color and fill
        ofSetRectMode(OF_RECTMODE_CENTER); //draw rectangles from the center
        ofSetColor(col);
        ofRect(position.x, position.y, size, size);
    ofPopStyle();
    
}