#include <stdio.h>

/* _____ _________ _____________ _____________
6. Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of the proper divisors (not including itself) of one number is equal to the other number and vice – versa.

 For example 220 & 284 are amicable numbers
 First we find the proper divisors of 220:
 220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110

 1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
 Now, 284: 1, 2, 4, 71, 142
 1 + 2 + 4 + 71 + 142 = 220

 Write a C program to check that the input pair of numbers is amicable.
_____ _________ _____________ _____________ */

int main()
{
   int a, b;

   printf("Enter two numbers- ");
   scanf("%d %d", &a, &b);

   int sum_a = 0;
   for (int i = 1; i <= a / 2; i++)
   {
      if (a % i == 0)
         sum_a += i;
   }

   int sum_b = 0;
   for (int j = 1; j <= b / 2; j++)
   {
      if (b % j == 0)
         sum_b += j;
   }

   if (sum_a == b && sum_b == a)
      printf("%d and %d are AMICABLE numbers", a, b);
   else
      printf("%d and %d are not AMICABLE numbers", a, b);

   return 0;
}