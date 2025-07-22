

//call by value function:


	
//call by reference function:
	










#include<stdio.h>
int	addition(int *a,int *b)
{
int c;
c=*a+*b;
return c;	
}	
int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=addition(&x,&y); //calling by using reference 
	printf("%d",z);	
	return 0;
}

