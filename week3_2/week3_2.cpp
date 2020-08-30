#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n > 0 and n % 2 == 0)
	{
		printf("%d is Positive even",n);
	}
	if (n > 0 and n % 2 == 1)
	{
		printf("%d is Positive odd",n);
	}
	if (n < 0 and n % 2 == 0)
	{
		printf("%d is Negative even",n);
	}
	if (n < 0 and n % 2 == -1)
	{
		printf("%d is Negative odd",n);
	}
	if(n==0)
	{
		printf("Zero");
	}
	return 0;
}