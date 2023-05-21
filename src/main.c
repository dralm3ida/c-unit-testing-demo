#include <stdio.h>
#include "main.h"

int main (int argc, char **argv)
{
   int n;
   printf("Enter any number n:");
   scanf("%d", &n);

   if (is_prime_number(n) == TRUE) {
      printf("n = %d is a Prime number", n);
   } else {
      printf("n = %d is not a Prime number", n);
   }

   return 0;
}