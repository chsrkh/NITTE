#include<stdio.h>
int main()
{
	char regno[20];
	scanf("%[^\n]s",regno);
	int i;
	for(i=0;regno[i]!='\0';i++)
	{
		if(islower(regno[i]))
		printf("%c\t",regno[i]);
	}
	return 0;
}
