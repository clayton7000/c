#include <iostream>
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sorteado=rand()%10;
	int suposicao;
	do{
		printf("descubra o numero sorteado de 1 a 10\n");		
		scanf("%d",&suposicao);	
		if(suposicao==sorteado){
			printf("Parabens voce acertou, o numero sorteado foi %d\n",sorteado);	
			break;
		}else{
			printf("Voce errou\n");
		}
	}while(suposicao!=sorteado);
	return 0;
}
