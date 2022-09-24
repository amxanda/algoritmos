#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padrão.
#include<locale.h> //biblioteca de caracteres.

//Em um concurso, 520 candidatos se inscreveram. 
//No dia da prova apenas 364 candidatos compareceram. 
//Neste caso, qual foi a taxa de porcentagem dos candidatos que faltaram a prova?

main ()
{
	setlocale(LC_ALL, ""); 
			//função de localidade para obter mais caracteres.
	
	float ci, cp, calculo, total;
	
	printf("Digite o número de candidatos inscritos: ");
			//digitar a quantidade total de candidatos inscritos: 520
	scanf("%f", &ci);
			
	printf("Digite a quantidade de candidatos que compareceram: ");
			//digital a quantidade de canditados que compareceram: 364
	scanf("%f", &cp);
	
		calculo= cp * 100 / ci;
			//calcular a porcentagem de pessoas presentes
			//100 = valor da porcentagem
		total= 100 - calculo;
			//calcular a porcentagem das pessoas que não compareceram
			//100 = valor da porcentagem
	
	printf("\n Porcentagem dos candidatos que compareceram: %.0f%%", calculo);
			//ler o valor da porcentagem de pessoas presentes
	printf("\n A taxa de candidatos faltantes é de %.0f%%.\n", total);
			//ler o valor da porcentagem das pessoas que não compareceram
			
			// .0f = formatar saída com nenhuma casa decimal na função f
			// \n = quebra de linha
}
