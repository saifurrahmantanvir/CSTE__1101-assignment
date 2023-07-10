#include <stdio.h>

/* _____ _________ _____________ _____________
30. Implement bubble sort, Insertion sort, binary search in C
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

/* int main()
{
   int len;
   scanf("%d", &len);

   int arr[len];
   scan_array(arr, len);

   for (int i = 0; i < len; i++)
   {
      for (int j = 0; j < len - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            int temp = arr[j];

            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }

   print_array(arr, len);

   return 0;
} */

/* int main()
{
   int len;
   scanf("%d", &len);

   int arr[len];
   scan_array(arr, len);

   for (int i = 1; i < len; i++)
   {
      int curr_value = arr[i];

      int j = i - 1;

      while (j >= 0 && arr[j] > curr_value)
      {
         arr[j + 1] = arr[j];
         j--;
      }

      arr[j + 1] = curr_value;
   }

   print_array(arr, len);

   return 0;
} */

int *bubbleSort(int arr[], int len)
{
   for (int i = 0; i < len; i++)
   {
      for (int j = 0; j < len - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            int temp = arr[j];

            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }

   return arr;
}

int *insertionSort(int arr[], int len)
{
   for (int i = 1; i < len; i++)
   {
      int curr_value = arr[i];

      int j = i - 1;

      while (j >= 0 && arr[j] > curr_value)
      {
         arr[j + 1] = arr[j];
         j--;
      }

      arr[j + 1] = curr_value;
   }

   return arr;
}

int main()
{
   int len, val, algo;
   printf("Enter the length of array : ");
   scanf("%d", &len);

   int arr[len];
   scan_array(arr, len);

   printf("Enter a value to search : ");
   scanf("%d", &val);

   printf("\nSelect a sorting algorithm :\n");
   printf("1.Bubble Sort\n"
          "2.Insertion Sort\n\n");

   printf("Select sorting algorithm: ");
   scanf("%d", &algo);

   int *sorted;

   switch (algo)
   {
   case 1:
      printf("Using bubble sort - ");
      sorted = bubbleSort(arr, len);
      break;
   case 2:
      printf("Using insertion sort - ");
      sorted = insertionSort(arr, len);
      break;
   default:
      printf("Not a valid input!!");
      break;
   }

   printf("Sorted array : ");
   print_array(sorted, len);

   int start = 0;
   int end = len - 1;

   int middle = (start + end) / 2;

   while (arr[middle] != val && start <= end)
   {
      if (val < arr[middle])
         end = middle - 1;

      else
         start = middle + 1;

      middle = (start + end) / 2;
   }

   if (arr[middle] == val)
      printf("\nThe number you entered was found in index %d.", middle);
   else
      printf("Not in array!!");

   return 0;
}