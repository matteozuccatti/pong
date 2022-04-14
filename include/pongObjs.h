#ifndef PONGOBJS_H
#define PONGOBJS_H

#include <math.h>

class Vec2
{
public :
    double x; 
    double y;
    double mag; 
    double ang; 
    // Constructors
    Vec2(){
        x = 0.0; 
        y = 0.0; 
        updateMagnitude();
        updateAngle();
    }
    Vec2(float _x, float _y){
        x = _x; 
        y = _y;
        updateMagnitude();
        updateAngle();        
    }
    // Print values of the Vec2 
    void printVal(); 
    // Update magnitude and angle
    void updateMagnitude(); 
    void updateAngle(); 

    // Operator overloading 
    Vec2 operator+(const Vec2& v);
    Vec2 operator-(const Vec2& v);
    Vec2 operator*(const double val);
};


class MovingObj
{
    Vec2 pos;
    Vec2 vel;  

public:
    Vec2 getPos()            {return pos;}
    Vec2 getVel()            {return vel;}
    void setPos(Vec2 *p)     {this->pos.x = p->x; this->pos.y = p->y;}
    void setVel(Vec2 *v)     {this->vel.x = v->x; this->vel.y = v->y;}

    void changeDirection(Vec2 &v);
    void move();  
    void printStatus(); 
};

class Ball : public MovingObj
{ 
private:
    float radius; 
public : 
    Ball(){
        this->setPos( &Vec2(0,0)); 
        this->setVel( &Vec2(0,0)); 
        radius = 1.0;  
    }
    float getRadius()           {return radius;}
    void setRadius(float &r)    {this->radius = r;}        
    void print();           
};

class Paddle : public MovingObj
{
private: 
    float width; 
    float height;
public: 
    Paddle(){
        this->setPos( &Vec2(0,0)); 
        this->setVel( &Vec2(0,0)); 
        width  = 1.0; 
        height = 5.0;  
    }
    float getHeight()           {return height;}
    float getWidth()            {return width;}
    void setHeight(float &h)    {this->height = h;}
    void setWidth(float &w)     {this->width = w;}
    void print(); 
};




#endif