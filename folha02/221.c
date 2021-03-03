#include <stdio.h>

struct data 
{
	int dia;
	int mes;
	int ano;
	int iso;
};

void calcularISO(struct data* a1)
{
	a1->iso = a1->ano * 100;
	a1->iso += a1->mes; a1->iso*=100;
	a1->iso += a1->dia;
}

int compDatas(struct data* a1, struct data* a2)
{
	calcularISO(a1);
	calcularISO(a2);

	if (a1->iso == a2->iso) return 0;
	else if (a1->iso > a2->iso) return -1;
	else return 1;

}

int difDatas(struct data* a1, struct data* a2)
{
	int a = compDatas(a1,a2);
	if (a == 0) return 0;
	else if (a == 1) return a2->iso - a1->iso;
	else return a1->iso - a2->iso;
}

int main(int argc, char *argv[])
{
	struct data a1,a2;
	printf("insira data1 (ANO MES DIA): "); scanf("%d%d%d",&a1.ano,&a1.mes,&a1.dia);
	printf("insira data2 (ANO MES DIA): "); scanf("%d%d%d",&a2.ano,&a2.mes,&a2.dia);

	printf("%d\n",compDatas(&a1,&a2));
	printf("%d\n",difDatas(&a1,&a2));
	return 0;
}
