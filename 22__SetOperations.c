#include <stdio.h>

/* _____ _________ _____________ _____________
22. Write a C program that take 2 integer sets A[] and b[] as input and prints results of following set operations:

 i. A union B (Write function set_union())
 ii. A intersection B (Write function set_intersection())
 iii. A-B and B-A (Write function set_difference())
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

int not_in_union(int a_union_b[], int len_u, int value)
{
   int _not_in_union = 1;

   for (int i = 0; i < len_u; i++)
   {
      if (value == a_union_b[i])
      {
         _not_in_union = 0;
         break;
      }
   }

   return _not_in_union;
}

void set_union(int A[], int B[], int length)
{
   int a_union_b[2 * length];
   int index = 0;

   for (int i = 0; i < length; i++)
   {
      int curr_a = A[i];

      if (not_in_union(a_union_b, index, curr_a))
      {
         a_union_b[index] = curr_a;
         index++;
      }
   }

   for (int i = 0; i < length; i++)
   {
      int curr_b = B[i];

      if (not_in_union(a_union_b, index, curr_b))
      {
         a_union_b[index] = curr_b;
         index++;
      }
   }

   printf("\nA_union_B = [");
   for (int i = 0; i < index; i++)
   {
      printf("%d", a_union_b[i]);
      if (i != index - 1)
         printf(", ");
      else
         printf("]");
   }
}

/* TODO: ______ */
void set_intersection(int A[], int B[], int length)
{
   printf("\nA_intersection_B = [");

   for (int i = 0; i < length; i++)
   {
      for (int j = 0; j < length; j++)
      {
         if (B[j] == A[i])
         {
            printf("%d", A[i]);
            if (i != length - 1)
               printf(", ");
         }
      }
   }
   printf("]");
}

void set_difference(int A[], int B[], int length)
{
   /* A - B */
   printf("\nA - B = [");
   for (int i = 0; i < length; i++)
   {
      int not_in_b = 1;

      for (int j = 0; j < length; j++)
      {
         if (A[i] == B[j])
         {
            not_in_b = 0;
            break;
         }
      }

      if (not_in_b)
      {
         printf("%d", A[i]);
         if (i != length - 1)
            printf(", ");
      }
   }
   printf("]");

   /* B - A */
   printf("\nB - A = [");
   for (int j = 0; j < length; j++)
   {
      int not_in_a = 1;

      for (int i = 0; i < length; i++)
      {
         if (B[j] == A[i])
         {
            not_in_a = 0;
            break;
         }
      }

      if (not_in_a)
      {
         printf("%d", B[j]);
         if (j != length - 1)
            printf(", ");
      }
   }
   printf("]");
}

int main()
{
   int length;
   printf("Enter the array length : ");
   scanf("%d", &length);

   int A[length], B[length];

   printf("Enter value for array A -\n");
   for (int i = 0; i < length; i++)
      scanf("%d", &A[i]);

   print_array(A, length);

   printf("Enter value for array B -\n");
   for (int i = 0; i < length; i++)
      scanf("%d", &B[i]);

   print_array(B, length);

   set_union(A, B, length);
   set_intersection(A, B, length);
   set_difference(A, B, length);

   return 0;
}