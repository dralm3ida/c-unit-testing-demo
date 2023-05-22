#include "PrimeNumbers.h"

BOOLEAN is_prime_number(int number) {
   int i, n_factors = 0;

   if (number <= 1) {
      return FALSE;
   }

   for (i = 1; i <= number; i++) {
      if (number % i == 0) {
         n_factors++;
      }
   }
   if (n_factors == 2) {
      return TRUE;
   }
   return FALSE;
}