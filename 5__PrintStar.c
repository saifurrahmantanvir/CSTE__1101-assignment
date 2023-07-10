#include <stdio.h>

/* _____ _________ _____________ _____________
5. Write a C program that reads a positive integer n and then prints the following pattern

 *********
 _********
 __*******
 ___******
 ____*****
 _____****
 ______***
 _______**
 ________*

 where n is the number of lines
_____ _________ _____________ _____________ */

int main()
{
   int n;
   scanf("%d", &n);

   for (int i = n; i >= 1; i--)
   {
      for (int j = 0; j < n - i; j++)
      {
         printf("_");
      }
      for (int j = 1; j <= i; j++)
      {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}