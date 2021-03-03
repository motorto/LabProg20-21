// Calcular o minimo multiplo comum de dois numeros inteiros
// Last Modified: 2021/02/18

#include<stdio.h>

int mdc(int a,int b) {
	int r=0;
	while (b!=0) {
		r = a%b;
		a =b;
		b=r;
	}
	return a;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int mmc = a*b/mdc(a,b);
	printf("mmc(a,b)=%d\n",mmc);
	return 0;
}
