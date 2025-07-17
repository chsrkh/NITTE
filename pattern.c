#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter any number:");
    scanf("%d",&n);
    int size = 2 * n - 1;
	for (i = 1; i <= size; i++)
	{
        for (j = 1; j <= size; j++)
		{
            int min_distance =( i < size - i + 1 )? i : (size - i + 1);
            min_distance = j < min_distance ? j : (min_distance);
            min_distance = size - j + 1 < min_distance ? size - j + 1 : min_distance;
            printf("%d ", n - min_distance + 1);
        }
        printf("\n"); 
    }

    return 0;
}

