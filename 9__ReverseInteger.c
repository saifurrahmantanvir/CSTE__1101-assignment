#include <stdio.h>

/* _____ _________ _____________ _____________
9. Write a C program to find the reverse of an integer number
_____ _________ _____________ _____________ */

int main()
{
   int num, rev = 0;
   scanf("%d", &num);

   while (num != 0)
   {
      rev = rev * 10 + num % 10;
      num = num / 10;
   }

   printf("Reversed Number- %d", rev);

   return 0;
}