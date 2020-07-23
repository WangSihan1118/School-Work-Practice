#ifndef TOOL_H
#define TOOL_H
#include <string>
using namespace std;

class Tool
{
private:
    string sound;
public:
    Tool(string s);
    ~Tool();
    virtual string get_sound();
};
#endif
