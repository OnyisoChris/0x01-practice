#include <stdio.h>

void main ()
{
	int a[5], i;

	printf("Enter the array of elements:");
	for (i=0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=0; i < 5; i++)
	{
		printf("Array elemrnt at index %d is: %d\n", i,a[i]);
	}
}
