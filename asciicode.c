#include<stdio.h>
int main()
{
	int n=1;
	while(n<=256)
	{
		printf("%d-%c\t",n,n);
		n++;
	}
	return 0;
}
