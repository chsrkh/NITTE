#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int sumofdigits(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int eachDigitisprime(int n)
{
	int r;
	while(n>0)
	{
		r=n%10;
		if(!(r==2 || r==3 || r==5 || r==7))
		return 0;	
		n=n/10;	
	}
	return 1;
}

int isperfectPrime(int n)
 {
 	int sum;
 	if(isprime(n))
 	{
 		sum=sumofdigits(n);
 		if(isprime(sum))
 		{
 		if(eachDigitisprime(n))
 			return 1;
 		else
 			return 0;
		}
		return 0;
	}
	return 0;
 }
 
int main()
{
	int x;
	scanf("%d",&x);
	if(isperfectPrime(x))
	printf("Perfect Prime");
	else
	printf("Not Perfect Prime");
	return 0;
}
