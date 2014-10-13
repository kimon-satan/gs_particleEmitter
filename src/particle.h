//
//  particle.h
//  particleEmitter
//
//  Created by Simon on 13/10/2014.
//
//

#ifndef __particleEmitter__particle__ //this is another way of prevent a header file being
#define __particleEmitter__particle__ //included twice by the pre-processor
                                      //in standard code we would write if(!isParticleDefined){isParticleDefined = true;}

#include "ofMain.h" //ofMain.h gives us access to everything in the openFrameworks library
// we need it here as well as in ofApp as this file will be compiled before ofApp


class particle{
    
    public: // anything under this heading is accessible to other classes (normally functions go here)
    
    particle(); //the constructor
    virtual ~particle(); //the destructor
    
    void update();
    virtual void draw(); //this is because the method will be overloaded in square particle
    
    //getters and setters
    float getSize();
    
    
    private: //anything under this heading is only accessible to the same instance
    

    ofVec2f direction;
    float speed;
    float size;
    ofColor col;
    ofVec2f position; //2D coordinate class with lots of useful methods
    
};


#endif /* defined(__particleEmitter__particle__) */ //the end of the pre-processor if block
