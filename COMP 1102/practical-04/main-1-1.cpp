#include <string>
using namespace std;

extern void copy_2d_strings(string first[][2], string second[][2], int n);

int main(int arg, char** argv){
    string array1[3][2] = {{"a","b"},{"c","d"},{"e","f"}};
    string array2[3][2] = {{"1","2"},{"3","4"},{"5","6"}};
    copy_2d_strings(array1,array2,3);
    return 0;
}