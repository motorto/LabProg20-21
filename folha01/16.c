// Advinhar numero gerado pelo computador, conta o numero de tentativas.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	// rand % (MAX +1 - MIN) + MIN;
	int a = rand() % (100 + 1 - 0) + 0;
	int answer = 0;
	int tentativas = 0;
	while (answer != a){
		scanf("%d",&answer);
		if (answer > a)
			printf("O numero é menor do que o inserido.\n");
		else if (answer < a) 
			printf("O numero é maior do que o inserido.\n");
		tentativas++;
	}
	printf("Acertaste!!! Precisaste de %d tentativa(s)\n",tentativas);
	return 0;
}
