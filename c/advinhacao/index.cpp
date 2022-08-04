#include <stdio.h>
#include <stdlib.h>

int main(){
	int number = rand() % 100, inputNumber;
	
	printf("###########################################\n");
	printf("Bem vindo ao jogo de advinhacao de numeros!\n");
	printf("###########################################\n");
	
	do {
		printf("Digite um numero de 1 a 99 para tentar advinhar: ");
		scanf("%i", &inputNumber);
		
		if(inputNumber > number) {
			printf("\nVoce tentou um numero maior, chute um pouco mais baixo =) \n");
		} else {
			printf("\nVoce tentou um numero menor, chute um pouco mais alto =) \n");
		}
	} while (inputNumber != number);
	
	printf("\nParabeens! Voce advinhou o numero sorteado!");
	
	return 0;
}
