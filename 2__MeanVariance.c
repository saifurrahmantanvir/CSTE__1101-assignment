#include <stdio.h>
#include <math.h>

/* _____ _________ _____________ _____________
2. Write a program in C that takes as input a set of numbers and calculates the mean, variance and standard deviation. (variance is defined as Σ [(xi - x̅)^2]/n - 1 , where xi =i th number in the set, x̅ is the mean and n=cardinality of the set ; standard deviation is the square root of variance).
_____ _________ _____________ _____________ */

int main()
{
   double mean = 0, var = 0, std_dev, xi;

   int n;

   printf("n = ");
   scanf("%d", &n);

   xi -= 1;

   double arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%lf", &arr[i]);
      mean += arr[i];
   }

   mean = mean / n;

   for (int i = 0; i < n; i++)
      var += (arr[i] - mean) * (arr[i] - mean);

   var = var / (n - 1);

   std_dev = sqrt(var);

   printf("Mean = %.2lf\n"
          "Variance = %.2lf\n"
          "Standard Deviation = %.2lf",
          mean, var, std_dev);

   return 0;
}