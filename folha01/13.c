// Calcular o dia seguinte a partir de uma data na forma YYYY MM DD
// Last Modified: 2021/02/18
#include<stdio.h>
#include<stdlib.h>

void normal(int ano,int mes,int dia){
	if (dia == 31 && mes<12){ 
		dia=1;
		mes+=1;
	}
	if (dia == 31 && mes == 12){
		dia=1;
		mes=1;
		ano+=1;
	}
	else dia++;

	printf("%d\\%d\\%d\n",ano,mes,dia);
}

void trintaDias(int ano,int mes,int dia){
	if (dia == 30 && mes<12){ 
		dia=1;
		mes+=1;
	}
	if (dia == 30 && mes == 12){
		dia=1;
		mes=1;
		ano+=1;
	}
	else dia++;
	printf("%d\\%d\\%d\n",ano,mes,dia);
}

int bissexto(int ano){
	if ((ano%4==0)&&!((ano%100==0)&&(ano%400!=0))){
		return 0;
	}
	return 1;
}

void fevereiro(int ano,int mes,int dia){
	if (bissexto(ano)==0){
		if(dia == 29){
			dia=1; mes+=1;
		}
	}
	else if (bissexto(ano)==1) {
		if(dia == 28){
			mes+=1; dia=1;
		}
	}
	else dia++;
	printf("%d\\%d\\%d\n",ano,mes,dia);
}

int main() {
	int dia,mes,ano;
	printf("Insira Ano Mes Dia: ");
	scanf("%d%d%d",&ano,&mes,&dia);

	if(mes>12 || dia>31) {
		fprintf(stderr,"%s","ERRO:\nInsira ANO MES DIA valido\n\n");
		exit(0);
	}

	switch(mes) {
		case 2: fevereiro(ano,mes,dia); break;
		case 4: trintaDias(ano,mes,dia); break;
		case 6: trintaDias(ano,mes,dia); break;
		case 9: trintaDias(ano,mes,dia); break;
		case 11: trintaDias(ano,mes,dia); break;
		default: normal(ano,mes,dia); break;
	}

	return 0;
}
