#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x;
	srand(time(0));
	while(1)
	{
	x=(rand()%10)+1;
	if(x>=1 && x<=6)
	break;
	}
	printf("%d",x);
	return 0;
}
