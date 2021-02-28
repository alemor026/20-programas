//Primer_Commit
//Menu principal 



//librerias 
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <cmath>
#include <stdlib.h>
#include<windows.h>
#include <limits>
#include <vector>
#include <string>
#include <dos.h>

//Punto
#include"windows.h"
#include"conio.h"
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

//conversiones
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#define km 0.6214
#define milla 1.6093
#define metro 39.3701
#define pulgada 0.0254
#define libra 0.453592
#define kilo 2.20462

//libres
#define ARRIBA     72    
#define IZQUIERDA  75
#define DERECHA    77
#define ABAJO      80
#define ESC        27
#define ENTER      13
#define ENTER 13 
#define BACKSPACE 8
using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
void menu_principal();
	void menu_nl();
		
		void menu_numeros();		
		void menu_tablas();


	void menu_conversiones();
				
	void menu_cajero();
	void menu_punto();	
	void menu_figuras();
	
	void menu_libres();
		
void control();
	void tablaDeMultiplicar(int numeroDeTabla);
	
	
	float lb_kg(float cantidad){
	return cantidad*libra;
}
float kg_lb(float cantidad){
	return cantidad*kilo;
}
float m_pul(float cantidad){
	return cantidad*metro;
}
float pul_m(float cantidad){
	return cantidad*pulgada;
}

float km_mi(float cantidad){
	return cantidad* km;
}
float mi_km(float cantidad){
	return cantidad*milla;
}
int main(){
	
	cin.get();
	cin.get();
	return 0;


}

void menu_principal(){
	bool repite = true;
	int op;
	do {
		system("cls");
		cout<<"\n\t\t\tMENU PRINCIPAL\n";
		cout<<"\n\t1. Numeros y Letras\n";
		cout<<"\n\t2. Conversiones\n";
		cout<<"\n\t3. Figuras\n";
		cout<<"\n\t4. Punto\n";
		cout<<"\n\t5. Cajero\n";
		cout<<"\n\t6. Libres\n";
		cout<<"\n\t0. Salir\n";
		cout<<"\n\tEscoja su opcion: ";
		cin>>op;
		
		if(op==1){
		system("cls");
			menu_nl();}	
					
		if(op==2){	
		system("cls");
		menu_conversiones();}
		
		if(op==3){	
		system("cls");
		menu_figuras();		}
			
			if(op==4){	
		system("cls");
			menu_punto();}
			
			if(op==5){	
		system("cls");
		menu_cajero();}
				
			if(op==6){	
		system("cls");
		menu_libres();}		
							
		if(op==0){	
		system("cls");
		repite = false;}		
				
				
		}while(repite); 
}

void menu_nl(){
	bool repite = true;
	int opcion;
	do {
		system("cls");
		cout<<"\n\t\t\tMENU Numeros y Letras\n";
		cout<<"\n\t1. Alfanumericos\n";
		cout<<"\n\t2. Numeros\n";
		cout<<"\n\t3. Tablas\n";
		cout<<"\n\t0. Regresar\n";
		cout<<"\n\tEscoja su opcion: ";
		cin>>opcion;
		
		if(opcion==1){
		system("cls");
		char r;
 int I = 0;
 string palabra;
  int numero,p,s,t,c,m,opi;

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
			
						
		if(opcion==2){	
		system("cls");
			menu_numeros();}
		
		if(opcion==3){	
		system("cls");
		menu_tablas();}
			
	
							
		if(opcion==0){	
		system("cls");
		repite = false;}



	}while(repite); 
}

void menu_numeros(){
	bool repite = true;
	int op;
	do {
		system("cls");
		cout<<"\n\t\t\tMENU NUMEROS\n";
		cout<<"\n\t1. Hipotenusa\n";
		cout<<"\n\t2. Operaciones Basicas\n";
		cout<<"\n\t3. Par o Impar\n";
		cout<<"\n\t0. Salir\n";
		cout<<"\n\tEscoja su opcion: ";
		cin>>op;
		
		if(op==1){
		system("cls");
		char r;
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
				
			}	
					
		if(op==2){	
		system("cls");
int opcion;
char r;
float primero=1;
float segundo=1;
float resultado;

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

}
		
		if(op==3){	
		system("cls");
		char r;
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
}while (toupper (r)=='S'); 	}
			
									
		if(op==0){	
		system("cls");
		repite = false;}		
				
				
		}while(repite); 
}

