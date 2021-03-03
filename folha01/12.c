// Calcular anos bissextos num intervalo dado
// Last Modified: 2021/02/18
#include<stdio.h>

int main(){
	int menor,maior;
	scanf("%d%d",&menor,&maior);

	for(int i = menor; i<maior ;i++){
    if ((i%4==0)&&!((i%100==0)&&(i%400!=0))){
			printf("%d%c",i, i==maior-1 ? '\n' : ' ' );
		}
	}

	return 0;
}
