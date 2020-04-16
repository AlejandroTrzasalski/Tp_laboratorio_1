/*
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_tp1.h"

int resta2num(int op1,int  op2);
int suma2num(int op1,int op2);
int multi2num(int op1,int  op2);
int dividir2num(int op1,int  op2);
int factorial(int op1);



int main(void) {

	setbuf(stdout, NULL);

	int num1;
	int num2;

	printf("ingrese un numero\n");
	fflush(stdin);
	scanf("%d",&num1);
	printf("ingrese otro numero\n");
	scanf("%d",&num2);


		printf("A =  %d\n", num1);
		printf("B =  %d\n", num2);
		printf("\na) El resultado de A+B es: %d  ",suma2num(num1,num2));
		printf("\nb) El resultado de A-B es: %d  ",resta2num(num1,num2));
		printf("\nc) El resultado de A*B es: %d  ",multi2num(num1,num2));
		printf("\nd) El resultado de A/B es: %d\n",dividir2num((float)num1,num2));
		printf("\ne) El factorial de A es: %d",factorial(num1));
		printf("\ne) El factorial de B es: %d\n",factorial(num2));


	return EXIT_SUCCESS;
}
