#include <stdio.h>

/* 
 * Factorial
 * 5! = 5 * 4 * 3 * 2 * 1 = 120
 */

int factorial(int number) {
	if (number == 1)
		return 1;
	return number * factorial(number - 1);
}

int main(void) {
	printf("%d\n", factorial(5));
	return 0;
}
