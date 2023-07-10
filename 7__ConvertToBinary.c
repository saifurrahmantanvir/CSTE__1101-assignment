#include <stdio.h>
#include <math.h>

/* _____ _________ _____________ _____________
7. Write a C function for the following problem:
 Given a positive integer n, print the binary representation of n.
_____ _________ _____________ _____________ */

int main()
{
   int n, binary = 0;

   printf("Enter an integer- ");
   scanf("%d", &n);

   for (int i = 0; n > 0; i++)
   {
      binary = binary + (n % 2) * pow(10, i);
      n = n / 2;
   }

   printf("Binary representation- %d", binary);

   return 0;
}