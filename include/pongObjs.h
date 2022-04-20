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
    void reset(); 
};

class Ball : public MovingObj
{ 
private:
    float radius; 
public : 
    Ball(){
        Vec2 init = Vec2(0,0);
        this->setPos( &init); 
        this->setVel( &init); 
        radius = 1.0;  
    }
    Ball(double _x, double _y){
        Vec2 initP = Vec2(_x,_y);
        Vec2 initV = Vec2(0,0);
        this->setPos( &initP); 
        this->setVel( &initV);
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
        Vec2 init = Vec2(0,0);
        this->setPos( &init); 
        this->setVel( &init); 
        width  = 1.0; 
        height = 5.0;  
    }
     Paddle(double _x, double _y){
        Vec2 initP = Vec2(_x,_y);
        Vec2 initV = Vec2(0,0);
        this->setPos( &initP); 
        this->setVel( &initV); 
        width  = 1.0; 
        height = 5.0;  
    }
    float getHeight()           {return height;}
    float getWidth()            {return width;}
    void setHeight(float &h)    {this->height = h;}
    void setWidth(float &w)     {this->width = w;}
    void print(); 

    void moveUp();
    void moveDown();
};




#endif