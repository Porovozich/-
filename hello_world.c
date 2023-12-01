#include <stdio.h>
int main()
{
	printf("\nHello World!");
	for (int c=0; c<10;c++)
	{
		for (int i = 0; i < c; i++)
			printf("#");
		printf("\n");
	}
	return 0;
}
