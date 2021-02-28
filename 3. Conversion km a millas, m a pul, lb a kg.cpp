#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
#define km 0.6214
#define milla 1.6093
#define metro 39.3701
#define pulgada 0.0254
#define libra 0.453592
#define kilo 2.20462
using namespace std;

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
char r;
main (){
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
	return 0;
	}
	
	

