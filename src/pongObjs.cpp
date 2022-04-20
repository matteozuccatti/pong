#include <iostream>
#include "../include/pongObjs.h"

/*
    VEC2 
*/
void Vec2::printVal()
{
    std::cout << "x:" << this->x << " y:" << this->y; 
}

Vec2 Vec2::operator+(const Vec2& v)
{
    Vec2 vec; 
    vec.x = this->x + v.x; 
    vec.y = this->y + v.y;
    updateMagnitude();
    updateAngle();
    return vec; 
}
Vec2 Vec2::operator-(const Vec2& v)
{
    Vec2 vec; 
    vec.x = this->x - v.x; 
    vec.y = this->y - v.y;
    updateMagnitude();
    updateAngle();
    return vec; 
}
Vec2 Vec2::operator*(const double val)
{
    Vec2 vec; 
    vec.x = this->x * val; 
    vec.y = this->y * val;
    updateMagnitude();
    updateAngle();
    return vec; 
}


void Vec2::updateMagnitude()
{
    this->mag = sqrt(this->x*this->x + this->y*this->y); 
}
void Vec2::updateAngle()
{
    this->ang = atan2(this->y, this->x); 
}


/*
    MOVING OBJECT 
*/
void MovingObj::changeDirection(Vec2 &v)
{
    this->setVel(&v); 
}

void MovingObj::move()
{
    Vec2 newPos = this->getPos() + this->getVel();
    this->setPos(&newPos);
}

void MovingObj::reset()
{
    Vec2 res = Vec2(0,0);
    this->setPos(&res); 
    this->setVel(&res);
}

void MovingObj::printStatus()
{
    std::cout << "pos ["; 
        this->pos.printVal();
    std:: cout << "] ; vel ["; 
        this->vel.printVal(); 
    std::cout << "]\n"; 
}

/*
   BALL
*/
void Ball::print()
{
    std::cout<< "Ball | ";
    this->printStatus();  
}

/*
    PADDLE     
*/
void Paddle::print()
{
     std::cout<< "Paddle | ";
    this->printStatus(); 
}
void Paddle::moveUp()
{
    Vec2 newP = Vec2(0,1) + this->getPos();
    this->setPos(&newP);
}
void Paddle::moveDown()
{
    Vec2 newP = Vec2(0,-1) + this->getPos();
    this->setPos(&newP);
}
