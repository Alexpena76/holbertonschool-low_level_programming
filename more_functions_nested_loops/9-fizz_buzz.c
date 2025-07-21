#include <stdio.h>

/**
 * fizz_buzz - prints "fizz", "buzz", and "fizzbuzz" depending on the multiple
 */

void fizz_buzz(int n)
{

	int i;

	for (i = 1; i <= n; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("fizz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
			putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}

	}

}

int main(void)
{

	fizz_buzz(100);


	return (0);
}
