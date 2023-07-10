#include <stdio.h>

/* _____ _________ _____________ _____________
10. Write a C program to sort an array of integers using bubble sort.
_____ _________ _____________ _____________ */

/* void swap(int arr[], int b_swap, int a_swap)
{
   int temp_holder = arr[a_swap];

   arr[a_swap] = arr[b_swap];
   arr[b_swap] = temp_holder;
} */

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
   int size;
   scanf("%d", &size);

   int num[size];

   for (int i = 0; i < size; i++)
   {
      scanf("%d", &num[i]);
   }

   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size - i - 1; j++)
      {
         if (num[j] > num[j + 1])
         {
            int temp = num[j];

            num[j] = num[j + 1];
            num[j + 1] = temp;
         }
      }
   }

   print_array(num, size);

   return 0;
}