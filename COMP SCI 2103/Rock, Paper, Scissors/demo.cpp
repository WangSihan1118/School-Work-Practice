#include <iostream>
using namespace std;
int main()
{
    enum game_result {win, lose, tie};
    //Use a two- dimension array to display the results
    game_result table [3][3] = {{tie, lose, win},
                                {win, tie, lose},
                                {lose, win, tie}};
    Game_Start:
    int human_player;
    std::cout<<"Please select you gesture"<<std::endl;
    std::cout<<"0 for Rock"<<std::endl;
    std::cout<<"1 for Paper"<<std::endl;
    std::cout<<"2 for Scissors"<<std::endl;
    std::cin>>human_player;

    int AI_player = rand() % 3;

    game_result result = table[human_player][AI_player];

    switch (result)
    {
    case tie:
        std::cout<<"Tie!"<<std::endl;
        break;
    case win:
        std::cout<<"You win!"<<std::endl;
        break;
    case lose:
        std::cout<<"You lose!"<<std::endl;
        break;
    }
    goto Game_Start;
    return 0;
}