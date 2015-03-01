#include <stdio.h>

int main(void)
{
	int i;
	for (int i = 0; i <=100; ++i)
	{
		i % 15 == 0 ? printf("Fizzbuzz\n");
		i % 5 == 0 ? printf("Fizz\n");
		i % 3 == 0 ? printf("Buzz\n");
	}
	return 0;
}