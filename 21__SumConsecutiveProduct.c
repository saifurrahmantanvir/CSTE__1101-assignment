#include <stdio.h>

/* _____ _________ _____________ _____________
21. Write a C program, That reads list of n integer and print sum of product of consecutive numbers.

if n=7 and numbers are 4,5,2,5,6,4,7

then output is 4*5+5*2+2*5+5*6+6*4+4*7 = 122.
_____ _________ _____________ _____________ */

int main()
{
   int n;
   scanf("%d", &n);

   int numbers[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &numbers[i]);
   }

   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum += numbers[i] * numbers[i + 1];
   }

   printf("%d", sum);

   return 0;
}