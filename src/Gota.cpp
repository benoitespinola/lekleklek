//
//  Gota.cpp
//  lekLekLek
//
//  Created by Benoit Espinola on 23/12/13.
//
//

#include "Gota.h"
#include "ofMain.h"
#include "math.h"


Gota::Gota(){
    x = ofRandomWidth();
    y = ofRandomHeight();
    radiusOffset = ofRandom(5)+2;
    timeOffset = ofRandom(1000);
    
//    poly = (int)ofRandom(2,9);
}

Gota::Gota(int _radiusOffset){
    x = ofGetWindowWidth()/2;
    y = ofGetWindowHeight()/2;
    radiusOffset = _radiusOffset;
    timeOffset = ofRandom(1000);
}

Gota::Gota(int _radiusOffset, int _x, int _y){
    x = _x;
    y = _y;
    radiusOffset = _radiusOffset;
    timeOffset = ofRandom(1000);
}


void Gota::draw(){
//    ofSetCircleResolution(poly);
    ofCircle(x, y, radius);
}

void Gota::update(){
    radius = sin(TWO_PI*((int)(timeOffset+ofGetElapsedTimeMillis())%1000)/1000)*radiusOffset/2+radiusOffset;
    
}

void Gota::update(int _x, int _y){
    radius = sin(TWO_PI*((int)(timeOffset+ofGetElapsedTimeMillis())%1000)/1000)*radiusOffset/2+radiusOffset;
    radius /= cos( ofMap(MAX(ofDist(x, y, _x, _y), radiusOffset*2), 0, ofDist(0, 0, ofGetWindowWidth(), ofGetWindowHeight()), HALF_PI, 0)) * 20 + 0.1;
    radius = MIN(9, radius);
//    radius = (MIN(9, radius)+radiusOffset)/1.75;
}