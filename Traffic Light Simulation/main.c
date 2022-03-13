#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void welcome()
{

  char a[6]={'a','b','c','d'};
  int i,j,z,k,l;

  for(z=0;z>=0;z++)
  {
  if (kbhit())
    break;
  for(i=0;i<150;i++)
  {
  if (kbhit())
  {
      i=150;
      break;
  }

  for(l=0;l<13;l++)
  {

        if(a[l]=='a')
        {
        k=l*10;
        gotoxy(i,k);
        printf("@@@@@@@@@@  @@@@@@@@         @@      @@@@@@@@@  @@@@@@@@@  @@@@@@@@@@   @@@@@@@@@\n");
        gotoxy(i,k+1);
        printf("@@@@@@@@@@  @@     @@      @@  @@    @@@@@@@@@  @@@@@@@@@  @@@@@@@@@@  @@@@@@@@@\n");
        gotoxy(i,k+2);
        printf("    @@      @@      @@    @@    @@   @@         @@             @@      @@\n");
        gotoxy(i,k+3);
        printf("    @@      @@     @@    @@      @@  @@         @@             @@      @@\n");
        gotoxy(i,k+4);
        printf("    @@      @@@@@@@@     @@@@@@@@@@  @@@@@@@@   @@@@@@@@       @@      @@\n");
        gotoxy(i,k+5);
        printf("    @@      @@ @@        @@      @@  @@         @@             @@      @@\n");
        gotoxy(i,k+6);
        printf("    @@      @@   @@      @@      @@  @@         @@             @@      @@\n");
        gotoxy(i,k+7);
        printf("    @@      @@     @@    @@      @@  @@         @@         @@@@@@@@@@  @@@@@@@@@\n");
        gotoxy(i,k+8);
        printf("    @@      @@       @@  @@      @@  @@         @@         @@@@@@@@@@   @@@@@@@@@\n");
        }


        if(a[l]=='b')

        {
          k=l*10;
          gotoxy(i,k);
          printf(" @@@@@@@@@  @@@@@@@@@@    @@@@@@@@@   @@         @@      @@      @@\n");
          gotoxy(i,k+1);
          printf("@@@@@@@@@   @@@@@@@@@@   @@@@@@@@@@@  @@@@       @@    @@  @@    @@\n");
          gotoxy(i,k+2);
          printf("@@              @@      @@            @@ @@      @@   @@    @@   @@\n");
          gotoxy(i,k+3);
          printf("@@              @@      @@            @@  @@     @@  @@      @@  @@\n");
          gotoxy(i,k+4);
          printf("@@@@@@@@@@      @@      @@    @@@@@@  @@   @@    @@  @@@@@@@@@@  @@\n");
          gotoxy(i,k+5);
          printf("        @@      @@      @@    @@@@@@  @@    @@   @@  @@      @@  @@\n");
          gotoxy(i,k+6);
          printf("        @@      @@      @@    @   @@  @@      @@ @@  @@      @@  @@\n");
          gotoxy(i,k+7);
          printf("@@@@@@@@@   @@@@@@@@@@   @@@@@@   @@  @@       @@@@  @@      @@  @@@@@@@@\n");
          gotoxy(i,k+8);
          printf(" @@@@@@@@@  @@@@@@@@@@    @@@@@   @@  @@         @@  @@      @@  @@@@@@@@\n");
        }

        if(a[l]=='c')

        {
          k=l*10;
          gotoxy(i,k);
          printf(" @@@@@@@@@  @@@@@@@@@@  @@            @@  @@         @@  @@            @@      @@@@@@@@@@  @@@@@@@@@@    @@@@@@@@@    @@         @@\n");
          gotoxy(i,k+1);
          printf("@@@@@@@@@   @@@@@@@@@@  @@@@        @@@@  @@         @@  @@          @@  @@    @@@@@@@@@@  @@@@@@@@@@   @@@@@@@@@@@   @@@@       @@\n");
          gotoxy(i,k+2);
          printf("@@              @@      @@ @@      @@ @@  @@         @@  @@         @@    @@       @@          @@      @@         @@  @@ @@      @@\n");
          gotoxy(i,k+3);
          printf("@@              @@      @@  @@    @@  @@  @@         @@  @@        @@      @@      @@          @@      @@         @@  @@  @@     @@\n");
          gotoxy(i,k+4);
          printf("@@@@@@@@@@      @@      @@   @@  @@   @@  @@         @@  @@        @@@@@@@@@@      @@          @@      @@         @@  @@   @@    @@\n");
          gotoxy(i,k+5);
          printf("        @@      @@      @@    @@@@    @@  @@         @@  @@        @@      @@      @@          @@      @@         @@  @@    @@   @@\n");
          gotoxy(i,k+6);
          printf("        @@      @@      @@            @@  @@         @@  @@        @@      @@      @@          @@      @@         @@  @@      @@ @@\n");
          gotoxy(i,k+7);
          printf("@@@@@@@@@   @@@@@@@@@@  @@            @@   @@@@@@@@@@@   @@@@@@@@  @@      @@      @@      @@@@@@@@@@   @@@@@@@@@@@   @@       @@@@\n");
          gotoxy(i,k+8);
          printf(" @@@@@@@@@  @@@@@@@@@@  @@            @@    @@@@@@@@@    @@@@@@@@  @@      @@      @@      @@@@@@@@@@    @@@@@@@@@    @@         @@\n");
        }

        if(a[l]=='d')

        {
          printf("\n\n\n\n\n\n\n\n\n\n                                                                                          PRESS ENTER TO CONTINUE\n");
        }


  }

  system("CLS");

  }

}
}

void music()
{
    PlaySound(TEXT("C:\\Users\\Ayush Raj\\Downloads\\Music\\music.wav"),NULL,SND_ASYNC);
}

void main()
{
    music();
    welcome();
    getchar();
    printf("Hello World");
}
