#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Even_or_Odd(int x)
{
	if (x % 2 == 0)
	{
		printf("%d is Even", x);
	}
	else
	{
		printf("%d is Odd", x);
	}
}
int main()
{
	int x;
	printf("Enter Number :");
	scanf("%d", &x);
	Even_or_Odd(x);
	return 0;
}