void menu_tablas(){
	bool repite = true;
	int opcion;
	
	do {
		system("cls");
		cout<<"\n\t\t\tMENU TABLAS\n";
		cout<<"\n\t1. Tablas de multiplicar\n";
		cout<<"\n\t2. Tablas de 1 al 10\n";
		cout<<"\n\t3. Multiplicacion manual\n";
		cout<<"\n\t0. Regresar\n";
		cout<<"\n\tEscoja su opcion: ";
		cin>>opcion;
		
		if (opcion==1){
				system("cls");
			char r;
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
		}

if(opcion==2){
	for (int numeroDeTabla = 1; numeroDeTabla <= 10; numeroDeTabla++) {
    tablaDeMultiplicar(numeroDeTabla);
     printf("\t\t\t\n");	
}	

	if(opcion==3){
//void control();

char R;
//void control(){
do {
	system("cls");

int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,1);cout<<("--------------------------------------------------");
gotoxy(20,2);cout<<("| Multilicacion de Dos Digitos en forma Grafica  |");
gotoxy(20,3);cout<<("--------------------------------------------------");

gotoxy(20,6);cout<<("Ingrese la primera cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese la segunda cantidad: ");
cin>>b;

int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
	uni3 = e%10; e /= 10;
	dec3 = e%10; e /= 10;
	
	cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");
/*x=dec2+dec3;
p=dec2+dec+uni3;*/
gotoxy(19,18);cout<<r;

cout << " " << endl;
gotoxy(20,22);cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
gotoxy(20,23); cin >> R;
system("cls");
}while (toupper (R)=='S'); 		
	}
		if(opcion==0){	
		system("cls");
		repite = false;}	
}

void tablaDeMultiplicar(int numeroDeTabla) {
   for (int x = 1; x <= 10; x++) {
    int resultado = x * numeroDeTabla;
    printf("\t\t\t %d x %d = %d\n", numeroDeTabla, x, resultado, "\n\t\n");
    
  }

void menu_conversiones(){
		bool repite = true;
	int op;
	do {
		system("cls");
		cout<<"\n\t\t\tMENU CONVERSIONES\n";
		cout<<"\n\t1. Enteros a letras\n";
		cout<<"\n\t2. Enteros con decimal a letras\n";
		cout<<"\n\t3. Km a milla, Metros a Pulgadas, Libras a Kilogramo\n";
		cout<<"\n\t4. Romanos\n";
		cout<<"\n\t5. Decimales a Binarop\n";
		cout<<"\n\t6. Decimales a Hexadecimales\n";
		cout<<"\n\t0. Salir\n";
		cout<<"\n\tEscoja su opcion: ";
		cin>>op;
		
		if(op==1){
		system("cls");
char r;			
int argc, char* argv[]			
			
do { 
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenas2[4][10]={"","ciento ","dieci",""};
 
    int parteEntera;
    double num;
 
    
    do{
        cout << "Introduce un numero: ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    parteEntera = num;
     
    string salida;
 
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;
 
    
    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: 
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) 
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: 
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ 
                    if(digitos[i]==1 && i > 0){ 
                        salida += cadenas2[i];
                    }else if(digitos[i]==2 && i==DECENAS){
                        salida += "veinti";
                    }else{ 
                        salida += cadenas[i][digitos[i]]; 
                        if(i==DECENAS) 
                            salida += "y ";
                    }
                }else{ 
				salida += cadenas[i][digitos[i]]; 
                }
        }
 
    }
    
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    
    cout << salida << endl;
 
    cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S');		
			
			
			}	
					
		if(op==2){	
		system("cls");
		char r;
		int argc, char* argv[]
do { 
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenas2[4][10]={"","ciento ","dieci",""};
 
    int parteEntera,parteDecimal;
    double num;
 
    
    do{
        cout << "Introduce un numero: ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
 
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;
 
    
    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: 
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) 
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: 
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ 
                    if(digitos[i]==1 && i > 0){ 
                        salida += cadenas2[i];
                    }else if(digitos[i]==2 && i==DECENAS){
                        salida += "veinti";
                    }else{ 
                        salida += cadenas[i][digitos[i]]; 
                        if(i==DECENAS) 
                            salida += "y ";
                    }
                }else{ 
				salida += cadenas[i][digitos[i]]; 
                }
        }
 
    }
    
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    
    cout << salida << parteDecimal << "/100"<< endl;
 
    cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S');		
				
		
		
		}
		
		if(op==3){	
		system("cls");
		

char r;

	do {
	int op;
	float cantidad;
	cout << "		Convertir 					" << endl;
	cout << "   -------------------------------------" << endl;
	cout << "												" << endl;
	printf("\n 1. KM a Millas\n 2. Millas a Km\n 3. Metros a Pulgadas \n 4. Pulgadas a Metros \n 5. Libras a Kilo \n 6. Kilo a Libras \n \n Escoja su opcion: ");
	scanf("%d",&op);
	system("cls");
	printf("Introduce la cantidad: ");
	scanf("%f",&cantidad);
	switch(op) {
	case 1:
		printf("%.2f km equivale a %.2f millas", cantidad, km_mi(cantidad));
		cout << " " << endl;
		break;
		case 2: 
		printf("%.2f millas equivale a %.2f km", cantidad, mi_km(cantidad));
		cout << " " << endl;
		break;
		case 3: 
		printf("%.2f metros equivale a %.2f pulgadas", cantidad, m_pul(cantidad) );
		cout << " " << endl;
		break;
		case 4: 
		printf("%.2f pulgadas equivale a %.2f metros", cantidad, pul_m(cantidad));
		cout << " " << endl;
		break;
		case 5: 
		printf("%.2f libras equivale a %.2f kilo", cantidad, lb_kg(cantidad) );
		cout << " " << endl;
		break;
		case 6: 
		printf("%.2f kilo equivale a %.2f libras", cantidad, kg_lb(cantidad));
		cout << " " << endl;
		break;
		default:
			printf("Opcion incorrecta");
			cout << " " << endl;
	
	}
cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S');
	getch();		
		
		
		
		
		
		
		
		
		
		
		
		
		
				}
			
			if(op==4){	
		system("cls");
			
		
			
			
			
			
			}
			
			if(op==5){	
		system("cls");
		char r;
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
				
			if(op==6){	
		system("cls");
		char r;
	do {
    int i = 0;
    string decimal;
    int numero;
    cout << "\t   Conversion de números decimales a hexadecimales 					" << endl;
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
}while (toupper (r)=='S');}		
							
		if(op==0){	
		system("cls");
		repite = false;}		
				
				
		}while(repite); 
	
}				
	

