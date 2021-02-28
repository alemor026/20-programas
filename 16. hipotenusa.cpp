#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;
 char r;
int main() {
  float c1,c2,hipo=0;
do { 
cout << "\t	Hipotenusa				" << endl;
cout << "\t-------------------------" << endl;
cout << "												" << endl;
  cout << "\t\tDigite cateto 1: ";
  cin >> c1;
  cout << "\t\tDigite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "\t\t\tLa hipotenusa es " << hipo << endl;
cout << " " << endl;
cout << "\t\tDesea hacer un nuevo calculo? [S/N]   ";
cin >> r;
system("cls");
}while (toupper (r)=='S');  
  return 0;
}
