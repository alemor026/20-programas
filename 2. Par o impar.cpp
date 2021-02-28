#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
char r;
int main()
{
	do {
    int numero;
    cout << "		Par o Impar						" << endl;
	cout << "   ----------------------------------------" << endl;
	cout << "												" << endl;

    printf( "\n   Introduzca un numero entero: ", 163 );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );

    getch(); /* Pausa */
    
cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 
    return 0;
}
