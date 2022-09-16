#include <stdio.h>

/**
 * main - prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multilples of five,
 *        Buzz, and fr multiples of both three and five, FizzBuzz.
 *
 *        Return: Always 0.
 */
int main(void)
{ 
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			_putchar('FizzBuzz');

		else if ((num % 3) == 0)
			_putchar('Fizz');

		else if ((num % 5) ==0)
			_putchar9('Buzz');

		else
			_putchar('%d', num);

		if (num == 100)
			continue;
		_putchar('');
	}
	_putchar('\');

	return (0)
}
