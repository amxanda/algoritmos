#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padrão.
#include<locale.h> //biblioteca de caracteres.

//Na promoção de uma loja de eletrodomésticos, um aparelho de som que custava R$ 400,00 teve um desconto de 12%. 
//Quanto um cliente pagará na compra do equipamento? 
//a) R$ 372,00 b) R$ 342,00 c) R$ 362,00 d) R$ 352,00

main ()
{
	setlocale(LC_ALL, ""); 
			//função de localidade para obter mais caracteres.
	
	float vp, pa, vd, total;

	printf("Informe o valor do produto: R$");
			//digitar valor do produto: 400,00
	scanf("%f", &vp);
	
	printf("Informe o percentual de aumento: %%");
			//digitar valor do desconto: 12
	scanf("%f", &pa);
		
		vd= vp * pa / 100;
			//calcular o valor do desconto
			//100 = valor da porcentagem
		total= vp - vd;
			//calcular valor final do produto
	
	printf("\n O desconto foi de R$%.2f", vd);
			//ler valor do desconto.
		printf("\n O cliente deverá pagar o  equivalente a R$%.2f pelo equipamento.\n", total);
			//ler o valor total do produto
		
			// .2f = formatar saída com 2 casas decimais na função f
			// \n = quebra de linha
}	
