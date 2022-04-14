#include "pongObjs.h"


int main()
{   
    Ball b; 
    Vec2 pos = Vec2(0.0, 0.0); 
    Vec2 vel = Vec2(1.0, 1.0);

    b.setPos(&pos);  
    b.setVel(&vel);

    b.print(); 
    for(int i=0; i<5; ++i){
        b.move(); 
        b.print();
    } 
    vel = vel*0; 
    b.changeDirection(vel);
    for(int i=0; i<5; ++i){
        b.move(); 
        b.print();
    } 



    return 0;
}