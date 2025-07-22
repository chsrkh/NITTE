#include<stdio.h>
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{
	int n,f;
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial = %d",f);
	return 0;
}
