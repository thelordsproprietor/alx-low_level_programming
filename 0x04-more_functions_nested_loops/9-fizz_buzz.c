#include <stdio.h>
/**
*main - program prints 0 to 100
*replaces multiple of 3 with Fizz
* replaces multiple of 5 with Buzz
* replaces multiples
of 3 and 5 with FizzBuzz
*
*Return: returns 0
*/
int main(void)
{
	int num=0;
	while (num++ < 100)

		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");

		else if ((num % 3) == 0)
			printf("Fizz ");

		else if ((num % 5) == 0)
				printf("Buzz ");
		else
			printf("%d ", num);

	printf("\n");
	return (0);
}
