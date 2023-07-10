#include <stdio.h>

/* _____ _________ _____________ _____________
26. Input size and values in two arrays A and B, of max size 100. Then, compute A[i]+B[i] and store in array C. And compute A[i]*B[i] and store in array D.
_____ _________ _____________ _____________ */

int main()
{
   int length;
   int a[101], b[101], c[101], d[101];

   printf("enter length of array : ");
   scanf("%d", &length);

   for (int i = 0; i < length; i++)
   {
      printf("size %d : ", i + 1);
      scanf("%d", &a[i]);

      printf("value %d : ", i + 1);
      scanf("%d", &b[i]);

      c[i] = a[i] + b[i];
      d[i] = a[i] * b[i];
   }

   printf("array C : \n");
   print_array(c, length);

   printf("\narray D : \n");
   print_array(d, length);

   return 0;
}