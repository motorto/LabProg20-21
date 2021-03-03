// Imprime um calendario , que começa no dia especificado, com numeros de dias
// tbm dado por input
#include<stdio.h>
#include<string.h>

void tabela(int inicio,int dias) {
	printf("%c   %c   %c",'|','D','|');
	printf("%c   %c   %c",'|','S','|');
	printf("%c   %c   %c",'|','T','|');
	printf("%c   %c   %c",'|','Q','|');
	printf("%c   %c   %c",'|','Q','|');
	printf("%c   %c   %c",'|','S','|');
	printf("%c   %c   %c",'|','S','|');
	putchar('\n');

	for (int i=0;i<inicio;i++){
		printf("%c   %c   %c",'|',' ','|');
	}

	for (int i = 1; i <= dias; i++) {
		if( i%7 == 0){ 
			printf("%c   %d   %c",'|',i,'|');
			putchar('\n');
		}
		else 
			printf("%c   %d   %c",'|',i,'|');
	}
	putchar('\n');
}

int main(){
	int dias;
	char primeiroDia[10];
	printf("Insira numero de dias: ");
	scanf("%d",&dias);
	fgets(primeiroDia, sizeof(primeiroDia), stdin); // Para ler o '\n' do dias
	printf("Insira dia inicial: ");
	fgets(primeiroDia, sizeof(primeiroDia), stdin);

	int inicio=0;
	if (strcmp(primeiroDia,"domingo")) inicio = 1;
	else if (strcmp(primeiroDia,"segunda")) inicio = 2;
	else if (strcmp(primeiroDia,"terça")) inicio = 3;
	else if (strcmp(primeiroDia,"quarta")) inicio = 4;
	else if (strcmp(primeiroDia,"quinta")) inicio = 5;
	else if (strcmp(primeiroDia,"sexta")) inicio = 6;
	else if (strcmp(primeiroDia,"sabado")) inicio = 7;

	tabela(inicio,dias);

	return 0;
}

