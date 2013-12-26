//
//  Balls.cpp
//  lekLekLek
//
//  Created by Benoit Espinola on 23/12/13.
//
//

#include "Balls.h"
#include "ofMain.h"
#include "math.h"
#include <vector>

Balls::Balls(){
    for (int i = 0 ; i < 5000; i++) {
        minhasGotas.push_back( Gota() );
    }
}


void Balls::update(){
    
    for(int i = minhasGotas.size() ; i > 0; i--){
        minhasGotas[i].update(mouseX, mouseY);
    }
}

void Balls::draw(){
    for(int i = minhasGotas.size() ; i > 0; i--){
        minhasGotas[i].draw();
    }
}

void Balls::mouseMoved(int _x, int _y){
    mouseX = _x;
    mouseY = _y;
}