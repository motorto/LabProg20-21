#include <stdio.h>

#define MAX 256

int strlength(char* string)
{
	int size=0;

	while(*string != '\0')
	{
		size++;
		string++;
	}

	return size;
}

int main(int argc, char *argv[])
{
	char string[MAX];
	fgets(string,256,stdin);
	printf("O tamanho é:%d\n",strlength(string));

	return 0;
}
