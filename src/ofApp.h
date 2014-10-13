#pragma once //this line of code prevents the header file from being included twice by the pre-processor

#include "ofMain.h"
#include "squareParticle.h" //include our particle class

//NB. we don't need to include particle here anymore as it has already been included by square particle

class ofApp : public ofBaseApp{
    
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


    
    vector<particle> m_particles; // vector is a dynamic array. It comes from the standard library

    
    //some other member variables
    int m_minParticleSize;
    int m_addAmount;
    bool m_isMouseDown;
    
};
