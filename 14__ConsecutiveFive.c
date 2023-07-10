#include <stdio.h>

/* _____ _________ _____________ _____________
14. Write a C program to check if a number has three consecutive 5s. If yes, print YES, else print NO.

 Example:
 Number: 1353554
 Result: NO
 Number: 345559
 Result: YES
_____ _________ _____________ _____________ */

int main()
{
   int num;
   scanf("%d", &num);

   int count = 0;

   while (num > 0)
   {
      if (num % 10 == 5)
         count++;
      else
         count = 0;

      num = num / 10;

      if (count == 3)
      {
         printf("YES");
         break;
      }
   }

   if (count < 3)
      printf("NO");

   return 0;
}