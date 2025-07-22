//s="a1b23c456d7890";
#include<stdio.h>
#include<ctype.h>
int main()
{
char s[100];
int n,i,j,sum=0;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
	n=0;
	if(isdigit(s[i]))
	{
		n=s[i]-'0';
		for(j=i+1;s[j]!='\0';j++)
		{
			if(isdigit(s[j]))
			n=n*10+s[j]-'0';
			else
			{
				i=j;
				break;
			}
		}
		//n=456
		sum=sum+n;
	}
}
printf("%d",sum);
return 0;
	
}
