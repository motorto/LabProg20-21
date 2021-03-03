#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int cmpint(const void *p1, const void *p2)
{
	return *(int*)p1 > *(int*)p2;
}

void input (int* array,int size)
{
	int tmp;
	for (int i = 0; i < size; ++i) {
		scanf("%d",&tmp);
		array[i] = tmp;
	}
}

void print(int *array ,int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%d%c",array[i],i==(size-1) ? '\n' : ' ');
	}
}

int option()
{
	printf("1 - Escrever no ecrã a sequência introduzida.\n");
	printf("2 - Permite procurar o maior número da sequência.\n");
	printf("3 - Permite procurar o menor número da sequência.\n");
	printf("4 - Calcular o somatório da sequência.\n");
	printf("5 - Calcular a média da sequência.\n");
	/*
		 printf("6 - Determinar a subsequência abaixo da média.\n");
		 printf("7 - Determinar a subsequência acima da média.\n");
		 */
	printf("8 - Terminar o programa.\n");
	int a; scanf("%d",&a);

	if( a > 8 || a < 1 ){
		fprintf(stderr,"%s","ERRO!!!\nInsira um digito valido\n\n");
		option();
	}
	return a;
}

int sum(int* array,int size)
{
	int sum=0;
	for (int i = 0; i < size; i++) {
		sum+=array[i];
	}
	return sum;
}

int media(int* array, int size)
{
	int s = sum(array,size);
	return s/size;
}

int main()
{
	int n; //numero de digitos que vamos trabalhar
	printf("Insira o numero de elementos com que deseja trabalhar\n"); scanf("%d",&n);
	int array[n]; //array de numeros
	input(array,n);

	qsort(&array, n-1 , sizeof(int) ,cmpint);

	int action;
	do {
		action = option();
		switch (action) {
			case 1: print(array,n); break;
			case 2: printf("Maior Numero é: %d\n",array[n-1]); break;
			case 3: printf("Menor Numero é: %d\n",array[0]); break;
			case 4: printf("O somatório é:%d\n",sum(array,n)); break;
			case 5: printf("A media é:%d\n",media(array,n)); break;
			case 8: exit(0); break;
			default: 
							fprintf(stderr,"%s","Insira um digito valido\n");
							break;
		}

		printf("Fazer mais ações(y/n)?:");
		char c = 'y'; scanf("%c",&c); scanf("%c",&c);
		if (c != 'y') {
			exit(0);
		}
	} while (action != 8);

	return 0;
}
