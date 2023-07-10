#include <stdio.h>

/* _____ _________ _____________ _____________
8. A triangular number is one which can be represented by that number of pebbles in a  symmetric triangle. The first five triangular numbers are 1, 3, 6, 10 and 15.

 Write a C function int isTriangular(int n) to test if a number ‘n’ is triangular or not.

 It should return 1 if it is triangular and 0 if not.
 T1=1 T2=3 T3=6 T4=10 T5=15
_____ _________ _____________ _____________ */

int isTriangular(int n)
{
   int tracker = 0;

   for (int i = 1; i <= n; i++)
   {
      tracker += i;
      if (n == tracker)
         return 1;
   }

   return 0;
}

int main()
{
   int n;
   scanf("%d", &n);

   if (isTriangular(n))
      printf("TRINAGULAR number");
   else
      printf("Not a TRIANGULAR number");

   return 0;
}