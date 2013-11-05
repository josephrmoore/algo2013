//
//  Mover.h
//  Acceleration
//
//  Created by Charlie Whitney on 9/2/13.
//
//

#pragma once

#include "ofMain.h"

class Mover {
  public:
    Mover();
    
    void update();
    void draw();
    
    ofPoint     pos, mousePos;
    ofVec2f     velocity, accel;
};