/* Fazer os programas no Dev C++
Numa elei��o existem tr�s candidatos.

    1- Candidato 1
    2- Candidato 2
    3- Candidato 3
    4- Voto nulo
    5- Voto em branco
    
Para sair do programa digite 0.
Pe�a para cada eleitor votar e ao final mostrar:
- O n�mero de votos de cada candidato
- O candidato vencedor
- Porcentagem de votos de cada candidato */

#include<stdio.h>  //biblioteca de entrada e saida (input-output)
#include<stdlib.h> //biblioteca padr�o
#include<locale.h> //biblioteca de caracteres

main() //inicio do programa
{
	setlocale(LC_ALL,""); //fun��o de localidade para obter mais caracteres
	
	int cont=0,n=0, eleitores; //declara��o de vari�veis com n�meros inteiros
	float voto[5],p[5]; //declara��o de vari�veis com n�meros reais

	printf("Quantidade de Eleitores: "); //comando de sa�da para escrever 'Quantidade de Eleitores: '
	scanf("%d",&eleitores); //comando de entrada para digitar a quantidade de eleitores
	
	printf("\n 0 - Encerrar a vota��o"); //comando de sa�da para escrever '0 - Encerrar a vota��o'
	printf("\n 1 - Votar no Candidato 1"); //comando de sa�da para escrever '1 - Votar no Candidato 1'
	printf("\n 2 - Votar no Candidato 2"); //comando de sa�da para escrever '2 - Votar no Candidato 2'
	printf("\n 3 - Votar no Candidato 3"); //comando de sa�da para escrever '3 - Votar no Candidato 3'
	printf("\n 4 - Votar nulo"); //comando de sa�da para escrever '4 - Votar nulo'
	printf("\n 5 - Votar em branco"); //comando de sa�da para escrever '5 - Votar em branco'
		
	printf("\n"); //comando de sa�da para pular linha
	
	while (eleitores>cont) //enquanto a quantidade de eleitores for maior que o contador
	{	
		printf("\n Digite seu voto: "); //comando de sa�da para escrever 'Digite seu voto: '
		scanf("%d",& n); //comando de entrada para digitar o n�mero correspondente ao candidato escolhido
				
		if (n == 0) //se o n�mero for igual a 0 ent�o
		{
			printf("\n Vota��o encerrada! \n"); //comando de sa�da para escrever 'Vota��o encerrada!'
			printf("\n"); //comando de sa�da para pular linha
			
			system("pause"); //pausar a tela
			return 0; //programa retorna 0
		}
		else //sen�o
		if (n == 1) //se o n�mero for igual a 1 ent�o
		{
			voto[0]++; //incrementa o vetor na posi��o 0
		}
		else //sen�o
		if (n == 2) //se o n�mero for igual a 2 ent�o
		{
			voto[1]++; //incrementa o vetor na posi��o 1
		}
		else //sen�o
		if (n == 3) //se o n�mero for igual a 3 ent�o
		{
			voto[2]++; //incrementa o vetor na posi��o 2
		}
		else //sen�o
		if (n == 4) //se o n�mero for igual a 4 ent�o
		{
			voto[3]++; //incrementa o vetor na posi��o 3
		}
		else //sen�o
		if (n == 5) //se o n�mero for igual a  ent�o
		{
			voto[4]++; //incrementa o vetor na posi��o 4
		}
		cont++; //contador incrementado
	} //fim do comando while
		
	p[0]= voto[0]*100/eleitores; //vetor p na posi��o 1 recebe valor do candidato 1
	p[1]= voto[1]*100/eleitores; //vetor p na posi��o 2 recebe valor do candidato 2
	p[2]= voto[2]*100/eleitores; //vetor p na posi��o 3 recebe valor do candidato 3
	p[3]= voto[3]*100/eleitores; //vetor p na posi��o 1 recebe valor do voto nulo
	p[4]= voto[4]*100/eleitores; //vetor p na posi��o 1 recebe valor do voto em branco
	
	if (voto[0]>voto[1] and voto[0]>voto[2]) //se os votos do candidato 1 forem maiores ent�o
	{
		printf("\n O candidato vencedor foi o candidato 1!"); //comando de sa�da para escrever 'O candidato vencedor foi o candidato 1!'
	}
	else //sen�o
	if (voto[1]>voto[0] and voto[1]>voto[2]) //se os votos do candidato 2 forem maiores ent�o
	{
		printf("\n O candidato vencedor foi o candidato 2!"); //comando de sa�da para escrever 'O candidato vencedor foi o candidato 2!'
	}
	else //sen�o
	if (voto[2]>voto[0] and voto[2]>voto[1]) //se os votos do candidato 3 forem maiores ent�o
	{
		printf("\n O candidato vencedor foi o candidato 3!"); //comando de sa�da para escrever 'O candidato vencedor foi o candidato 3!'
	}

	printf("\n\n O Candidato 1 teve %.0f votos e sua porcentagem foi de %.0f%%!",voto[0],p[0]); //comando de sa�da para escrever 'O candidato 1 tem x votos e sua porcentagem foi de x%!'
	printf("\n O Candidato 2 teve %.0f votos e sua porcentagem foi de %.0f%%!",voto[1],p[1]); //comando de sa�da para escrever 'O Candidato 2 teve x votos e sua porcentagem foi de x%!'
	printf("\n O Candidato 3 teve %.0f votos e sua porcentagem foi de %.0f%%!",voto[2],p[2]); //comando de sa�da para escrever 'O Candidato 3 teve x votos e sua porcentagem foi de x%!'
	printf("\n A quantidade de votos nulos foi de %.0f e sua porcentagem equivalente a %.0f%%!",voto[3],p[3]); //comando de sa�da para escrever 'A quantidade de votos nulos foi de x e sua porcentagem equivalente a x%!'
	printf("\n A quantidade de votos em branco foi de %.0f e sua porcentagem equivalente a %.0f%%!",voto[4],p[4]); //comando de sa�da para escrever 'A quantidade de votos em branco foi de x e sua porcentagem equivalente a x%!'
	
	printf("\n\n"); //comando de sa�da para pular 2 linhas
	
	system("pause"); //pausar a tela
	return 0; //programa retorna 0
	
} //fim do programa
