// Mostrar uma palavra de trás para frente.

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padrão
#include<locale.h> //biblioteca de caracteres
#include<string.h> //biblioteca para manipular as string

main() //inicio do programa
{
	setlocale(LC_ALL,""); //função de localidade para obter mais caracteres
	
	int cont,inv; //declaração de variáveis com números inteiros
	char palavra[15]; //declaração de variáveis para caracteres
	
	printf("Digite uma palavra: "); //comando de saída para escrever 'Digite uma palavra: '
	gets(palavra); //comando de entrada para digitar a palavra
	
	inv=strlen(palavra); //variável 'inv' receberá o tamanho da palavra digitada
	
	printf("\n A palavra de trás pra frente é:"); //comando de saída para escrever 'A palavra de trás pra frente é:'
	
	for (cont=inv;cont>=0;cont--) //para (variável contador com valor igual a variavel 'inv', contador maior ou igual a 0, decremento do contador)
	{
		printf("%c",palavra[cont]); //comando de saída para escrever a palavra de trás pra frente
	} //fim do comando for
	
	printf("\n\n"); //comando de saída para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
