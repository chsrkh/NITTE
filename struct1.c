#include<stdio.h>
	union A
	{
		int x;
		float y;
		char z;
	}a;
	int main()
	{
	scanf("%d",&a.x);
	a.y=36.58;
	a.z='H';
	printf("The value of x = %d",a.x);
	printf("\nThe value of y = %f",a.y);
	printf("\nThe value of z = %c",a.z);
	printf("\nThe size of the union = %d",sizeof(a));
	return 0;
}

		
