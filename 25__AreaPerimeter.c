#include <stdio.h>
#include <math.h>

/* _____ _________ _____________ _____________
25. Write 2 different C functions to compute area and perimeter of a triangle whose sides a, b, and c are given by user as inputs.

 Formula to compute perimeter = a + b + c
 Formula to compute area = [s(s-a)(s-b)(s-c)]0.5
 Where s = 0.5 * (a+b+c)

 Function prototypes are:
 double perim(double a, double b, double c)
 double area(double a, double b, double c)
 Your program should read the input data and print the output data via separate functions. The
prototypes are:
 double read_input()
 double print_value(double val)

 use math.h and compile with -lm flag
_____ _________ _____________ _____________ */

double perim(double a, double b, double c);
double area(double a, double b, double c);

double print_value(char *title, double val);
double read_input();

int main()
{
   read_input();

   return 0;
}

double print_value(char *title, double val)
{
   printf("%s \t%.2lf\n", title, val);
}

double perim(double a, double b, double c)
{
   return a + b + c;
}

double area(double a, double b, double c)
{
   double s = 0.5 * (a + b + c);

   return sqrt(s * (s - a) * (s - b) * (s - c));
}

double read_input()
{
   double a, b, c;
   scanf("%lf %lf %lf", &a, &b, &c);

   double _perim = perim(a, b, c);

   char *title = "PERIMETER - ";
   print_value(title, _perim);

   double _area = area(a, b, c);

   title = "AREA - ";
   print_value(title, _area);
}