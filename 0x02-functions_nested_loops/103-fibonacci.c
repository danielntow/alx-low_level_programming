#include <stdio.h>

int main(void)
{
int term1 = 1;    // First term
int term2 = 2;    // Second term
int nextTerm;     // Next term
long long sum = 2; // Sum of even-valued terms, initialized with the second term (2)

while (term2 <= 4000000)
{
	nextTerm = term1 + term2;

	if (nextTerm % 2 == 0)
	{
		sum += nextTerm;
	}

	term1 = term2;
	term2 = nextTerm;
}

printf("%lld\n", sum);

return 0;
}

