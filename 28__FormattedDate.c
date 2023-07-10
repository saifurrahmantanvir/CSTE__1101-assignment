#include <stdio.h>

/* _____ _________ _____________ _____________
28. Input date, month and year from the user, and using switch case, display in worded format.

 e.g.
 input: d=16, m=7, y=1992
 output: 16th July, 1992
_____ _________ _____________ _____________ */

int main()
{
   int day, month, year;
   scanf("%d %d %d", &day, &month, &year);

   char *sup;

   switch (day)
   {
   case 1:
      sup = "st";
      break;
   case 2:
      sup = "nd";
      break;
   case 3:
      sup = "rd";
      break;

   default:
      sup = "th";
      break;
   }

   switch (month)
   {
   case 1:
      printf("%d%s January, %d", day, sup, year);
      break;
   case 2:
      printf("%d%s February, %d", day, sup, year);
      break;
   case 3:
      printf("%d%s March, %d", day, sup, year);
      break;
   case 4:
      printf("%d%s April, %d", day, sup, year);
      break;
   case 5:
      printf("%d%s May, %d", day, sup, year);
      break;
   case 6:
      printf("%d%s June, %d", day, sup, year);
      break;
   case 7:
      printf("%d%s July, %d", day, sup, year);
      break;
   case 8:
      printf("%d%s August, %d", day, sup, year);
      break;
   case 9:
      printf("%d%s Septembar, %d", day, sup, year);
      break;
   case 10:
      printf("%d%s Octobar, %d", day, sup, year);
      break;
   case 11:
      printf("%d%s November, %d", day, sup, year);
      break;
   case 12:
      printf("%d%s Decembar, %d", day, sup, year);
      break;

   default:
      break;
   }

   return 0;
}