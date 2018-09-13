#include <stdio.h>

int main()
{
  // this isn't very general but whatever
  int sum = (100 * 100 + 100) / 2;
  int square_of_sum = sum * sum;
  int sum_of_squares = (100 * 101 * 201) / 6;
  printf("%d\n", square_of_sum - sum_of_squares);
}
