#include <iostream>

#include <conio.h> 
#include <vector>

using namespace std;
 
 
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
/*
void login (){
	
#define ENTER 13 
#define BACKSPACE 8
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
        cout << "\n\tUsted no pudo ingresar al Cajero Virtual. Buen Dia" << endl;
    } else {
        cout << "\n\n\tBienvenido al Cajero Virtual" << endl;
           }

    cin.get();
    
    return;
}*/




