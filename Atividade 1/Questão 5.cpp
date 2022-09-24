#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padr�o.
#include<locale.h> //biblioteca de caracteres.

//Os vendedores de uma loja recebem mensalmente um sal�rio fixo no valor de R$ 1.200,00 e uma comiss�o de 6% referente ao valor total do que venderam no m�s. 
//Sendo assim, qual ser� o valor recebido por um vendedor que vendeu no m�s R$14.000,00?

main ()
{
	setlocale(LC_ALL, ""); 
			//fun��o de localidade para obter mais caracteres.
			
	float sf, pc, aum, cr, total;
	
	printf("Digite o sal�rio fixo: R$");
			//digitar o salario: 1200,00
	scanf("%f", &sf);
	
	printf("Digite a porcentagem da comiss�o: %%");
			//digitar a porcentagem da comiss�o: 6
	scanf("%f", &pc);
	
	printf("Digitel o valor da venda: R$");
			//digitar o salario: 14000,00
	scanf("%f", &cr);
	
	aum = cr * pc / 100;
			//calcular valor da comiss�o
			//100 = valor da porcentagem
	total = sf + aum;
			//calcular o valor total do sal�rio
	
	printf("\n O valor do aumento foi de: R$%.2f",aum);
			//ler o valor do aumento 
	printf("\n O vendedor receber� R$%.2f no m�s.\n", total);
			//ler o valor total do sal�rio
			
			// .2f = formatar sa�da com 2 casas decimais na fun��o f
			// \n = quebra de linha
}
