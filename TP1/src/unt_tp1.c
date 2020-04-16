/*
 * utn_tp1.c
 *
 *  Created on: 13 abr. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int resta2num(int op1, int op2)
{

	int resultado;

	resultado = op1-op2;

		return resultado;
}
int suma2num(int op1, int op2)
{

	int resultado;

	resultado = op1+op2;


		return resultado;
}
int multi2num(int op1, int op2)
{

	int resultado;

	resultado = op1 * op2;
		return resultado;
}
int dividir2num(int op1, int op2)
{
	int resultado;

	if(op1 == 0 || op2 ==0)
	{
		resultado = printf("\nDivision erronea, elija un valor distinto de 0");
	}
	else
	{
	resultado =(float) op1/op2;
	}

		return resultado;
}
int factorial(int op1)
{
	int i;
	int fact=1;

		for(i=1;i<=op1;i++)
		{
		fact = fact *i;
		}
	return fact;
}

