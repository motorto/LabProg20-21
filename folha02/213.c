#include <stdio.h>

#define MAX 256

void copy(char* origin, char* dest)
{
	while(*origin != '\0')
	{
		*dest = *origin;
		dest++;
		origin++;
	}
	*dest = '\0';
}

int main(int argc, char *argv[])
{
	char str1[MAX];
	char str2[MAX];

	fgets(str1,256,stdin);
	fgets(str2,256,stdin);

	copy(str1,str2);

	printf("str1=%sstr2=%s",str1,str2);
	return 0;
}
