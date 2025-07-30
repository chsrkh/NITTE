#include<stdio.h>
int main()
{
	enum week
	{
		mon,tue, wed, thursday, fri, sat,
	}a;
	a=25;
	printf("%d",a);
	printf("\n %d",sizeof(a));
	return 0;
}
