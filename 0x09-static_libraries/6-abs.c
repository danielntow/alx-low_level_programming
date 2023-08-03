#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _abs(int);
int main()
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return 0;
}

int _abs(int num)
{
	if (num >= 0)
	{
		return num;
	}
	else
	{
		return -num;
	}
}