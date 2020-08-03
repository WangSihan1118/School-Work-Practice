#include "Referee.h"
Referee::Referee()
{
    human_gesture = 0;
    ai_gesture = 0;
}

void Referee::readGesture(int human, int ai)
{
    human_gesture = human;
    ai_gesture = ai;
}

game_result Referee::getResult()
{
    game_result result = table[human_gesture][ai_gesture];
    return result;
}

Referee::~Referee()
{
}