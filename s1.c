#include<stdio.h>
#include<string.h>
int main()
{
	char sn[100];
	printf("Enter your name:");
	scanf("%[^\n]s",sn);
	printf("\n name = %s",sn);
	return 0;
}
