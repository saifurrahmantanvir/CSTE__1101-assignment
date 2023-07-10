#include <stdio.h>

/* _____ _________ _____________ _____________
12. Take the price and quantity of items as an input. Write a C function to calculate the sum of the prices. Write another C function to calculate the discount according to the following rules:

 For total less than Rs.1000, discount is 5%.
 For total greater than Rs.1000 but less than Rs.5000, discount is 10%.
 For total greater than Rs.5000, discount is 15%.
 Write another function to print the individual item prices, total, discount and the final price.

 Example:
 If the prices are as follows:
 Item 1: 200
 Item 2: 400
 Item 3: 200
 Item 4: 10
 Item 5: 50

 And the quantities are:
 Item 1: 1
 Item 2: 1
 Item 3: 3
 Item 4: 5
 Item 5: 2

 Then you should print:
 Item          Price       Quantity    Subtotal
 Item 1        200         1           200
 Item 2        400         1           400
 Item 3        200         3           600
 Item 4        10          5           50
 Item 5        50          2           100
 -------------------------------------------------
 TOTAL                                 1350
 Discount 10%                         -135
 -------------------------------------------------
 GRAND TOTAL                           1215
_____ _________ _____________ _____________ */

void space() { printf("\n"); }

void scan_array(int arr[], char *tag, int len)
{
   for (int i = 0; i < len; i++)
   {
      printf("Enter %s for item [%d] : ", tag, i + 1);
      scanf("%d", &arr[i]);
   }

   printf("\n");
}

int main()
{
   int items;
   printf("Enter the number of items : ");
   scanf("%d", &items);

   int prices[items], quantities[items];

   char *tag = "price";
   scan_array(prices, tag, items);

   space();

   tag = "quantity";
   scan_array(quantities, tag, items);

   space();

   int subtotal[items], total = 0;

   for (int i = 0; i < items; i++)
   {
      total += prices[i] * quantities[i];
      subtotal[i] = prices[i] * quantities[i];
   }

   float discount;
   int grand_total, percent;

   if (total < 1000)
   {
      percent = 5;
      discount = total * 0.05;
   }
   else if (total >= 1000 && total < 5000)
   {
      percent = 10;
      discount = total * 0.1;
   }
   else
   {
      percent = 15;
      discount = total * 0.15;
   }

   grand_total = total - (int)discount;

   printf("Item\tPrice\tQuantity\tSubtotal\n");
   for (int i = 0; i < items; i++)
   {
      printf("%d\t%d\t%d\t\t%d\n", i + 1, prices[i], quantities[i], subtotal[i]);
   }
   printf("_________ _______ __________ __________\n");

   printf("Total\t\t\t\t%d\n", total);
   printf("Discount %d%%\t\t\t-%d\n", percent, (int)discount);

   printf("_________ _______ __________ __________\n");
   printf("Grand Total\t\t\t%d\n", grand_total);

   return 0;
}