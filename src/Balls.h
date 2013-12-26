#pragma once

#include <iostream>
#include <vector>
#include "Gota.h"


class Balls{
    public :
        Balls();
    
        void draw();
    
        void update();
    
        void mouseMoved(int _x, int _y);
    
        std::vector<Gota> minhasGotas;
    
    private:
        float mouseX, mouseY;
};