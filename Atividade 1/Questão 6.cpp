#include<stdio.h>  //biblioteca de entrada e saida (input-output).
#include<stdlib.h> //biblioteca padrão.
#include<locale.h> //biblioteca de caracteres.

//A quantia de R$ 1143,00 representa qual porcentagem de R$ 2540,00?

main ()
{
	setlocale(LC_ALL, ""); 
			//função de localidade para obter mais caracteres.
			
	float vt,vc,x;
	
	printf("Digite o valor total: R$");
			//digitar o total: 2540,00
	scanf("%f", &vt);
	
	printf("Digite o valor a ser calculada a porcentagem: R$");
			//digitar o valor para calular a porcentagem: 1143,00
	scanf("%f", &vc);
	
	x = vc * 100 / vt;
			//calcular a porcentagem da distância
			//100 = valor da porcentagem
	
	printf("\n A porcentagem do valor R$%.2f é de %.0f%%.\n",vc ,x);
			//ler a porcentagem do valor calculado
			
			// .2f = formatar saída com 2 casas decimais na função f
			// .0f = formatar saída com nenhuma casa decimal na função f
}
