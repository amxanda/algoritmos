// Mostrar somente nome que começa com ‘a’ ou ‘A’.

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padrão
#include<locale.h> //biblioteca de caracteres
#include<string.h> //biblioteca para manipular as string

main() //inicio do programa
{
	setlocale(LC_ALL,""); //função de localidade para obter mais caracteres
	
	int cont; //declaração de variáveis com números inteiros
	char nome[10],letras; //declaração de variáveis para caracteres
	
	printf("\n"); //comando de saída para pular linha
	
	printf("INFORME UM NOME: "); //comando de saída para escrever 'INFORME UM NOME: '
	gets(nome); //comando de entrada para digitar o nome
	
	printf("\n"); //comando de saída para pular linha
		
 	for(cont=0; letras=nome[cont]; cont++) // para (contador iniciando com 0, variável 'letras' recebendo os caracteres da variável 'nome', contador incrementado)
 	{
		if(nome[0]=='a' or nome[0]=='A') //se o nome na posição 1 for igual a 'A' ou 'a' então
		{
			printf("%c",nome[cont]); //comando de saída para escrever o nome digitado
		}
		else //senão
		{
			printf("Comando incorreto! Tente novamente..."); //comando de saída para escrever 'Comando incorreto! Tente novamente...'
			
			printf("\n"); //comando de saída para pular linha
			return 0; //programa retorna 0
		} 
	} //fim do comando for
 				
	printf("\n\n"); //comando de saída para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
