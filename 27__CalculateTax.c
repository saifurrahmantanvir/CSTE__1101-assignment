#include <stdio.h>

/* _____ _________ _____________ _____________
27. Compute taxes for a given income with tax slab rates as follows...

 slab 1... 0-2500: 0%
 slab 2... 2500-5000: 10%
 slab 3... 5000-10000: 20%
 slab 4... 10000+: 30%

 (for each range of a given income, the tax rate is different)

 e.g. input: x = 5200
 divisions are 0-2500, 2500-5000, 5000-5200

 calculation:
 0-2500 of x:
 0% of 2500 = 0

 2500-5000 of x:
 10% of 2500 = 250

 5000-10000 of x:
 20% of 200 = 40

 output: 290
_____ _________ _____________ _____________ */

int main()
{
   float income;
   printf("Enter income to determine Tax : ");
   scanf("%f", &income);

   float tax = 0;

   if (income < 2500)
      tax = 0;
   else if (income >= 2500 && income <= 5000)
      tax = income * 0.1;
   else if (income > 5000 && income <= 10000)
      tax = 250 + (income - 5000) * 0.2;
   else
      tax = 250 + 1000 + (income - 10000) * 0.3;

   printf("Tax for given income : %.2f taka", tax);

   return 0;
}