// La�o_de_repeti�ao_for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int numero, resultado;

	for (int i = 0; i < 5; i++)  // O bloco abaixo incrementar� 1 vez, 
                                  // testar� at� 5x,
                                  // Se for verdade, o bloco abaixo continua executando.

	{
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		resultado = numero * 3;
		printf("O resultado e: %d \n", resultado);
	}

    return 0;
}

