#include <stdio.h>

int primo(int n)
{
	for (int j = 2;j <= n/2;j++) {
		if(n%j == 0)
			return 0;
	}
	return 1;
}

void print(int* array,size_t n) 
{
	for (int i = 0;i <n;i++)
	{
		printf("%d%c",array[i],' ');
	}
	putchar('\n');
}

int main(int argc, char *argv[])
{
	int n; scanf("%d",&n);
	int array[n];

	int count=0;
	for (int i=2;count<n;i++){
		if(primo(i)==1)
			array[count++]=i;
	}

	print(array,n);

	return 0;
}
