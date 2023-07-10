#include <stdio.h>
#include <math.h>

/* _____ _________ _____________ _____________
4. Write a C program to display and find the sum of the series 1+11+111+....111 upto n. For eg. if
n=4, the series is : 1+11+111+1111. Take the value of 'n' as input from the user.
_____ _________ _____________ _____________ */

int main()
{
   int n;
   scanf("%d", &n);
   long long sum = 0, temp = 0;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j <= i; j++)
         printf("1");
      if (i != n - 1)
         printf("+");
   }

   printf(" = ");

   for (int i = 0; i < n; i++)
   {
      temp += pow(10, i);
      sum += temp;
   }

   printf("%lld", sum);

   return 0;
}