#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "pongObjs.h"

class GameManager
{
private:
    // screen size 
    int screenWidth, screenHeight; 
    int scoreP1, scoreP2;
    // commands 
    char up1,down1,up2,down2; 
    bool gameIsRunning; 
    Ball *ball; 
    Paddle *player1; 
    Paddle *player2; 

public: 
    // Constructor 
    GameManager(int _screenWidth, int _screenHeight)
    {
        // INITIALIZE GAME PARAMETERS 
        srand(time(NULL));              // randomize 
        gameIsRunning   = true; 
        screenHeight    = _screenHeight; 
        screenWidth     = _screenWidth; 
        up1             = 'w'; 
        down1           = 's'; 
        up2             = 'i';
        down2           = 'k'; 
        scoreP1 = scoreP2 = 0; 

        ball = new Ball(screenWidth/2, screenHeight/2); 
        player1 = new Paddle(1, screenHeight/2 - 3); 
        player2 = new Paddle(screenWidth-2, screenHeight/2 -3); 
    }

    // Destructor 
    ~GameManager()
    {
        delete ball,player1,player2;
    }

    void ScoreUp(Paddle *player); 


};

















#endif 