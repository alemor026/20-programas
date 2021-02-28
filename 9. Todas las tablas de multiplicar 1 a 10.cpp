#include <iostream>
#include <stdio.h>
using namespace std;

void tablaDeMultiplicar(int numeroDeTabla);

int main(void) {
  for (int numeroDeTabla = 1; numeroDeTabla <= 10; numeroDeTabla++) {
    tablaDeMultiplicar(numeroDeTabla);
     printf("\t\t\t\n");
  }
}

void tablaDeMultiplicar(int numeroDeTabla) {
 
  for (int x = 1; x <= 10; x++) {
    int resultado = x * numeroDeTabla;
    printf("\t\t\t %d x %d = %d\n", numeroDeTabla, x, resultado, "\n\t\n");
    
  }
}
