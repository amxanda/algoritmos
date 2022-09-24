#include <stdio.h> //biblioteca de entrada e saida (input-output).
#include <stdlib.h> //biblioteca padr�o.
#include <locale.h> //biblioteca de caracteres.

/* Fa�a um programa que pe�a ao usu�rio um n�mero entre 12 e 20. 
Se a pessoa digitar um n�mero diferente, mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. 
Se digitar correto mostrar o n�mero digitado. */

main() //programa iniciado
{
	setlocale(LC_ALL, ""); //fun��o de localidade para obter mais caracteres
	int numero,cont=0; //declara��o de v�riaveis de n�meros inteiros e contador iniciado com o valor 0
	
	printf("Digite um n�mero: "); //comando de sa�da para escrever 'Digite um n�mero: '
		
	while(numero>0) //comando de repeti��o (enquanto o n�mero for maior que 0) 
	{		
		scanf("%d",&numero); //comando de entrada para digitar um n�mero inteiro
		if(numero>=12 && numero<=20) //comando de condi��o (Se o n�mero for maior ou igual a 12 e menor ou igual a 20)
		{
			printf("\n O n�mero digitado � o %d\n",numero); //comando de sa�da para 'O n�mero digitado � o variavel_numero'
			break; //comando para interromper o programa
		} //fim do comando if
		else //comando de condi��o 'sen�o' caso a condi��o if seja falsa 
		{
			printf("Entrada inv�lida! Tente novamente: "); //comando de sa�da para escrever 'Entrada inv�lida! Tente novamente:'
			cont++; //contador para reiniciar o comando else at� dar um comando verdadeiro
		} //fim do comando else
	} //fim do comando while
} //programa finalizado
