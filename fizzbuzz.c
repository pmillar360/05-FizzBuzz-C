#include <stdio.h>

int main(void)
{
	int i;
	for (int i = 0; i <=100; ++i)
	{
		if(!(i%15))
			printf("FizzBuzz");
		else if (!(i%5))
			printf("Buzz");
		else if (!(i%3))
			printf("Fizz");
		else
			printf("%d",i);

		printf("\n");
	}
	return 0;
}