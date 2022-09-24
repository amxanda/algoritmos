#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padrão.
#include<locale.h> //biblioteca de caracteres.

//Os vendedores de uma loja recebem mensalmente um salário fixo no valor de R$ 1.200,00 e uma comissão de 6% referente ao valor total do que venderam no mês. 
//Sendo assim, qual será o valor recebido por um vendedor que vendeu no mês R$14.000,00?

main ()
{
	setlocale(LC_ALL, ""); 
			//função de localidade para obter mais caracteres.
			
	float sf, pc, aum, cr, total;
	
	printf("Digite o salário fixo: R$");
			//digitar o salario: 1200,00
	scanf("%f", &sf);
	
	printf("Digite a porcentagem da comissão: %%");
			//digitar a porcentagem da comissão: 6
	scanf("%f", &pc);
	
	printf("Digitel o valor da venda: R$");
			//digitar o salario: 14000,00
	scanf("%f", &cr);
	
	aum = cr * pc / 100;
			//calcular valor da comissão
			//100 = valor da porcentagem
	total = sf + aum;
			//calcular o valor total do salário
	
	printf("\n O valor do aumento foi de: R$%.2f",aum);
			//ler o valor do aumento 
	printf("\n O vendedor receberá R$%.2f no mês.\n", total);
			//ler o valor total do salário
			
			// .2f = formatar saída com 2 casas decimais na função f
			// \n = quebra de linha
}
