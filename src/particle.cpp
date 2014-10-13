//
//  particle.cpp
//  particleEmitter
//
//  Created by Simon on 13/10/2014.
//
//

#include "particle.h"


particle::particle(ofVec2f t_pos, float t_speed){

    //the constructor
    position.set(t_pos);
    direction.set(0, ofRandom(0,1)); // make a vector pointing downwards
    direction.rotate(ofRandom(0,360)); // roatate it by a random amount
    size = 25;
    speed = t_speed;
    
    col.setHsb(ofRandom(0,255), 255, 255); //set using HSB for fully saturated bright colours
    
}

particle::~particle(){

    //the destructor
    
}

void particle::update(){
    
    position += direction * speed;
    speed *= 0.995; //deceleration
    size *= 0.95; // make the particles get smaller

}

void particle::draw(){
    
    ofSetColor(col);
    ofCircle(position, size);

}

//getters and setters

float particle::getSize(){
    return size;
}