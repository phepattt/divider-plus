#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	int a, b = 1, c = 0;
	printf("Enter number : ");
	scanf("%d", &a);
	while (b < a)
	{
		if (a % b == 0)
		{
			c = c + b;
			b = b + 1;
		}
		else
		{
			b = b + 1;
		}
	}
	if (a = b)
	{
		printf(" P(x) = %d ", c);
	}
	return 0;
}