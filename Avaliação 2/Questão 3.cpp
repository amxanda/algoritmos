// Mostrar somente nome que come�a com �a� ou �A�.

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padr�o
#include<locale.h> //biblioteca de caracteres
#include<string.h> //biblioteca para manipular as string

main() //inicio do programa
{
	setlocale(LC_ALL,""); //fun��o de localidade para obter mais caracteres
	
	int cont; //declara��o de vari�veis com n�meros inteiros
	char nome[10],letras; //declara��o de vari�veis para caracteres
	
	printf("\n"); //comando de sa�da para pular linha
	
	printf("INFORME UM NOME: "); //comando de sa�da para escrever 'INFORME UM NOME: '
	gets(nome); //comando de entrada para digitar o nome
	
	printf("\n"); //comando de sa�da para pular linha
		
 	for(cont=0; letras=nome[cont]; cont++) // para (contador iniciando com 0, vari�vel 'letras' recebendo os caracteres da vari�vel 'nome', contador incrementado)
 	{
		if(nome[0]=='a' or nome[0]=='A') //se o nome na posi��o 1 for igual a 'A' ou 'a' ent�o
		{
			printf("%c",nome[cont]); //comando de sa�da para escrever o nome digitado
		}
		else //sen�o
		{
			printf("Comando incorreto! Tente novamente..."); //comando de sa�da para escrever 'Comando incorreto! Tente novamente...'
			
			printf("\n"); //comando de sa�da para pular linha
			return 0; //programa retorna 0
		} 
	} //fim do comando for
 				
	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
