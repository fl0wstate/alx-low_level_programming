#include "main.h"
#include "stdio.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, but for multiples of three,
 * print Fizz instead of the number and for the multiples of five, print Buzz.
 * For numbers which are multiples of both three and five, print FizzBuzz.
 * Return: void
 */
void fizz_buzz(void) {
  int i;
  for (i = 1; i <= 100; i++) {
    if (i % 15 == 0)
      printf("FizzBuzz");
    else if (i % 5 == 0)
      printf("Buzz");
    else if (i % 3 == 0)
      printf("Fizz");
    else
      printf("%d", i);
    if (i < 100)
      printf(" ");
  }
  printf("\n");
}
