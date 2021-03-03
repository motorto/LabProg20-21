// Calcular se o int é par se sim adicionar 0 , se nao adicionar um 1 no final
// Compliquei imenso: uma maneira melhor seria simplesmente calcular a soma,
// e multiplicar por 10 , ou 10 +1.
// Last Modified: 2021/02/18
#include <stdio.h>
#include <math.h>

int paridade(int numero) {
	if (numero % 2 == 0)
		return 0;
	else return 1;
}

int sum(int* array,int size){
	int a = 0;
	for (int i = 0 ; i<size ; i++)
		a+=array[i];

	return a;
}

void createArray(int *array,int size,int numero){
	for (int i = size-1 ; i>=0 ; i--){
		int a = numero%10;
		numero/=10;
		array[i] = a;
	}
}

void write(int *array,int size){
	for (int i = 0 ; i<size ; i++)
		printf("%d%c",array[i],i==size-1 ? '\n' : ' ');
}

int main(){
	int input; int sizeNum;
	scanf("%d",&input);
	sizeNum = log10(input) + 1;

	int size = sizeNum+1;
	int num[size];

	createArray(num,size-1,input);
	
	if (paridade( sum(num,size)) == 0) 
		num[size-1]=0;
	else 
		num[size-1]=1;

	write(num,size);

	return 0;
}