void pausar()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
}

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

void void menu_cajero() {

double saldo(double total){
    cout<<endl;
    if (total==0)
        cout<<"Ud. no tiene saldo en su cuenta"<<endl<<endl;
    else
        cout<<"Su saldo es de: "<<total<<endl;
    return total;
}
 
void fin(){
    cout<<endl<<"Gracias por usar este cajero, vuelva pronto."<<endl<<endl;
}
 
double deposito(double total){
    double dep=0;
    cout<<endl;
    do
    {
        cout<<"Ingrese la cantidad que desea depositar: ";
        cin>>dep;
        if(dep>0)
            {
                total=total+dep;
                cout<<"Su nuevo saldo es de: "<<total<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (dep<=0);
    return total;
}
 
double retiro(double total){
    double ret=0;
    cout<<endl;
    if(total==0)
        cout<<"Ud. no tiene saldo que pueda retirar"<<endl;
    else
    do
    {
        cout<<"Ingrese la cantidad que desea retirar: ";
        cin>>ret;
        if(ret>0)
            {
                total=total-ret;
                cout<<"Su nuevo saldo es de: "<<total<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (ret<=0);
    return total;
}
 
int menu(double total){
    int opcion;
    cout<<"\t\t\tMENU DEL CAJERO"<<endl;
    cout<<"\t---------------------------------------------"<<endl<<endl;
    cout<<"\tDepositar dinero\t\t\t(1)"<<endl;
    cout<<"\tRetirar dinero\t\t\t\t(2)"<<endl;
    cout<<"\tConsulta de saldo\t\t\t(3)"<<endl;
    cout<<"\tSalir\t\t\t\t\t(4)"<<endl;
    cout<<endl<<"\tElija la transaccion que desea realizar: ";
    cin>>opcion;
    return opcion;
}
 
double proceso(int opcion,double total) {
    switch (opcion)
    {
        case 1:total=deposito(total);break;
        case 2:total=retiro(total);break;
        case 3:total=saldo(total);break;
        case 4:cout<<endl<<"Ud. ha salido del sistema"<<endl<<endl;exit (0); 
        default: {
                    cout<<"Ingrese un valor correcto"<<endl;
                    menu(total);
                 }
    }
    return total;
}
 
int main(){
    double total=0;
    int opcion, a;
    char c;
    //login();
    do
    {
    	//login();
        cout<<endl<<endl;
        
        opcion=menu(total);
        total=proceso(opcion,total);
        do
        {
        cout<<endl;
        cout<<"Desea realizar alguna otra transaccion (S)(N): ";
        cin>>c;
        a=0;
        switch(c)
        {
            case 's':
            case 'S':a=2;break;
            case 'n':
            case 'N':break;
            default: cout<<endl<<"Ingrese un valor correcto"<<endl;a=1;
        } 
        } while (a==1);
    } while (a==2);
    fin();
    return 0;
}	
	
	
	
}

	
	void menu_punto(){
	OcultarCursor();

	Punto P(7,7);
	P.pintar();
		
		
		P.mover();
		Sleep(30);
		
	return 0;
}
void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci );
	
}

class Punto{
	int x,y;
	public:
		Punto(int _x, int _y):x(_x),y(_y){}//constructor
		void pintar ();
		void borrar ();
		void mover ();
};

void Punto::pintar(){
	gotoxy(25,1);	cout<< "MOVER UN PUNTO "<<endl;
	gotoxy(x,y); 
	cout<< "."<<endl;
}

void Punto::borrar(){
	gotoxy(x,y);
	cout<< " "<<endl;
}

void Punto::mover(){
char opcion;

while(opcion!='z'){
 system("cls");//si le quitamos esto el caracter dejara rastro desde el punto que sea movido 
 gotoxy(x,y);
pintar();
 opcion=getch();
 switch(opcion){
  
 case ARRIBA: y--; 
 y > 4;
 break;
 
 case ABAJO: y++;
 y+3 < 33;
 break;
 
 case IZQUIERDA: x--;
 x > 3;
 break;
 
 case DERECHA: x++;
 x+6 < 77;
 break;
 
  
 }
}
			
}	

	void menu_figuras(){
int op;
char r;


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

	
	void menu_libres(){
	bool repite = true;
	int op;
	do {
		system("cls");
		cout<<"\n\t\t\tMENU Libres\n";
		cout<<"\n\t1. Pacman\n";
		cout<<"\n\t2. Login\n";
		cout<<"\n\t3. Descansador\n";
		cout<<"\n\t4. Fechas\n";
		cout<<"\n\t0. Salir\n";
		cout<<"\n\tEscoja su opcion: ";
		cin>>op;
		
		if(op==1){
		system("cls");
			
fantasma A(41,14,2);
   fantasma B(43,14,3);
   fantasma C(40,14,4);
   fantasma D(39,14,5);
   pintar_mapa();

   while(vidas > 0 && puntos < 1950){
      marcador();
      borrar_pacman(x,y);
      anteriorpx = x; anteriorpy = y;


      teclear();

      if(dir == 0 && mapa[y-1][x] != 'X' && mapa[y-1][x] != 'A' && mapa[y-1][x] != 'Y' &&
      mapa[y-1][x] != 'B' && mapa[y-1][x] != 'C' && mapa[y-1][x] != 'D')                       y--;


      else if(dir == 1 && mapa[y+1][x] != 'X' && mapa[y+1][x] != 'A' && mapa[y+1][x] != 'Y' &&
      mapa[y+1][x] != 'B' && mapa[y+1][x] != 'C' && mapa[y+1][x] != 'D')                       y++;


      pacman(x,y);
      Sleep(55);
      borrar_pacman(x,y);

      B.choque_pacman();
      C.choque_pacman();
      D.choque_pacman();
      A.choque_pacman();

      anteriorpx = x; anteriorpy = y;
      teclear();


      if(dir == 2 && mapa[y][x+1] != 'X' && mapa[y][x+1] != 'A' && mapa[y][x+1] != 'Y' &&
      mapa[y][x+1] != 'B' && mapa[y][x+1] != 'C' && mapa[y][x+1] != 'D')                       x++;


      else if(dir == 3 && mapa[y][x-1] != 'X' && mapa[y][x-1] != 'A' && mapa[y][x-1] != 'Y' &&
      mapa[y][x-1] != 'B' && mapa[y][x-1] != 'C' && mapa[y][x-1] != 'D')                         x--;

      A.mover_fantasma();
      B.mover_fantasma();
      C.mover_fantasma();
      D.mover_fantasma();
      pacman(x,y);
      Sleep(55);

     
      if(x < 17) {
        borrar_pacman(x,y);
        x = 61;
      }
      else if(x > 62){
        borrar_pacman(x,y);
        x= 18;
      }



   }



   for(int i = 0 ; i <= vidas ; i++){
       gotoxy(5,i+27);printf(" ");

   }

   system("pause>NULL");
   return 0;	
			
			
			
			
			}	
					
		if(op==2){	
		system("cls");
		vector<string> usuarios;
    vector<string> claves;
    
    
    usuarios.push_back("Luis");
    usuarios.push_back("Carlos");
    usuarios.push_back("Alberto");
    usuarios.push_back("Lesly");
    usuarios.push_back("Diego");
    
   
    claves.push_back("123");
    claves.push_back("456");
    claves.push_back("789");
    claves.push_back("abc");
    claves.push_back("efg");
    
    
    string usuario, password;
    
    int contador = 0;
    bool ingresa = false;
    
    do {
        system("cls");
        cout << "\t\t\tIngrese su Usuario" << endl;
        cout << "\t\t\t________" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);
        
        char caracter;
        
        cout << "\tPassword: ";
        caracter = getch();
        
        password = "";
        
        while (caracter != ENTER) {
        
            if (caracter != BACKSPACE) {
                password.push_back(caracter);
                cout << "*";
                
            } else {
                if (password.length() > 0) {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }
            
            caracter = getch();
        }
        
        for (int i = 0; i < usuarios.size(); i++) {
            if (usuarios[i] == usuario && claves[i] == password) {
                ingresa = true;
                break;
            }
        }
        
        if (!ingresa) {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }
        
    } while (ingresa == false && contador < 3);
    
    if (ingresa == false) {
        cout << "\n\tUsted no pudo ingresar al sistema. Buen Dia" << endl;
    } else {
        cout << "\n\n\tBienvenido al sistema" << endl;
    }

    cin.get();
    
    return 0;}
		
		if(op==3){	
		system("cls");
		
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
			
			if(op==4){	
		system("cls");
			char r;
    int dia, mes, anio;
	do {
    printf( "\n   Introduzca d%ca: ", 161 );
    scanf( "%d", &dia );
    printf( "\n   Introduzca mes: " );
    scanf( "%d", &mes );
    printf( "\n   Introduzca a%co: ", 164 );
    scanf( "%d", &anio );

    if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( dia >= 1 && dia <= 31 )
                          printf( "\n   FECHA CORRECTA" );
                      else
                          printf( "\n   FECHA INCORRECTA" );
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( dia >= 1 && dia <= 30 )
                          printf( "\n   FECHA CORRECTA" );
                      else
                          printf( "\n   FECHA INCORRECTA" );
                      break;

            case  2 : if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                          if ( dia >= 1 && dia <= 29 )
                              printf( "\n   FECHA CORRECTA" );
                          else
                              printf( "\n   FECHA INCORRECTA" );
                      else
                          if ( dia >= 1 && dia <= 28 )
                              printf( "\n   FECHA CORRECTA" );
                          else
                              printf( "\n   FECHA INCORRECTA" );
        }
    }
    else
        printf( "\n   FECHA INCORRECTA" );
        
        cout << " " << endl;
cout << "Desea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 

    getch();
	}
	
							
		if(op==0){	
		system("cls");
		repite = false;}		
				
				
		}while(repite); 
}






int backcolor=0;
int dir = 0;
int x=39,y=22;
int anteriorpx,anteriorpy;
char tecla;

long int puntos = -5;
int vidas = 3;

void setCColor( int color)
{
        static HANDLE hConsole;

        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

        SetConsoleTextAttribute( hConsole, color | (backcolor * 0x10 + 0x100) );
}

int color[7] = {
      0x009,
      0x00E,
      0x00C,
      0x002,
      0x00B,
      0x005,
      0x00F

     };



char mapa[50][100] = {
     "                                                      ",
     "                  AXXXXXXXXXXXXXXXXXXXB AXXXXXXXXXXXXXXXXXXXB",
     "                  Y___________________Y Y___________________Y",
     "                  Y_AXXXXXB_AXXXXXXXB_Y Y_AXXXXXXXB_AXXXXXB_Y",
     "                  Y_Y     Y_Y       Y_Y Y_Y       Y_Y     Y_Y",
     "                  Y_DXXXXXC_DXXXXXXXC_DXC_DXXXXXXXC_DXXXXXC_Y",
     "                  Y________|_________|___|_________|________Y",
     "                  Y_AXXXXXB_AXB_AXXXXXXXXXXXXXB_AXB_AXXXXXB_Y",
     "                  Y_DXXXXXC_Y Y_DXXXXB   AXXXXC_Y Y_DXXXXXC_Y",
     "                  Y_________Y Y______Y   Y______Y Y_________Y",
     "                  DXXXXXXXB_Y DXXXXB_Y   Y_AXXXXC Y_AXXXXXXXC",
     "                          Y_Y AXXXXC_DXXXC_DXXXXB Y_Y        ",
     "                          Y_Y Y_________________Y Y_Y        ",
     "                  XXXXXXXXC_DXC_AXXXXXX XXXXXXB_DXC_DXXXXXXXX",
     "                  _________|____Y      *      Y____|_________",
     "                  XXXXXXXXB_AXB_DXXXXXXXXXXXXXC_AXB_AXXXXXXXX",
     "                          Y_Y Y_________________Y Y_Y        ",
     "                          Y_Y Y_AXXXXXXXXXXXXXB_Y Y_Y        ",
     "                  AXXXXXXXC_DXC_DXXXXB   AXXXXC_DXC_DXXXXXXXB",
     "                  Y________|_________Y   Y_________|________Y",
     "                  Y_AXXXXXB_AXXXXXXB_Y   Y_AXXXXXXB_AXXXXXB_Y",
     "                  Y_DXXXB Y_DXXXXXXC_DXXXC_DXXXXXXC_Y AXXXC_Y",
     "                  Y_____Y Y_________|_____|_________Y Y_____Y",
     "                  DXXXB_Y Y_AXB_AXXXXXXXXXXXXXB_AXB_Y Y_AXXXC",
     "                  AXXXC_DXC_Y Y_DXXXXB   AXXXXC_Y Y_DXC_DXXXB",
     "                  Y_________Y Y______Y   Y______Y Y_________Y",
     "                  Y_AXXXXXXXC DXXXXB_Y   Y_AXXXXC DXXXXXXXB_Y",
     "                  Y_DXXXXXXXXXXXXXXC_DXXXC_DXXXXXXXXXXXXXXC_Y",
     "                  Y_________________|_____|_________________Y",
     "                  DXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
};


void pintar_mapa()
{
     for(int i = 0 ; i < 78 ; i++){
         for(int j = 0 ; j < 30 ; j++){
               gotoxy(i,j);

               if(mapa[j][i] == 'X') {setCColor(color[0]);printf("%c",205);}
               if(mapa[j][i] == '_') {setCColor(color[1]); printf("%c",250);}
               else if(mapa[j][i] == 'Y') {setCColor(color[0]);printf("%c",186);}
               else if(mapa[j][i] == 'A') {setCColor(color[0]);printf("%c",201);}
               else if(mapa[j][i] == 'B') {setCColor(color[0]);printf("%c",187);}
               else if(mapa[j][i] == 'C') {setCColor(color[0]);printf("%c",188);}
               else if(mapa[j][i] == 'D') {setCColor(color[0]);printf("%c",200);}


         }
     }
}


void pacman(int x , int y){
     setCColor(color[1]);
     gotoxy(x,y); printf("%c",2);
}

void borrar_pacman(int x, int y){
     gotoxy(x,y); printf(" ");
     if(mapa[y][x] == '_'){ mapa[y][x] = ' '; puntos += 5;}
}
void teclear(){
    if(kbhit()){
      tecla = getch();
      switch(tecla){
      case ARRIBA:
         dir = 0;
         break;

      case ABAJO:
         dir = 1;
         break;

      case DERECHA:
         dir = 2;
         break;

      case IZQUIERDA:
         dir = 3;
         break;

      }

   }

}

class fantasma{
      int fdir;
      int _x, _y;
      int col;
public:
      fantasma(int x , int y , int color);
      void dibujar_fantasma() const;
      void borrar_fantasma() const;
      void mover_fantasma();
      void choque_pacman();
};
fantasma::fantasma(int x , int y, int color){
      _x = x;
      _y = y;
      col = color;
      fdir = rand()%4;
}
void fantasma::dibujar_fantasma() const{

     setCColor(color[col]);
     gotoxy(_x,_y); printf("%c",6);
}
void fantasma::borrar_fantasma() const{

     gotoxy(_x,_y); printf(" ");
}
void fantasma::choque_pacman(){
     if(y == _y && x == _x || (fdir == 0 && dir == 1 || fdir == 1 && dir == 0
     ||fdir == 2 && dir == 3 || fdir == 3 && dir == 2 )&&(_y == anteriorpy && _x == anteriorpx)){


      x = 39;
      y = 22;
      dir = 4;
      vidas--;

     }


}

void fantasma::mover_fantasma(){
     borrar_fantasma();
     choque_pacman();
     int bolx=_x,boly=_y;

     if(mapa[_y][_x] == '|'){
             fdir = rand()%4;
     }
     if(mapa[_y][_x] == '*'){
             fdir = 0;
     }

     if(fdir == 2){
          if(mapa[_y][_x+1] != 'X' && mapa[_y][_x+1] != 'A' && mapa[_y][_x+1] != 'Y' &&
          mapa[_y][_x+1] != 'B' && mapa[_y][_x+1] != 'C' && mapa[_y][_x+1] != 'D')         _x++;
          else fdir = rand()%4;
     }
     if(fdir == 3){
          if(mapa[_y][_x-1] != 'X' && mapa[_y][_x-1] != 'A' && mapa[_y][_x-1] != 'Y' &&
          mapa[_y][_x-1] != 'B' && mapa[_y][_x-1] != 'C' && mapa[_y][_x-1] != 'D')          _x--;
          else fdir = rand()%4;
     }
     if(fdir == 0){
          if(mapa[_y-1][_x] != 'X' && mapa[_y-1][_x] != 'A' && mapa[_y-1][_x] != 'Y' &&
          mapa[_y-1][_x] != 'B' && mapa[_y-1][_x] != 'C' && mapa[_y-1][_x] != 'D')           _y--;
          else fdir = rand()%4;
     }
     if(fdir == 1){
          if(mapa[_y+1][_x] != 'X' && mapa[_y+1][_x] != 'A' && mapa[_y+1][_x] != 'Y' &&
      mapa[_y+1][_x] != 'B' && mapa[_y+1][_x] != 'C' && mapa[_y+1][_x] != 'D')                _y++;
          else fdir = rand()%4;
     }

     if(mapa[boly][bolx] == '_') {setCColor(color[1]); gotoxy(bolx,boly);printf("%c",250);}

     // rutina atajo
     if(_x <= 17) _x = 61;
        else if(_x >= 62) _x = 18;
     dibujar_fantasma();
}


void marcador(){

   gotoxy(5,4); printf("PUNTOS");
   gotoxy(5,6); printf("    ");
   setCColor(color[6]);
   gotoxy(5,6); printf("%ld",puntos);

   setCColor(color[1]);
   gotoxy(5,25); printf("VIDAS");
   for(int i = 0 ; i <= vidas ; i++){
       gotoxy(5,i+27);printf(" ");

   }
   for(int i = 0 ; i < vidas ; i++){
       gotoxy(5,i+27);printf("%c",2);

   }
   setCColor(color[2]);
   gotoxy(70,27);printf("%c",169);


}





