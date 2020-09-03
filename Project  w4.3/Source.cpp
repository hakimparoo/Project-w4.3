#include<stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = -(x - 1);i <= (x - 1);i++)
	{
		for (int j = (x - 1);j >= -(x - 1);j--)
		{
			if (abs(i) + abs(j) <= x - 2 || abs(i) == abs(j))
			{
				printf_s("   ");
			}
			else
			{
				printf_s(" * ");
			}
		}
		printf_s("\n");
	}
	return 0;
}