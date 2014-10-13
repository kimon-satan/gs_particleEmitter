//
//  newParticle.h
//  particleEmitter
//
//  Created by Simon on 13/10/2014.
//
//

#include "particle.h"



#ifndef __particleEmitter__squareParticle__
#define __particleEmitter__squareParticle__

class squareParticle : public particle{
    
    public:
    
    squareParticle(ofVec2f pos, float t_speed);
    
    void draw(); // this is the bit which we need to change
    
    private:
    
    
};

#endif /* defined(__particleEmitter__newParticle__) */
