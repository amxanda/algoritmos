// Mostrar uma palavra de tr�s para frente.

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padr�o
#include<locale.h> //biblioteca de caracteres
#include<string.h> //biblioteca para manipular as string

main() //inicio do programa
{
	setlocale(LC_ALL,""); //fun��o de localidade para obter mais caracteres
	
	int cont,inv; //declara��o de vari�veis com n�meros inteiros
	char palavra[15]; //declara��o de vari�veis para caracteres
	
	printf("Digite uma palavra: "); //comando de sa�da para escrever 'Digite uma palavra: '
	gets(palavra); //comando de entrada para digitar a palavra
	
	inv=strlen(palavra); //vari�vel 'inv' receber� o tamanho da palavra digitada
	
	printf("\n A palavra de tr�s pra frente �:"); //comando de sa�da para escrever 'A palavra de tr�s pra frente �:'
	
	for (cont=inv;cont>=0;cont--) //para (vari�vel contador com valor igual a variavel 'inv', contador maior ou igual a 0, decremento do contador)
	{
		printf("%c",palavra[cont]); //comando de sa�da para escrever a palavra de tr�s pra frente
	} //fim do comando for
	
	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
