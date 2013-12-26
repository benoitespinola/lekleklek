//
//  Gota.h
//  lekLekLek
//
//  Created by Benoit Espinola on 23/12/13.
//
//

#pragma once

#include <iostream>


class Gota{
    public :
    
    int x, y;
    
    Gota();
    Gota(int _radiusOffset);
    Gota(int _radiusOffset, int _x, int _y);
    void draw();
    void update();
    void update(int _x, int _y);
    
    
    
    private :
    
    float radius;
    float radiusOffset;
    float timeOffset;
    
    int poly;
};