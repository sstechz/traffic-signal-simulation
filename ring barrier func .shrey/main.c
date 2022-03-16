#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int i,j,k;

//delay function
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

struct lane
    {
        char straight[10];
        char right[10];
    }pairs[4];
typedef struct lane way;

void func1()
{
    way pairs[4];
    way *ptr=pairs;

    strcpy((*ptr).straight,"green");
    strcpy((*ptr).right,"green");

    strcpy((*(ptr+1)).straight,"yellow");
    strcpy((*(ptr+1)).right,"yellow");

    strcpy((*(ptr+2)).straight,"red");
    strcpy((*(ptr+2)).right,"red");

    strcpy((*(ptr+3)).straight,"red");
    strcpy((*(ptr+3)).right,"red");

    printf("\n%s\n",(*ptr).straight);
    printf("%s\n",(*ptr).right);
    printf("%s\n",(*(ptr+1)).straight);
    printf("%s\n",(*(ptr+1)).right);
    printf("%s\n",(*(ptr+2)).straight);
    printf("%s\n",(*(ptr+2)).right);
    printf("%s\n",(*(ptr+3)).straight);
    printf("%s\n\n",(*(ptr+3)).right);

}

void func2()
{
    //changing the structure values
    way pairs[4];
    way *ptr=pairs;

    strcpy((*ptr).straight,"red");
    strcpy((*ptr).right,"red");

    strcpy((*(ptr+1)).straight,"green");
    strcpy((*(ptr+1)).right,"green");

    strcpy((*(ptr+2)).straight,"yellow");
    strcpy((*(ptr+2)).right,"yellow");

    strcpy((*(ptr+3)).straight,"red");
    strcpy((*(ptr+3)).right,"red");

    //calling the printing function
    //with arguments as values inside pairs

    printf("\n%s\n",(*ptr).straight);
    printf("%s\n",(*ptr).right);
    printf("%s\n",(*(ptr+1)).straight);
    printf("%s\n",(*(ptr+1)).right);
    printf("%s\n",(*(ptr+2)).straight);
    printf("%s\n",(*(ptr+2)).right);
    printf("%s\n",(*(ptr+3)).straight);
    printf("%s\n\n",(*(ptr+3)).right);
}

void func3()
{
    //changing the structure values
    way pairs[4];
    way *ptr=pairs;

    strcpy((*ptr).straight,"red");
    strcpy((*ptr).right,"red");

    strcpy((*(ptr+1)).straight,"red");
    strcpy((*(ptr+1)).right,"red");

    strcpy((*(ptr+2)).straight,"green");
    strcpy((*(ptr+2)).right,"green");

    strcpy((*(ptr+3)).straight,"yellow");
    strcpy((*(ptr+3)).right,"yellow");
    //calling the printing function
    //with arguments as values inside pairs

    printf("\n%s\n",(*ptr).straight);
    printf("%s\n",(*ptr).right);
    printf("%s\n",(*(ptr+1)).straight);
    printf("%s\n",(*(ptr+1)).right);
    printf("%s\n",(*(ptr+2)).straight);
    printf("%s\n",(*(ptr+2)).right);
    printf("%s\n",(*(ptr+3)).straight);
    printf("%s\n\n",(*(ptr+3)).right);
}

void func4()
{
   //changing the structure values
    way pairs[4];
    way *ptr=pairs;

    strcpy((*ptr).straight,"yellow");
    strcpy((*ptr).right,"yellow");

    strcpy((*(ptr+1)).straight,"red");
    strcpy((*(ptr+1)).right,"red");

    strcpy((*(ptr+2)).straight,"red");
    strcpy((*(ptr+2)).right,"red");

    strcpy((*(ptr+3)).straight,"green");
    strcpy((*(ptr+3)).right,"green");

   //calling the printing function
   //with arguments as values inside pairs

    printf("\n%s\n",(*ptr).straight);
    printf("%s\n",(*ptr).right);
    printf("%s\n",(*(ptr+1)).straight);
    printf("%s\n",(*(ptr+1)).right);
    printf("%s\n",(*(ptr+2)).straight);
    printf("%s\n",(*(ptr+2)).right);
    printf("%s\n",(*(ptr+3)).straight);
    printf("%s\n\n",(*(ptr+3)).right);
}

//==============================================================================================
int main()
{
    way pairs[4];
    way *ptr=pairs;

    //ascii value of the delete button on keyboard is 127
    //ascii value of the esc button on keyboard is 27

    char ch;
    while(1){
        func1();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
        }
        delay(10);
        system("cls");

        func2();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
        }
        delay(10);
        system("cls");

        func3();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
        }
        delay(10);
        system("cls");

        func4();
        printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
        if(kbhit()){
            ch=getch();
            if((int)ch==27) break;
        }
        delay(10);
        system("cls");
    }

    return 3;
}

// char ch;
// while(1){
//     printf("===================  PRESS ESC BUTTON TO EXIT  =====================");
//     if(kbhit){
//         ch=getch();
//         if((int)ch==27) break;
//     }
// }
