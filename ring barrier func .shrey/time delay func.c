#include <stdio.h>
#include <stdlib.h>

struct lane
    {
        char straight[10];
        char right[10];
    }pairs[4];
typedef struct lane way;

void func1()
{
    //struct Queue Q = {.front = 0, .rear = 0};
    //changing the structure values
    way pairs[0].straight='green';
    way pairs[0].right='green';

    way pairs[1].straight='yellow';
    way pairs[1].right='yellow';

    for(i=2;i<4;++i){
        way pairs[i].straight='red';
        way pairs[i].right='red';
    }
    //calling the printing function
    //with arguments as values inside pairs

int main()
{
    way pairs[0].straight='1';
    way pairs[0].right='5';
    way pairs[1].straight='2';
    way pairs[1].right='6';
    way pairs[2].straight='3';
    way pairs[2].right='7';
    way pairs[3].straight='4';
    way pairs[3].right='8';

    //ascii value of the delete button on keyboard is 127
    char input[5];
    printf("PRESS ||DELETE|| BUTTON TO ESCAPE FROM THE SIMULATION");
    //how to input from the user

    func1();
    return 3;
}
