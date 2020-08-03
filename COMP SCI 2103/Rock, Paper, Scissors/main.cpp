#include <iostream>
#include "Referee.h"
#include "AI.h"
#include "Human.h"

using namespace std;

int main()
{
    Human* human_player = new Human();
    AI* ai_Player = new AI();
    std::cout<<"Please select you gesture"<<std::endl;
    std::cout<<"0 for Rock"<<std::endl;
    std::cout<<"1 for Paper"<<std::endl;
    std::cout<<"2 for Scissors"<<std::endl;
    int g;
    cin>>g;
    human_player->setGesture(g);
    ai_Player->setGesture();
    int h_result = human_player->getGesture();
    int a_result = ai_Player->getGesture();
    Referee* referee = new Referee;
    referee->readGesture(h_result, a_result);
    game_result result = referee->getResult();
    return 0;
}