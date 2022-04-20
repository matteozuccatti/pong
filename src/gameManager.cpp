#include <time.h>
//#include <conio.h>

#include "../include/gameManager.h"
#include "../include/pongObjs.h"

void GameManager::ScoreUp(Paddle *player)
{
    if (player == player1)
        scoreP1++;
    else if(player == player2)
        scoreP2++;

    ball->reset(); 
    player1->reset(); 
    player2->reset(); 

    Vec2 player1Pos = Vec2(1, screenHeight/2 - 3);
    Vec2 player2Pos = Vec2(screenWidth-2, screenHeight/2 -3);
    player1->setPos(&player1Pos); 
    player2->setPos(&player2Pos); 
}


