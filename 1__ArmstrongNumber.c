#include <stdio.h>

/* _____ _________ _____________ _____________
1. A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to enter a number and returns if it is Armstrong or not (use function).
_____ _________ _____________ _____________ */

int digit_sum(int num)
{
   int sum = 0;

   while (num > 0)
   {
      int curr = num % 10;
      sum += curr * curr * curr;

      num = num / 10;
   }

   return sum;
}

int main()
{
   int num;
   scanf("%d", &num);

   int sum = digit_sum(num);

   if (sum == num)
      printf("ARMSTRONG number");
   else
      printf("NOT an ARMSTRONG number");

   return 0;
}