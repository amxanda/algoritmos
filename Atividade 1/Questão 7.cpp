#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padrão.
#include<locale.h> //biblioteca de caracteres.

//Sabe-se que 37,5% de uma certa distância x corresponde a 600 m. 
//Qual adistância x?

main ()
{
	setlocale(LC_ALL, ""); 
			//função de localidade para obter mais caracteres.
			
	float pc, x, dist;
	
	printf("Digite a distância: ");
			//digite a distância: 600
	scanf("%f", &dist);
	
	printf("Digite a porcentagem correspondente: %%");
			//digite a porcentagem: 37,5
	scanf("%f", &pc);
	
	x = dist * 100 / pc;
			//calcular a distância total
			//100 = valor da porcentagem
	
	printf("\n A distância x é de %.2fm\n",x);
			//ler a distância total
			
			// .2f = formatar saída com 2 casas decimais na função f
}
