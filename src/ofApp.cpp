#include "ofApp.h"

//TASK - make a second vector of square particles

//Other ideas ...
//add rotation to the square particles
//use ofNoise to add some random movement to the normal particles

const int g_maxNumParticles = 1000; //a global constant variable

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
    ofSetFrameRate(60);
    
    m_minParticleSize = 2;
    m_addAmount = 10;
    m_isMouseDown = false;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){


    
    for(int i = 0; i < m_particles.size(); ){ //NB. we are not necessarily incrementing i every time
        
        m_particles[i].update();
        
        if(m_particles[i].getSize() < 2){
            
            m_particles.erase(m_particles.begin() + i); //this is how erase from a vector object
            // the vector is shorter 
            
        }else{
            i++; //no particle has been removed so we need to increment as normal
        }
  
    }
    
    if(m_isMouseDown){
        
        ofVec2f pos( mouseX - ofGetWidth()/2 , mouseY - ofGetHeight()/2);
        float speed = ofRandom(10,40);
        
        if(m_particles.size() < g_maxNumParticles){
            
            for(int i = 0; i < 10; i++)m_particles.push_back(particle(pos, speed));
            
        }
        
    }
    
    
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
    

    m_isMouseDown = true;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    m_isMouseDown = false;

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