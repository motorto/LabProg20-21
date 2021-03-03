#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int divisors(int n,int option){
	int sum = 0;
	for (int i=1;i<=n;i++) {
		if (n%i==0) {
			if(option == 2){
				sum+=i;
			}
			else if(option == 1){
				printf("%d ",i); 
			}
		}	
	}
	if (option == 2) return sum;
	else{ 
		putchar('\t');
		return 0;
	}
}	


int main(int argc, char *argv[])
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	int a = divisors(num1,2);
	int b = divisors(num1,2);
	if (a == b){
		printf ("%d e %d são números amigos\n",num1,num2);
		printf ("Divisores de %d: ",num1); divisors(num1,1); printf("Soma: %d\n",a-num2);
		printf ("Divisores de %d: ",num2); divisors(num2,1); printf("Soma: %d\n",b-num1);
	}
	return 0;
}
