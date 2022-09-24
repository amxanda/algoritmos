#include <stdio.h> //biblioteca de entrada e saida (input-output).
#include <stdlib.h> //biblioteca padrão.
#include <locale.h> //biblioteca de caracteres.

/* Faça um programa que peça ao usuário um número entre 12 e 20. 
Se a pessoa digitar um número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente. 
Se digitar correto mostrar o número digitado. */

main() //programa iniciado
{
	setlocale(LC_ALL, ""); //função de localidade para obter mais caracteres
	int numero,cont=0; //declaração de váriaveis de números inteiros e contador iniciado com o valor 0
	
	printf("Digite um número: "); //comando de saída para escrever 'Digite um número: '
		
	while(numero>0) //comando de repetição (enquanto o número for maior que 0) 
	{		
		scanf("%d",&numero); //comando de entrada para digitar um número inteiro
		if(numero>=12 && numero<=20) //comando de condição (Se o número for maior ou igual a 12 e menor ou igual a 20)
		{
			printf("\n O número digitado é o %d\n",numero); //comando de saída para 'O número digitado é o variavel_numero'
			break; //comando para interromper o programa
		} //fim do comando if
		else //comando de condição 'senão' caso a condição if seja falsa 
		{
			printf("Entrada inválida! Tente novamente: "); //comando de saída para escrever 'Entrada inválida! Tente novamente:'
			cont++; //contador para reiniciar o comando else até dar um comando verdadeiro
		} //fim do comando else
	} //fim do comando while
} //programa finalizado
