// Mostrar a posi��o de cada letra de duas palavras.

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padr�o
#include<locale.h> //biblioteca de caracteres
#include<string.h> //biblioteca para manipular as string

main() //inicio do programa
{
	setlocale(LC_ALL,""); //fun��o de localidade para obter mais caracteres
	
	int cont; //declara��o de vari�veis com n�meros inteiros
	char palavra1[10],palavra2[10],letras1, letras2; //declara��o de vari�veis para caracteres
	
	printf("\n"); //comando de sa�da para pular linha
	
	printf("DIGITE UM NOME: "); //comando de sa�da para escrever 'DIGITE UM NOME: '
	gets(palavra1);  //Digitar a palavra solicitada
	
	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	printf("DIGITE UM NOME: "); //comando de sa�da para escrever 'DIGITE UM NOME: '
	gets(palavra2);

	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	letras1=strlen(palavra1); //vari�vel 'letras1' receber� o tamanho da primeira palavra digitada
	letras2=strlen(palavra2); //vari�vel 'letras1' receber� o tamanho da segunda palavra digitada
		
	for(cont=0; cont<letras1; cont++) //para (contador iniciando com 0, contador menor que o valor da vari�vel 'letras1', contador incrementado)
	{
		printf("\t [%d]",cont); //comando de sa�da para escrever as posi��es do primeiro contador
	} //fim do comando for

	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	for(cont=0; cont<letras1; cont++) //para (contador iniciando com 0, contador menor que o valor da vari�vel 'letras1', contador incrementado)
	{
		printf("\t %2c",palavra1[cont]); //comando de sa�da para escrever a primeira palavra
	} //fim do comando for

	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	for(cont=0; cont<letras2; cont++) //para (contador iniciando com 0, contador menor que o valor da vari�vel 'letras2', contador incrementado)
	{
		printf("\t [%d]",cont); //comando de sa�da para escrever as posi��es do segundo contador
	} //fim do comando for
	
	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	for(cont=0; cont<letras2; cont++) //para (contador iniciando com 0, contador menor que o valor da vari�vel 'letras2', contador incrementado)
	{
		printf("\t %2c",palavra2[cont]); //comando de sa�da para escrever a segunda palavra
	} //fim do comando for
	
	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
