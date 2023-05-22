#include "Demo.h"

void validate_result(int number) {
   if (is_prime_number(number) == TRUE) {
      printf("n = %d is a Prime number", number);
   } else {
      printf("n = %d is not a Prime number", number);
   }
}