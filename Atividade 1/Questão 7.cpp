#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padr�o.
#include<locale.h> //biblioteca de caracteres.

//Sabe-se que 37,5% de uma certa dist�ncia x corresponde a 600 m. 
//Qual adist�ncia x?

main ()
{
	setlocale(LC_ALL, ""); 
			//fun��o de localidade para obter mais caracteres.
			
	float pc, x, dist;
	
	printf("Digite a dist�ncia: ");
			//digite a dist�ncia: 600
	scanf("%f", &dist);
	
	printf("Digite a porcentagem correspondente: %%");
			//digite a porcentagem: 37,5
	scanf("%f", &pc);
	
	x = dist * 100 / pc;
			//calcular a dist�ncia total
			//100 = valor da porcentagem
	
	printf("\n A dist�ncia x � de %.2fm\n",x);
			//ler a dist�ncia total
			
			// .2f = formatar sa�da com 2 casas decimais na fun��o f
}
