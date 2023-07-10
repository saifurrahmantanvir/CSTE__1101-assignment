#include <stdio.h>

/* _____ _________ _____________ _____________
17. Write a C program to accept the basic salary of an employee from the user. Calculate the gross salary on the following basis:

 Basic              HRA       DA
 1 - 4000           10%       50%
 4001 - 8000        20%       60%
 8001 - 12000       25%       70%
 12000 and above    30%       80%
_____ _________ _____________ _____________ */

int main()
{
   double salary;

   printf("Enter Basic Salary : ");
   scanf("%lf", &salary);

   if (salary >= 1 && salary <= 4000)
      salary += salary * (0.1 + 0.5);

   else if (salary >= 4001 && salary <= 8000)
      salary += salary * (0.2 + 0.6);

   else if (salary >= 8001 && salary <= 12000)
      salary += salary * (0.25 + 0.7);

   else
      salary += salary * (0.3 + 0.8);

   printf("Gross Salary is %.2lf", salary);

   return 0;
}