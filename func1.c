/*declaration syntax:
datatype FunctionName(list of parameters); //before main

calling Syntax:
	FunctionName(list of Arguments); //within main
definition Syntax:
datatype FunctionName(list of parameters) //after main
{
	s1;
	s2;
	s3
	....
}*/
#include<stdio.h>
void Address()
{
	printf("abc");
	printf("\nxyz");
	printf("\npqr");
}


int main()
{
	printf("Before fucntion\n");
	Address();
	Address();
	printf("\nAfter function");
	return 0;
}














