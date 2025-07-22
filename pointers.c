//C program to access different types of pointers
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *p,i;
	p=a;
	for(i=0;i<5;i++)
	{
	printf("\n Value = %d",*p);
	printf("\n address = %p",p);
	p++;
	}
	return 0;
}
