#include <iostream>
#include <stdlib.h>
extern void print_as_binary(std::string);
int main(int argc,char **argv)
{
    print_as_binary("1234");
    return 0 ;
}