#include <stdio.h>

/* _____ _________ _____________ _____________
29. Find out the ugly prime number
 Desc: The given number is ugly prime number if it's prime factor
contains only among 2,3 or 5.

e.g. 20= 2*2*5 is ugly prime number
 14=2*7 is not a ugly prime number
 So write a C function which takes values from 1 to n and returns
the number of ugly primes number in it.

 input: 20
 output: 3
_____ _________ _____________ _____________ */

void print_array(int arr[], int len)
{
   printf("[");
   for (int i = 0; i < len; i++)
   {
      printf("%d", arr[i]);
      if (i != len - 1)
         printf(", ");
   }

   printf("]\n");
}

int main()
{
   int n;
   printf("Enter a value to check : ");
   scanf("%d", &n);

   int original_n = n;

   int p_factor[] = {0};
   int index = 0;

   for (int i = 1; i <= 5; i++)
   {
      if (n % i == 0)
      {
         int div_count = 0;

         for (int j = 1; j <= i; j++)
         {
            if (i % j == 0)
               div_count++;
         }

         if (div_count == 2)
         {
            p_factor[index] = i;
            index++;
         }
      }
   }

   printf("Ugly prime factors - ");
   print_array(p_factor, index);

   int isUgly = 0;

   for (int i = 0; i < index; i++)
   {
      if (isUgly)
         break;
      for (int j = 0; j < index; j++)
      {
         if (isUgly)
            break;
         for (int k = 0; k < index; k++)
         {
            int product = p_factor[i] * p_factor[j] * p_factor[k];

            if (product == original_n)
            {
               printf("\nBecause of %d* %d* %d = ", p_factor[i], p_factor[j], p_factor[k]);
               isUgly = 1;
               break;
            }
         }
      }
   }

   if (isUgly)
      printf("%d is an Ugly prime number!\n", original_n);
   else
      printf("%d is Not an Ugly prime number!\n", original_n);

   return 0;
}