#include <stdio.h>

int main()
{
  int sum = 0;
  int fib_a = 1;
  int fib_b = 0;
  int temp = 0;

  while (fib_b < 4000000)
  {
    fib_a += fib_b;
    if (fib_a % 2 == 0)
    {
      sum += fib_a;
    }
    temp = fib_a;
    fib_a = fib_b;
    fib_b = temp;
  }

  printf("%d", sum);
}
