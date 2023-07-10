#include <stdio.h>

/* _____ _________ _____________ _____________
20. Write a C program, which will print two digit numbers whose sum of both digit is multiple of
seven.

 e.g. 16,25,34......
_____ _________ _____________ _____________ */

int main()
{
   int f_digit, l_digit;

   for (int i = 10; i < 100; i++)
   {
      f_digit = i / 10;
      l_digit = i % 10;

      if (f_digit + l_digit == 7)
         printf("%d ", i);
   }

   return 0;
}