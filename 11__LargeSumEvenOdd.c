#include <stdio.h>

/* _____ _________ _____________ _____________
11. Write a C program to input n numbers in an array, calculate the sum of all even numbers and all odd numbers in the array and print the larger sum.

 Example:
 If the array contains the following elements:
 2, 3, 3, 5, 4, 8, 7, 11, 2

 The sum of all even elements is 2+4+8+2=16
 Sum of all odd elements is 3+3+5+7+11=29
 Therefore, the output should be 29.
_____ _________ _____________ _____________ */

int main()
{
   int n;
   scanf("%d", &n);

   int num[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &num[i]);
   }

   int even_sum = 0, odd_sum = 0;

   for (int i = 0; i < n; i++)
   {
      if (num[i] % 2 == 0)
         even_sum += num[i];
      else
         odd_sum += num[i];
   }

   (even_sum > odd_sum)
       ? printf("%d\n", even_sum)
       : printf("%d\n", odd_sum);

   return 0;
}