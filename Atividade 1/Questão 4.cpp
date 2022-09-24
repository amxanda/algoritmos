#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padr�o.
#include<locale.h> //biblioteca de caracteres.

//Na �ltima liquida��o de ver�o, uma loja vendia todos os seus produtos com um desconto de 15%.
//Se uma camisa antes da liquida��o custava R$ 145,00, quanto passou a custar na liquida��o?

main ()
{
	setlocale(LC_ALL, ""); 
			//fun��o de localidade para obter mais caracteres.
			
	float d,vc,vd,total;
	
	printf("Informe o valor da camisa: R$");
			//digitar o valor da camisa: 145,00
	scanf("%f", &vc);
	
	printf("Informe a porcentagem de desconto das camisas: %%");
			//digitar o valor do desconto: 15
	scanf("%f", &d);

	vd = vc * d /100;
			//calcular o valor do desconto
			//100 = valor da porcentagem
	total = vc - vd;
			//calcular valor final da camisa
	
	printf("\n O valor do desconto � de: R$%.2f ",vd);	
			//ler o valor do desconto
	printf("\n A camisa passou a custar R$%.2f\n", total);
			//ler o custo final da camisa
			
			// .2f = formatar sa�da com 2 casas decimais na fun��o f
			// \n = quebra de linha
}
