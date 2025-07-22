#include<stdio.h>
int factorial(int n)
{
	return n;
}
int main()
{
	int num,f=1,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*factorial(i);
	}
	printf("Factorial = %d",f);
return 0;
}
