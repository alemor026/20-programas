#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
using namespace std;
char r;
 int I = 0;
 string palabra;
  int numero,p,s,t,c,m,opi;
main (){ 
do { 
	cout << "		Palindromo					" << endl;
	cout << "   -------------------------------------" << endl;
	cout << "												" << endl;
	printf("INTRODUCE LA OPCION\n 1.PALABRA\n 2.NUMERO\n ");
  	scanf("%d",&opi);
  
if(opi==1){
 cout<<"INTRODUCE LA PALABRA:  ";
 cin >> palabra;
 int J = palabra.length() - 1;
 int mitad = J / 2;
 while(palabra[I] == palabra[J]){
  if(mitad == I){
   cout << "Es palindromo";
     }
 J--;
 I++;
 }
 if(mitad != I)
 cout << "No es palindromo";
} else

if(opi==2){
cout<<"INTRODUCE UN NUMERO: "<<endl;
cin>>numero;
p=numero%10;
s=p/10;
c=s/10;
m=p*100+t*10+c;
if (m=numero)
{
cout<<"El Numero es Palindromo\n"<<endl;
}
else
{
cout<<"El Numero no es Palindromo\n"<<endl;
}
}
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 
}

