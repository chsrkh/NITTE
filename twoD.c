#include<stdio.h>
int main()
{
	int n,i,j,flag1=0,flag2=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				flag1=1;
			}
			else
			{
				if(a[i][j]!=0)
				flag2=1;
			}
		}
	}
	if(flag1==0 & flag2==0)
	printf(" Diagonal Matrix");
	else
	printf(" Not Diagonal Matrix");
	return 0;
}






