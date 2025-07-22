//to return smallest element from the array
#include<stdio.h>
int smallestEle(int *x,int s) //call by reference
{
	int sm=x[0];
	int i;
	for(i=1;i<s;i++)
	{
		if(x[i]<sm)
		sm=x[i];
	}
	return sm;
}
int main()
{
	int n,i,res;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		res=smallestEle(a,n);
	printf("\n%d", res);
	return 0;
}
