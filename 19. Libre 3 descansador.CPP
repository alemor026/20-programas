#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

 int main()

{

	int m, n, i, z, a, minutos, segundos;
   int op;

   system("color 7C");
    gotoxy(10,10);
    cout<<"Duracion del descansador en minutos: ";
    cin >> minutos;
    system("cls");

    segundos=0;
    while(minutos>=0){
        Sleep(1000);
        system("cls");
        if (segundos<1){
            segundos=60;

            minutos=minutos-1;
        }

        segundos=segundos -1;
        if(segundos<10){
            if(minutos<10){
            gotoxy(5,25);
                cout << "0" << minutos << ":0" << segundos;
            }
            else{
            gotoxy(5,25);
                cout << "0" << minutos << ":0" << segundos;
            }
        }else{
            if(minutos<10){
            gotoxy(5,25);
                cout << "0" << minutos << ":" << segundos;
            }
            else{
            gotoxy(5,25);
                cout << "0" << minutos << ":" << segundos;
            }

        }

do{
system("cls");


for(i=0; i<22; i++)
    {
   system("COLOR 4");
   gotoxy(1,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(20,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 9");
   gotoxy(25,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 4");
   gotoxy(60,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(65,i);
   printf("UMG");
   Sleep(100);
 }

 for(i=18; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(5,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 4");
   gotoxy(10,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(15,i);
   printf("UMG");
   Sleep(100);

          }

     for(i=65; i<95; i+=5)
    {
   system("COLOR 9");
   gotoxy(i,0);
   printf("UMG");
   Sleep(100);

   system("COLOR 4");
   gotoxy(i,21);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(i,13);
   printf("UMG");
   Sleep(100);
    }

  for(i=13; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(90,i);
   printf("UMG");
   Sleep(100);
    }


    for(i=0; i<1; i++)
    {
   system("COLOR 4");
   gotoxy(30,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=1; i<2; i++)
    {
   system("COLOR 6");
   gotoxy(31,i);
   printf("UMG");
   Sleep(100);
    }

   for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(32,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 4");
   gotoxy(33,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=4; i<5; i++)
    {
   system("COLOR 6");
   gotoxy(34,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(35,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=6; i<7; i++)
    {
   system("COLOR 4");
   gotoxy(36,i);
   printf("UMG");
   Sleep(100);
    }



    for(i=7; i<8; i++)
    {
   system("COLOR 6");
   gotoxy(37,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(38,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=9; i<10; i++)
    {
   system("COLOR 4");
   gotoxy(39,i);
   printf("UMG");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 6");
   gotoxy(40,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=11; i<12; i++)
    {
   system("COLOR 9");
   gotoxy(42,i);
   printf("UMG");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 4");
   gotoxy(44,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=9; i<10; i++)
    {
   system("COLOR 6");
   gotoxy(45,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(46,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=7; i<8; i++)
    {
   system("COLOR 4");
   gotoxy(47,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=6; i<7; i++)
    {
   system("COLOR 6");
   gotoxy(48,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(49,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=4; i<5; i++)
    {
   system("COLOR 4");
   gotoxy(50,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 6");
   gotoxy(51,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(52,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=1; i<2; i++)
    {
   system("COLOR 4");
   gotoxy(53,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=0; i<1; i++)
    {
   system("COLOR 6");
   gotoxy(54,i);
   printf("UMG");
   Sleep(100);
    }

  for(i=0; i<22; i++)
    {
   system("COLOR 4");
   gotoxy(1,i);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(20,i);
   printf("   ");
   Sleep(100);

   system("COLOR 9");
   gotoxy(25,i);
   printf("   ");
   Sleep(100);

   system("COLOR 4");
   gotoxy(60,i);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(65,i);
   printf("   ");
   Sleep(100);
 }

 for(i=18; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(5,i);
   printf("   ");
   Sleep(100);

   system("COLOR 4");
   gotoxy(10,i);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(15,i);
   printf("   ");
   Sleep(100);

          }

     for(i=65; i<95; i+=5)
    {
   system("COLOR 9");
   gotoxy(i,0);
   printf("   ");
   Sleep(100);

   system("COLOR 4");
   gotoxy(i,21);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(i,13);
   printf("   ");
   Sleep(100);
    }

  for(i=13; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(90,i);
   printf("   ");
   Sleep(100);
    }


    for(i=0; i<1; i++)
    {
   system("COLOR 4");
   gotoxy(30,i);
   printf("   ");
   Sleep(100);
    }

    for(i=1; i<2; i++)
    {
   system("COLOR 6");
   gotoxy(31,i);
   printf("   ");
   Sleep(100);
    }

   for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(32,i);
   printf("   ");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 4");
   gotoxy(33,i);
   printf("   ");
   Sleep(100);
    }

    for(i=4; i<5; i++)
    {
   system("COLOR 6");
   gotoxy(34,i);
   printf("   ");
   Sleep(100);
    }

    for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(35,i);
   printf("   ");
   Sleep(100);
    }

    for(i=6; i<7; i++)
    {
   system("COLOR 4");
   gotoxy(36,i);
   printf("   ");
   Sleep(100);
    }

    for(i=7; i<8; i++)
    {
   system("COLOR 6");
   gotoxy(37,i);
   printf("   ");
   Sleep(100);
    }

    for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(38,i);
   printf("   ");
   Sleep(100);
    }

    for(i=9; i<10; i++)
    {
   system("COLOR 4");
   gotoxy(39,i);
   printf("   ");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 6");
   gotoxy(40,i);
   printf("   ");
   Sleep(100);
    }

    for(i=11; i<12; i++)
    {
   system("COLOR 9");
   gotoxy(42,i);
   printf("   ");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 4");
   gotoxy(44,i);
   printf("   ");
   Sleep(100);
    }

        for(i=9; i<10; i++)
    {
   system("COLOR 6");
   gotoxy(45,i);
   printf("   ");
   Sleep(100);
    }

        for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(46,i);
   printf("   ");
   Sleep(100);
    }

        for(i=7; i<8; i++)
    {
   system("COLOR 4");
   gotoxy(47,i);
   printf("   ");
   Sleep(100);
    }

        for(i=6; i<7; i++)
    {
   system("COLOR 6");
   gotoxy(48,i);
   printf("   ");
   Sleep(100);
    }

        for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(49,i) ;
   printf("   ");
   Sleep(100);
    }

        for(i=4; i<5; i++)
    {
   system("COLOR 4");
   gotoxy(50,i);
   printf("   ");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 6");
   gotoxy(51,i);
   printf("   ");
   Sleep(100);
    }

    for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(52,i);
   printf("   ");
   Sleep(100);
    }

        for(i=1; i<2; i++)
    {
   system("COLOR 4");
   gotoxy(53,i);
   printf("   ");
   Sleep(100);
    }

    for(i=0; i<1; i++)
    {
   system("COLOR 6");
   gotoxy(54,i);
   printf("   ");
   Sleep(100);
    }

    for(i=0; i<22; i++)
    {
   system("COLOR 4");
   gotoxy(1,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(20,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 9");
   gotoxy(25,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 4");
   gotoxy(60,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(65,i);
   printf("UMG");
   Sleep(100);
 }

 for(i=18; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(5,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 4");
   gotoxy(10,i);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(15,i);
   printf("UMG");
   Sleep(100);

          }

     for(i=65; i<95; i+=5)
    {
   system("COLOR 9");
   gotoxy(i,0);
   printf("UMG");
   Sleep(100);

   system("COLOR 4");
   gotoxy(i,21);
   printf("UMG");
   Sleep(100);

   system("COLOR 6");
   gotoxy(i,13);
   printf("UMG");
   Sleep(100);
    }

  for(i=13; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(90,i);
   printf("UMG");
   Sleep(100);
    }


    for(i=0; i<1; i++)
    {
   system("COLOR 4");
   gotoxy(30,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=1; i<2; i++)
    {
   system("COLOR 6");
   gotoxy(31,i);
   printf("UMG");
   Sleep(100);
    }

   for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(32,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 4");
   gotoxy(33,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=4; i<5; i++)
    {
   system("COLOR 6");
   gotoxy(34,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(35,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=6; i<7; i++)
    {
   system("COLOR 4");
   gotoxy(36,i);
   printf("UMG");
   Sleep(100);
    }



    for(i=7; i<8; i++)
    {
   system("COLOR 6");
   gotoxy(37,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(38,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=9; i<10; i++)
    {
   system("COLOR 4");
   gotoxy(39,i);
   printf("UMG");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 6");
   gotoxy(40,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=11; i<12; i++)
    {
   system("COLOR 9");
   gotoxy(42,i);
   printf("UMG");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 4");
   gotoxy(44,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=9; i<10; i++)
    {
   system("COLOR 6");
   gotoxy(45,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(46,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=7; i<8; i++)
    {
   system("COLOR 4");
   gotoxy(47,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=6; i<7; i++)
    {
   system("COLOR 6");
   gotoxy(48,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(49,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=4; i<5; i++)
    {
   system("COLOR 4");
   gotoxy(50,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 6");
   gotoxy(51,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(52,i);
   printf("UMG");
   Sleep(100);
    }

        for(i=1; i<2; i++)
    {
   system("COLOR 4");
   gotoxy(53,i);
   printf("UMG");
   Sleep(100);
    }

    for(i=0; i<1; i++)
    {
   system("COLOR 6");
   gotoxy(54,i);
   printf("UMG");
   Sleep(100);
    }

  for(i=0; i<22; i++)
    {
   system("COLOR 4");
   gotoxy(1,i);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(20,i);
   printf("   ");
   Sleep(100);

   system("COLOR 9");
   gotoxy(25,i);
   printf("   ");
   Sleep(100);

   system("COLOR 4");
   gotoxy(60,i);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(65,i);
   printf("   ");
   Sleep(100);
 }

 for(i=18; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(5,i);
   printf("   ");
   Sleep(100);

   system("COLOR 4");
   gotoxy(10,i);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(15,i);
   printf("   ");
   Sleep(100);

          }

     for(i=65; i<95; i+=5)
    {
   system("COLOR 9");
   gotoxy(i,0);
   printf("   ");
   Sleep(100);

   system("COLOR 4");
   gotoxy(i,21);
   printf("   ");
   Sleep(100);

   system("COLOR 6");
   gotoxy(i,13);
   printf("   ");
   Sleep(100);
    }

  for(i=13; i<22; i++)
    {
   system("COLOR 9");
   gotoxy(90,i);
   printf("   ");
   Sleep(100);
    }


    for(i=0; i<1; i++)
    {
   system("COLOR 4");
   gotoxy(30,i);
   printf("   ");
   Sleep(100);
    }

    for(i=1; i<2; i++)
    {
   system("COLOR 6");
   gotoxy(31,i);
   printf("   ");
   Sleep(100);
    }

   for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(32,i);
   printf("   ");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 4");
   gotoxy(33,i);
   printf("   ");
   Sleep(100);
    }

    for(i=4; i<5; i++)
    {
   system("COLOR 6");
   gotoxy(34,i);
   printf("   ");
   Sleep(100);
    }

    for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(35,i);
   printf("   ");
   Sleep(100);
    }

    for(i=6; i<7; i++)
    {
   system("COLOR 4");
   gotoxy(36,i);
   printf("   ");
   Sleep(100);
    }

    for(i=7; i<8; i++)
    {
   system("COLOR 6");
   gotoxy(37,i);
   printf("   ");
   Sleep(100);
    }

    for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(38,i);
   printf("   ");
   Sleep(100);
    }

    for(i=9; i<10; i++)
    {
   system("COLOR 4");
   gotoxy(39,i);
   printf("   ");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 6");
   gotoxy(40,i);
   printf("   ");
   Sleep(100);
    }

    for(i=11; i<12; i++)
    {
   system("COLOR 9");
   gotoxy(42,i);
   printf("   ");
   Sleep(100);
    }


    for(i=10; i<11; i++)
    {
   system("COLOR 4");
   gotoxy(44,i);
   printf("   ");
   Sleep(100);
    }

        for(i=9; i<10; i++)
    {
   system("COLOR 6");
   gotoxy(45,i);
   printf("   ");
   Sleep(100);
    }

        for(i=8; i<9; i++)
    {
   system("COLOR 9");
   gotoxy(46,i);
   printf("   ");
   Sleep(100);
    }

        for(i=7; i<8; i++)
    {
   system("COLOR 4");
   gotoxy(47,i);
   printf("   ");
   Sleep(100);
    }

        for(i=6; i<7; i++)
    {
   system("COLOR 6");
   gotoxy(48,i);
   printf("   ");
   Sleep(100);
    }

        for(i=5; i<6; i++)
    {
   system("COLOR 9");
   gotoxy(49,i) ;
   printf("   ");
   Sleep(100);
    }

        for(i=4; i<5; i++)
    {
   system("COLOR 4");
   gotoxy(50,i);
   printf("   ");
   Sleep(100);
    }

    for(i=3; i<4; i++)
    {
   system("COLOR 6");
   gotoxy(51,i);
   printf("   ");
   Sleep(100);
    }

    for(i=2; i<3; i++)
    {
   system("COLOR 9");
   gotoxy(52,i);
   printf("   ");
   Sleep(100);
    }

        for(i=1; i<2; i++)
    {
   system("COLOR 4");
   gotoxy(53,i);
   printf("   ");
   Sleep(100);
    }

    for(i=0; i<1; i++)
    {
   system("COLOR 6");
   gotoxy(54,i);
   printf("   ");
   Sleep(100);
    }



    } while(segundos=0);

 }

 getch();
   return 0;

}


