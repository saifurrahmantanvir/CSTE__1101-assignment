#include <stdio.h>

/* _____ _________ _____________ _____________
3. Write a C program that calculates the HCF and LCM of two numbers.
_____ _________ _____________ _____________ */

int main()
{
   int num1, num2, hcf, lcm;
   scanf("%d %d", &num1, &num2);

   int min = (num1 < num2) ? num1 : num2;

   for (int i = 1; i <= min; i++)
   {
      if (num1 % i == 0 && num2 % i == 0)
         hcf = i;
   }

   lcm = (num1 * num2) / hcf;

   printf("HCF of %d and %d = %d\n", num1, num2, hcf);
   printf("LCM of %d and %d = %d\n", num1, num2, lcm);

   return 0;
}