#include<iostream>
#include <ctype.h>
using namespace std;
char r;
int main()
{
do {
 
    int x;
    cout << "			Numeros Romanos				" << endl;
	cout << "	-----------------------------------------------" << endl;
	cout << "												" << endl;
    cout<<"\tIngrese un numero: "<<endl;   
	cin>>x;
  if((x<1)||(x>999))
       cout<<"  "<<endl;
  else
   
   {
   	
        if(x>=900)   {cout<<"CM"   ;x=x-900; }
        if(x>=500)   {cout<<"D"    ;x=x-500; }
        if(x>=400)   {cout<<"CD"   ;x=x-400; }
        if(x>=300)   {cout<<"C"    ;x=x-100; }
        if(x>=200)   {cout<<"C"    ;x=x-100; }
        if(x>=100)   {cout<<"C"    ;x=x-100; }
        if(x>=90)    {cout<<"XC"   ;x=x-90;  }
        if(x>=50)    {cout<<"L"    ;x=x-50;  }
        if(x>=40)    {cout<<"XL"   ;x=x-40;  }
        if(x>=30)    {cout<<"X"    ;x=x-10;  }
        if(x>=20)    {cout<<"X"    ;x=x-10;  }
        if(x>=10)    {cout<<"X"    ;x=x-10;  }
        if(x>=9) {cout<<"IX"   ;x=x-9;   }
        if(x>=5) {cout<<"V"    ;x=x-5;   }
        if(x>=4) {cout<<"IV"   ;x=x-4;   }
        if(x>=3) {cout<<"III";x=x-3;     }
        if(x>=2) {cout<<"II"   ;x=x-2;   }
        if(x>=1) {cout<<"I"    ;x=x-1;   }
    }
   cout << "\n " << endl;
   cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S');
    

return 0;
}
