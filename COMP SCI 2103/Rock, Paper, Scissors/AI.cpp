#include "AI.h"
AI::AI():Player()
{
}

void AI::setGesture()
{
    int rand_num = rand() % 3;
    gesture = rand_num;
}
AI::~AI()
{
}