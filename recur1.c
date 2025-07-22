#include<stdio.h>
int sumofnos(int n,int s)
{   
	if(n==0)
	return s;
	else
	{
	s=s+n;
	sumofnos(n-1,s);
	}
}
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	sum=sumofnos(n,sum);
	printf("%d",sum);
	return 0;
}
