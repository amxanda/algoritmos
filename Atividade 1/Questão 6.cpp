#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padr�o.
#include<locale.h> //biblioteca de caracteres.

//A quantia de R$ 1143,00 representa qual porcentagem de R$ 2540,00?

main ()
{
	setlocale(LC_ALL, ""); 
			//fun��o de localidade para obter mais caracteres.
			
	float vt,vc,x;
	
	printf("Digite o valor total: R$");
			//digitar o total: 2540,00
	scanf("%f", &vt);
	
	printf("Digite o valor a ser calculada a porcentagem: R$");
			//digitar o valor para calular a porcentagem: 1143,00
	scanf("%f", &vc);
	
	x = vc * 100 / vt;
			//calcular a porcentagem da dist�ncia
			//100 = valor da porcentagem
	
	printf("\n A porcentagem do valor R$%.2f � de %.0f%%.\n",vc ,x);
			//ler a porcentagem do valor calculado
			
			// .2f = formatar sa�da com 2 casas decimais na fun��o f
			// .0f = formatar sa�da com nenhuma casa decimal na fun��o f
}
