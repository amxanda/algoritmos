#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padrão.
#include<locale.h> //biblioteca de caracteres.

//Em uma indústria, o setor de qualidade constatou que de um lote com 4500 peças, 180 apresentavam algum defeito. 
//Para um lote ser aprovado é necessário que o número de peças com defeito seja inferior a 3%. 
//Neste caso, o lote foi aprovado ou reprovado? Justifique.

main ()
{
	setlocale(LC_ALL, ""); 
			//função de localidade para obter mais caracteres.
			
	float qp, qd, total;
	
	printf("Informe a quantidade de peças: ");
			//digitar a quantidade de peças: 4500
	scanf("%f", &qp);
	
	printf("Informa a quantidade de peças com defeito: ");
			//digitar a quantidade de peças com defeito: 180
	scanf("%f", &qd);
	
	total= qd * 100 / qp;
			//calcular a porcentagem de peças defeituosas
			//100 = valor da porcentagem
	
	printf("\n Porcentagem de peças com defeito: %.0f%%",total);
			//ler porcentagem de peças com defeito 
	
		if (total>3) //condição para o valor ser maior que 3
			{
			printf("\n\n *Lote reprovado!");
			printf("\n Este lote foi reprovado porque a porcentagem das peças com defeito é superior a 3%%!\n");
			//ler caso lote for reprovado
			}
		else
		if (total<3) //condição para o valor ser menor que 3
			{
			printf("\n\n *Lote aprovado!");
			printf("\n Este lote foi aprovado porque a porcentagem das peças com defeito é inferior a 3%%!\n");
			//ler caso lote for aprovado
			}
			
			// .0f = formatar saída com nenhuma casa decimal na função f
			// \n = quebra de linha
}
	

