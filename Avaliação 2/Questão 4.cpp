// Mostrar a posição de cada letra de duas palavras.

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padrão
#include<locale.h> //biblioteca de caracteres
#include<string.h> //biblioteca para manipular as string

main() //inicio do programa
{
	setlocale(LC_ALL,""); //função de localidade para obter mais caracteres
	
	int cont; //declaração de variáveis com números inteiros
	char palavra1[10],palavra2[10],letras1, letras2; //declaração de variáveis para caracteres
	
	printf("\n"); //comando de saída para pular linha
	
	printf("DIGITE UM NOME: "); //comando de saída para escrever 'DIGITE UM NOME: '
	gets(palavra1);  //Digitar a palavra solicitada
	
	printf("\n\n"); //comando de saída para pular 2 linhas
	
	printf("DIGITE UM NOME: "); //comando de saída para escrever 'DIGITE UM NOME: '
	gets(palavra2);

	printf("\n\n"); //comando de saída para pular 2 linhas
	
	letras1=strlen(palavra1); //variável 'letras1' receberá o tamanho da primeira palavra digitada
	letras2=strlen(palavra2); //variável 'letras1' receberá o tamanho da segunda palavra digitada
		
	for(cont=0; cont<letras1; cont++) //para (contador iniciando com 0, contador menor que o valor da variável 'letras1', contador incrementado)
	{
		printf("\t [%d]",cont); //comando de saída para escrever as posições do primeiro contador
	} //fim do comando for

	printf("\n\n"); //comando de saída para pular 2 linhas
	
	for(cont=0; cont<letras1; cont++) //para (contador iniciando com 0, contador menor que o valor da variável 'letras1', contador incrementado)
	{
		printf("\t %2c",palavra1[cont]); //comando de saída para escrever a primeira palavra
	} //fim do comando for

	printf("\n\n"); //comando de saída para pular 2 linhas
	
	for(cont=0; cont<letras2; cont++) //para (contador iniciando com 0, contador menor que o valor da variável 'letras2', contador incrementado)
	{
		printf("\t [%d]",cont); //comando de saída para escrever as posições do segundo contador
	} //fim do comando for
	
	printf("\n\n"); //comando de saída para pular 2 linhas
	
	for(cont=0; cont<letras2; cont++) //para (contador iniciando com 0, contador menor que o valor da variável 'letras2', contador incrementado)
	{
		printf("\t %2c",palavra2[cont]); //comando de saída para escrever a segunda palavra
	} //fim do comando for
	
	printf("\n\n"); //comando de saída para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
