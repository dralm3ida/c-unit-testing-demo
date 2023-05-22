#include <stdio.h>
#include "Demo.h"

int main (int argc, char **argv)
{
   int n;
   printf("Enter any number n:");
   scanf("%d", &n);

   validate_result(n);

   return 0;
}