#ifndef REFEREE_H
#define REFEREE_H
enum game_result {win, lose, tie};

class Referee
{
public:
    static const  game_result table[3][3] = {{tie, lose, win},
                                                {win, tie, lose},
                                                {lose, win, tie}};;
    int human_gesture;
    int ai_gesture;
public:
    Referee();
    void readGesture(int human, int ai);
    game_result getResult();
    ~Referee();
};
#endif
