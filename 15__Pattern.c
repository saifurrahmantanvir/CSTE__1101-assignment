#include <stdio.h>

/* _____ _________ _____________ _____________
15. Write a C program to print the following pattern:
 a) 1         b) 1
 1 2             2 2
 1 2 3           3 3 3
 1 2 3 4         4 4 4 4
 1 2 3 4         5 5 5 5 5 5
_____ _________ _____________ _____________ */

int main()
{
   int num = 5;

   /* a */
   for (int i = 1; i <= num; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         printf("%d ", j);
      }
      printf("\n");
   }

   /* b */
   for (int i = 1; i <= num; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         printf("%d ", i);
      }
      printf("\n");
   }

   return 0;
}