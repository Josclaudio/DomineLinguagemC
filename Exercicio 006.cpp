// Exercicio 006.cpp : Defines the entry point for the console application.
/*
	Exerc�cio 006
	Declara��o de m�dia
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float nota1, nota2, nota3, media;   // Declara�ao das variaveis

	// Inicializacao das variaveis
	nota1 = 7.3;
	nota2 = 8.7;
	nota3 = 6.8;
	media = (nota1 + nota2 + nota3) / 3;

	// Apresentando a media

	printf("A media do aluno: %.2f \n", media);

	system("pause");
    return 0;
}

