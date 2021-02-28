#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
char r;
int main()
{
	do {
    char seguir;
    int i, numero;

    cout << "		Tablas de Multiplicar					" << endl;
	cout << "	---------------------------------------------" << endl;
	cout << "												" << endl;
        printf( "\n   Introduzca un n%cmero : ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

          for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );
            cout << " " << endl;

    
cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S');

    return 0;
}
