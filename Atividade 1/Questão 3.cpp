#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padr�o.
#include<locale.h> //biblioteca de caracteres.

//Em uma ind�stria, o setor de qualidade constatou que de um lote com 4500 pe�as, 180 apresentavam algum defeito. 
//Para um lote ser aprovado � necess�rio que o n�mero de pe�as com defeito seja inferior a 3%. 
//Neste caso, o lote foi aprovado ou reprovado? Justifique.

main ()
{
	setlocale(LC_ALL, ""); 
			//fun��o de localidade para obter mais caracteres.
			
	float qp, qd, total;
	
	printf("Informe a quantidade de pe�as: ");
			//digitar a quantidade de pe�as: 4500
	scanf("%f", &qp);
	
	printf("Informa a quantidade de pe�as com defeito: ");
			//digitar a quantidade de pe�as com defeito: 180
	scanf("%f", &qd);
	
	total= qd * 100 / qp;
			//calcular a porcentagem de pe�as defeituosas
			//100 = valor da porcentagem
	
	printf("\n Porcentagem de pe�as com defeito: %.0f%%",total);
			//ler porcentagem de pe�as com defeito 
	
		if (total>3) //condi��o para o valor ser maior que 3
			{
			printf("\n\n *Lote reprovado!");
			printf("\n Este lote foi reprovado porque a porcentagem das pe�as com defeito � superior a 3%%!\n");
			//ler caso lote for reprovado
			}
		else
		if (total<3) //condi��o para o valor ser menor que 3
			{
			printf("\n\n *Lote aprovado!");
			printf("\n Este lote foi aprovado porque a porcentagem das pe�as com defeito � inferior a 3%%!\n");
			//ler caso lote for aprovado
			}
			
			// .0f = formatar sa�da com nenhuma casa decimal na fun��o f
			// \n = quebra de linha
}
	

