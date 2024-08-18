#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void suma(){

int a,b,resultado;
char exit;

printf("Ingrese un primer numero: ");
scanf("%i",&a);
printf("Ingrese un segundo numero: ");
scanf("%i",&b);
printf("\n");

resultado = a  + b;

printf("--------------------------------\n");
printf("El resultado de la suma es: %i\n",resultado);

system("pause");


}

void resta(){

int a,b,resultado;

printf("Ingrese un primer numero: ");
scanf("%i",&a);
printf("Ingrese un segundo numero: ");
scanf("%i",&b);
printf("\n");

resultado = a  -  b;

printf("--------------------------------\n");
printf("El resultado de la resta es: %i\n",resultado);

system("pause");

}

void producto(){

int a,b,resultado;

printf("Ingrese un primer numero: ");
scanf("%i",&a);
printf("Ingrese un segundo numero: ");
scanf("%i",&b);
printf("\n");

resultado = a  *  b;

printf("--------------------------------\n");
printf("El resultado del producto es: %i\n",resultado);

system("pause");

}

void division(){

int a,b;
float resultado;

printf("Ingrese un primer numero: ");
scanf("%i",&a);
printf("Ingrese un segundo numero: ");
scanf("%i",&b);
printf("\n");

resultado = a  /  b;

printf("--------------------------------\n");
printf("El resultado de la division es: %f\n",resultado);

system("pause");

}

void menu() {

int op;

do {
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 system("cls");
 SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
 printf("MENU PRINCIPAL\n");
 printf("--------------\n\n");
 printf("1- Calculadora de suma\n");
 printf("2- Calculadora de resta\n");
 printf("3- Calculadora de multiplicacion\n");
 printf("4- Calculadora de division\n");
 printf("5- Salir\n\n");
 printf("-----------------------\n");
 printf("Seleccione una opcion: ");
 scanf("%i",&op);
 switch(op){
    case 1:
    system("cls");
    suma();
    break;

    case 2:
    system("cls");
    resta();
    break;

    case 3:
    system("cls");
    producto();
    break;

    case 4:
    system("cls");
    division();
    break;
 }

} while(op != 5);

}


int main() {

menu();

return 0;
}
