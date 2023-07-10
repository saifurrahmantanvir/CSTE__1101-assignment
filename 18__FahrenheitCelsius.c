#include <stdio.h>

/* _____ _________ _____________ _____________
18. Write a C function celsius() to convert degrees Fahrenheit to degrees Celsius. (The conversion formula is °C = 5/9 * (°F - 32).) Use it to print a Fahrenheit-to-Centigrade table for -40 to 220 degrees Fahrenheit, in increments of 10 degrees. (Remember that %f is the printf format to use for printing floating-point numbers. Also, remember that the integer expression 5/9 gives 0, so you won't want to use integer division.)
_____ _________ _____________ _____________ */

float celsius(float F)
{
   float C = (float)5 / 9 * (F - 32);

   return C;
}

int main()
{
   for (float i = -40; i <= 220; i = i + 10)
   {
      printf("Celsius %.2f in Fahrenheit is %.2f\n", i, celsius(i));
   }

   return 0;
}