#include <stdio.h>

long is_prime(long n)
{
  if (n < 2)
  {
    return 0;
  }
  for (long i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

void factorize(long n)
{
  /* Given an integer, prints its prime factorization. */
  printf("%ld:", n);
  for (long i = 2; i < n; i += 2)
  {
    // divide by all the factors we find to simplify the number
    if (n % i == 0)
    {
      while (n % i == 0)
      {
        printf(" %ld *", i);
        n /= i;
      }
    }
    // if a prime is reached it is the largest prime factor
    if (is_prime(n))
    {
      printf(" %ld\n", n);
      break;
    }

    // 2 should be the only even number we try
    if (i == 2)
    {
      i--;
    }
  }
}

long main()
{
  long n = 600851475143; 
  factorize(n);
  return 0;
}
