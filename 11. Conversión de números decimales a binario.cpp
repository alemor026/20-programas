#include <iostream>
#include <ctype.h>
using namespace std;
char r;
int main()
{
	do {
	int decimal;
	short binario[8];
	cout << "\t			Decimales a Binarios					" << endl;
	cout << "\t-----------------------------------------------" << endl;
	cout << "												" << endl;
	cout<<"Ingrese el Valor decimal:  "<<endl;
	cin>>decimal;
	
	for(int i=0; i<8; i++)
	{
		binario[i] = decimal % 2;
		decimal /= 2;
	}
	
	cout<<"EL numero en binaro es:  "<<endl;
	for (int i=7; i>=0; i--)
	{
		cout<<binario[i];
			}
			cout<<endl;
			
cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 			
			
}
