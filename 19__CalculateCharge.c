#include <stdio.h>

/* _____ _________ _____________ _____________
19. An Electricity board charges the following rates for use of electricity.
 For the First 200 units : Rs 1 per unit
 For the next 100 units : Rs 1.5 per unit
 Beyond 300 units : Rs 2 Per unit.
 Write a C Program to read no of unit consumed and print out total charge amount.
_____ _________ _____________ _____________ */

int main()
{
   float unit;
   scanf("%f", &unit);

   if (unit <= 200)
      printf("Charge: %0.2f", 1.0 * unit);
   else if (unit > 200 && unit <= 300)
      printf("Charge: %0.2f", 200.0 + (unit - 200.0) * 1.5);
   else
      printf("Charge: %0.2f", 350.0 + (unit - 300) * 2.0);

   return 0;
}