#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int op;
char r;
main(){

do {
	cout<<"\t\t\tFiguras geometricas\n";
	cout<<"\t\t 1. Circulo\n";
	cout<<"\t\t 2. Triangulo\n";
	cout<<"\t\t 3. Cuadrado\n";
	cout<<"\t\t 4. Rombo\n";
	cout<<"\t\t 5. Rectangulo\n";
	cout<<"\t\t 6. Salir\n";
	cout<<"\t\tEscoja su opcion\n";
	cin >> op;
	
if (op==1){	system("cls");
printf("\n");
printf("          *******              \n");
printf("      ***************          \n");
printf("    *******************        \n");
printf("  ***********************      \n");
printf(" *************************     \n");
printf("***************************    \n");
printf("***************************    \n");
printf("***************************    \n");
printf("***************************    \n");
printf(" *************************     \n");
printf("  ***********************      \n");
printf("    *******************        \n");
printf("      ***************          \n");
printf("          *******              \n");
			
}
if (op==2){
	system("cls");
	int lineas;
    printf("Ingresa la cantidad de lineas para el triangulo: ");
    scanf("%d", &lineas);
    int i;
    for (i = 1; i <= lineas; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
		

if (op==3){
			system("cls");
			 int lado = 0;
      int horizontal = 1;
      int vertical = 1;
     
      printf("Por favor introduzca la medida del lado : "); scanf("%d", &lado);
      printf("\n");
     
            while (lado < 1 || lado > 20) {
            printf("El numero introducido no es correcto\n\n");
            printf("Por favor introduzca la medida del lado (entre 1 y 20): "); scanf("%d", &lado);
            printf("\n");
            }     
     
              
     while (vertical <= lado) {
           while (horizontal <= lado) {
                 if (vertical != 1 || vertical != lado){
                               if (horizontal != 1 || horizontal != lado){
                                             printf("o");
                                             horizontal++; } 
                               else {
                                    printf("*");
                                    horizontal++;}
                               }            
                                             
                 else {
                 printf("*");
                 horizontal++; }
                 } 
           horizontal = 1;
           printf("\n");
           vertical++; } 
     	
}			
if (op==4){
	system("cls");
	    int NFILAS = 4;
    int NCOLUMNAS = 4;
    int n, c, k, space = 1;

    n = NFILAS;

    space = n - 1;

    for (k = 1; k <= n; k++) {
        for (c = 1; c <= space; c++)
            printf(" ");

        space--;

        for (c = 1; c <= 2*k-1; c++)
            if (c%2 ==0) {
                printf("*");
            } else {
                printf(" ");
            }

        printf("\n");
    }

    space = 1;

    for (k = 1; k <= n - 1; k++) {
        for (c = 1; c <= space; c++)
            printf(" ");

        space++;

        for (c = 1 ; c <= 2*(n-k)-1; c++)
            if (c%2 ==0) {
                printf("*");
            } else {
                printf(" ");
            }

        printf("\n");
    }
}	

if (op==5){
	system("cls");
	int alto, ancho, fila, columna;
cout<<"Introduzca el ANCHO del rectangulo:";
cin>>ancho;
cout<<"Introduzca el ALTO del rectangulo:";
cin>>alto;

for(fila=0;fila<alto;fila=fila+1)
{
   for(columna=0;columna<ancho;columna=columna+1)
   cout<<"*";
   cout<<endl;
}
}	
		
	cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");

}while (toupper (r)=='S');
	cout<<"Adios, Buen dia"; 

}
