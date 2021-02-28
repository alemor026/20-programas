#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <ctype.h>
using namespace std;
char r;
void convertir(string &hex,stringstream &stream, int numero){
    int residuo;
    if(numero == 0 || numero == 1 || numero == 2 || numero == 3||
       numero == 4 || numero == 5 || numero == 6 || numero == 7||
       numero == 8 || numero == 9){
        stream << numero;
    }
    else{
        residuo = numero%16;
        numero = numero/16;
        convertir(hex,stream,numero);
        stream << residuo;
    }
    hex = stream.str();
}
string hexadecimal(string c){
     int i = 0;
     string hex = "";
     int numero;
     numero = atoi(c.c_str());//converir de String a Int
     stringstream stream;
     convertir(hex,stream,numero);
     c = hex;
     hex = "";
     do{
         if(c[i] =='1' && c[i+1] == '0'){
             i += 2;
             hex += 'A';
         }
         else if(c[i] == '1' && c[i+1] == '1'){
             i += 2;
             hex += 'B';
         }
         else if(c[i] == '1' && c[i+1] == '2'){
             i += 2;
             hex += 'C';
         }
         else if(c[i] == '1' && c[i+1] == '3'){
             i += 2;
             hex += 'D';
         }
         else if(c[i] == '1' && c[i+1] == '4'){
             i += 2;
             hex += 'E';
         }
         else if(c[i] == '1' && c[i+1] == '5'){
             i += 2;
             hex += 'F';
         }
         else
             switch(c[i++]){
                 case '0': hex += '0'; break;
                 case '1': hex += '1'; break;
                 case '2': hex += '2'; break;
                 case '3': hex += '3'; break;
                 case '4': hex += '4'; break;
                 case '5': hex += '5'; break;
                 case '6': hex += '6'; break;
                 case '7': hex += '7'; break;
                 case '8': hex += '8'; break;
                 case '9': hex += '9'; break;
             }
     }while(c[i] != '\0');
     return "0x" + hex; 
}
int main(){
	do {
    int i = 0;
    string decimal;
    int numero;
    cout << "\t   Conversion de n�meros decimales a hexadecimales 					" << endl;
	cout << "\t-------------------------------------------------------" << endl;
	cout << "												" << endl;
    cout << "Introduce el numero decimal: ";
    getline(cin,decimal);
    decimal = hexadecimal(decimal);
    cout << "El numero en Hexadecimal equivale a: " <<decimal;
    cin.get();
cout << "\n " << endl;
cout << "\tDesea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 
    return 0;
}
