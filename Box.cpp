#include "Box.h"
#include <iostream>
// Implement setters and getters

// Implemenet the calcVolume() unction
using namespace std;

void Box::setLength(int l){

length = l;
}

void Box::setwidth(int w){

width = w;
}

void Box::setheight(int h){

height = h;
}
int Box::getLength(){

return length;
}
int Box::getWidth(){

return width;
}
int Box::getHeight(){

return height;
}
int Box::calcVolume(){

return length * width * height;
}

