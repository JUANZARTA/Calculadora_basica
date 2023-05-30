#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variables
	int a, b, c,resultado;
    int opcion;
   
    do {
      printf("MENU:\n");
      printf("1. Sumar \n");
      printf("2. Restar  \n");
      printf("3. Multiplicar \n");
      printf("4. Dividir \n");
      printf("5. Salir \n");
      printf("Ingrese su opción: ");
      scanf("%d", &opcion);
      
      switch (opcion) {
         case 1:
            printf("Ha seleccionado la opción 1.\n");
            printf("porfavor ingrese el primer numero: ");
	        scanf("%d",&a);
	   	   	printf("porfavor ingrese el segundo numero: ");
	   	   	scanf("%d",&b);
	   	   	resultado = sumar(a,b);
	   	   	printf("el resultado es %d:",resultado);
	        return 0;
            break;
         case 2:
            printf("Ha seleccionado la opción 2.\n");
            printf("Ha seleccionado la opción 1.\n");
            printf("porfavor ingrese el primer numero: ");
	        scanf("%d",&a);
	   	   	printf("porfavor ingrese el segundo numero: ");
	   	   	scanf("%d",&b);
	   	   	resultado = restar(a,b);
	   	   	printf("el resultado es %d:",resultado);
	        return 0;
            break;
         case 3:
            printf("Ha seleccionado la opción 3.\n");
            printf("Ha seleccionado la opción 1.\n");
            printf("porfavor ingrese el primer numero: ");
	        scanf("%d",&a);
	   	   	printf("porfavor ingrese el segundo numero: ");
	   	   	scanf("%d",&b);
	   	   	resultado = multiplicar(a,b);
	   	   	printf("el resultado es %d:",resultado);
	        return 0;
            break;
         case 4:
            printf("Ha seleccionado la opción 3.\n");
            printf("Ha seleccionado la opción 1.\n");
            printf("porfavor ingrese el primer numero: ");
	        scanf("%d",&a);
	   	   	printf("porfavor ingrese el segundo numero: ");
	   	   	scanf("%d",&b);
	   	   	resultado = dividir(a,b);
	   	   	printf("el resultado es %d:",resultado);
	        return 0;
            break;
         case 5:
            printf("Saliendo del programa.\n");
            break;
         default:
            printf("Opción inválida.\n");
      }
      
   } while (opcion != 4);
	
	
	
	
	

}

void sumar(int a, int b){
	int resultado=a+b;
	return resultado;
}
void restar(int a, int b){
	int resultado=a-b;
	return resultado;
}
void multiplicar(int a, int b){
	int resultado=a*b;
	return resultado;
}
void dividir(int a, int b){
	int resultado=a/b;
	return resultado;
}