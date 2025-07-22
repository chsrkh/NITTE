#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,len=0,l=0,u=0,d=0,sp=0,spl=0;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		if(islower(s[i]))
		l++;
		else if(isupper(s[i]))
		u++;
		else if(isdigit(s[i]))
		d++;
		else if(isspace(s[i]))
		sp++;
		else
		spl++;
	}
	if(len>=8 && l>0 && u>0 && d>0 && sp==0 && spl>0)
	printf("It is valid password");
	else
	printf("Invalid Password");
	return 0;
}
