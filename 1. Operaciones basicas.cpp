#include <iostream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

int opcion;
char r;
float primero=1;
float segundo=1;
float resultado;

int main(){
do {
cout << "			OPERACIONES BASICAS					" << endl;
cout << "-----------------------------------------------" << endl;
cout << "												" << endl;
cout << "Que operacion desea realizar: \nSuma [1] \nResta [2] \nMultiplicacion [3] \nDivision [4]." << endl;
cin >> opcion;
cout << "Ingrese un numero: ";
cin >> primero;
cout << "Ingrese un numero: ";
cin >> segundo;

if (opcion==1){
    resultado = primero+segundo;
}


if (opcion==2){
    resultado = primero-segundo;
}

if (opcion==3){
    resultado = primero*segundo;
}

if (opcion==4){
    resultado = primero/segundo;
}

cout << resultado;
cin.ignore();
cin.get();
cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 
return 0;

}
