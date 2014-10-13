#include "ofApp.h"

//TASK  1a. change the particle's constructor to take a parameter for location
//      1b. use this to make particles appear when you press the mouse where you press

//TASK  2a. use a conditional statement to cap the number of possible particles
//      2b. write a loop in update to check the size of particles and remove them when they have a radius of less than 2

const int g_maxNumParticles = 1000; //a global constant variable

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
    ofSetFrameRate(60);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i < m_particles.size(); i++)m_particles[i].update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0); //set the background to black
    
    ofPushMatrix(); //begin a new coordinate space
    
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // translate to the center of the screen
        
        for(int i = 0; i < m_particles.size(); i++){
            m_particles[i].draw();
        }
        
    
    ofPopMatrix(); //close the coordinate space

    ofSetColor(100);
    
    ofDrawBitmapString("framerate: " + ofToString(ofGetFrameRate()), 20,20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    m_particles.push_back(particle());
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
        
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}