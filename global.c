#include<stdio.h>
int c; // global variable
int addition(int a,int b)
{
	c=a+b;
	return c;
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	c=addition(x,y);
	printf("The add = %d",c);
	return 0;
}
