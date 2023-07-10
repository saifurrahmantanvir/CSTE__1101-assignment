#include <stdio.h>

/* _____ _________ _____________ _____________
Write a C program to accept 10 values in an integer array.Display the number of odd, even, and negative numbers.
_____ _________ _____________ _____________ */

int main()
{
   int numbers[10];
   int even = 0, odd = 0, negative = 0;

   for (int i = 0; i < 10; i++)
   {
      scanf("%d", &numbers[i]);
   }

   for (int i = 0; i < 10; i++)
   {
      int curr = numbers[i];

      if (curr % 2 == 0)
         even++;
      else
         odd++;

      if (curr < 0)
         negative++;
   }

   printf("Even- %d, Odd- %d, Negative- %d", even, odd, negative);

   return 0;
}