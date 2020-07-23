#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>

void count_numbers(int array[4][4]){
    int number_of_zero = 0;
    int number_of_one = 0;
    int number_of_two = 0;
    int number_of_three = 0;
    int number_of_four = 0;
    int number_of_five = 0;
    int number_of_six = 0;
    int number_of_seven = 0;
    int number_of_eight = 0;
    int number_of_nine = 0;

    for(int i = 0;i < 4;i++){
        for (int j = 0; j < 4;j++){
            int number = array[i][j];
            switch(number){
                case 0:
                    number_of_zero++;
                    break;
                case 1:
                    number_of_one++;
                    break;
                case 2:
                    number_of_two++;
                    break;
                case 3:
                    number_of_three++;
                    break;
                case 4:
                    number_of_four++;
                    break;
                case 5:
                    number_of_five++;
                    break;
                case 6:
                    number_of_six++;
                    break;
                case 7:
                    number_of_seven++;
                    break;
                case 8:
                    number_of_eight++;
                    break;
                case 9:
                    number_of_nine++;
                    break;
            }
        }
    }

    std::cout<<0<<':'<<number_of_zero<<';'
    <<1<<':'<<number_of_one<<';'
    <<2<<':'<<number_of_two<<';'
    <<3<<':'<<number_of_three<<';'
    <<4<<':'<<number_of_four<<';'
    <<5<<':'<<number_of_five<<';'
    <<6<<':'<<number_of_six<<';'
    <<7<<':'<<number_of_seven<<';'
    <<8<<':'<<number_of_eight<<';'
    <<9<<':'<<number_of_nine<<';'
    <<std::endl;

}
int main(int argc,char **argv)
{
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    count_numbers(array);
    return 0 ;
}