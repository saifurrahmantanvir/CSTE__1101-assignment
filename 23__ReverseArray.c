#include <stdio.h>

/* _____ _________ _____________ _____________
23. Write a C program to take a list of n elements from the user. Store it in an array. Reverse the list.
_____ _________ _____________ _____________ */

void scan_array(int arr[], int len)
{
   for (int i = 0; i < len; i++)
   {
      printf("[%d] : ", i);
      scanf("%d", &arr[i]);
   }

   printf("\n");
}

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
   int len;
   printf("Enter the array length : ");
   scanf("%d", &len);

   int arr[len];

   scan_array(arr, len);

   printf("Original array : ");
   print_array(arr, len);

   int start = 0, end = len - 1;

   while (start < end)
   {
      int temp = arr[start];

      arr[start] = arr[end];
      arr[end] = temp;

      start++;
      end--;
   }

   printf("Reversed array : ");
   print_array(arr, len);

   return 0;
}