// Imprimir um losango com diagonal dada
#include<stdio.h>

void parteCima(int d, int* nEspacos,int* nChars)
{
	for (int i = 0;i< d/2 ; i++) {
		for (int j=0;j< *nEspacos;j++){
			putchar(' ');
		}
		for (int k=0;k< *nChars;k++){
			printf("%c",k%2==0 ? 'o' : '+');
		}
		for (int j=0;j < *nEspacos;j++){
			putchar(' ');
		}
		*nChars+=2;
		*nEspacos-=1;
		putchar('\n');
	}
}

void parteBaixo(int d,int* nEspacos,int* nChars)
{
	for (int i = 0;i< d/2 ; i++) {
		for (int j=0;j< *nEspacos;j++){
			putchar(' ');
		}
		for (int k=0;k< *nChars;k++){
			printf("%c",k%2==0 ? 'o' : '+');
		}
		for (int j=0;j < *nEspacos;j++){
			putchar(' ');
		}
		*nChars-=2;
		*nEspacos+=1;
		putchar('\n');
	}
}

void middle(int* nEspacos,int *nChars)
{
	for(int i = 0; i < *nChars ; i++) {
		printf("%c",i%2==0 ? 'o' : '+');
	}
	putchar('\n');
	*nEspacos+=1;
	*nChars-=2;
}

int main(void)
{
	int d; 
	printf("Diagonal(tem que ser impar): ");scanf("%d",&d);

	int nEspacos,nChars;

	nChars = 1;
	nEspacos = d/2;

	parteCima(d,&nEspacos,&nChars);
	middle(&nEspacos,&nChars);
	parteBaixo(d,&nEspacos,&nChars);


	return 0;
}
