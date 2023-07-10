#include <stdio.h>

/* _____ _________ _____________ _____________
13. Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take the appropriate required inputs. Then print the result. The input should be taken in the main function and calculations for every solid should be done in a separate function by passing appropriate arguments.

 Example:
 If the user chooses the option for cube, only one input is required i.e., the side. The volume is then calculated and printed.

 If the user chooses the option for cuboid, only three inputs are required i.e., length, breadth and height. The volume is then calculated and printed.
_____ _________ _____________ _____________ */

void cube(float a);
void cuboid(float h, float w, float l);
void sphere(float r);
void cylinder(float r, float h);
void cone(float r, float h);

int main()
{
   int n;
   printf("Select shape to calculate volume :\n");
   printf("1.Cube\n"
          "2.Cuboid\n"
          "3.Sphere\n"
          "4.Cylinder\n"
          "5.Cone\n");
   printf("Select : ");
   scanf("%d", &n);

   switch (n)
   {
   case 1:
      float a;
      printf("Enter side : ");
      scanf("%f", &a);

      cube(a);

      break;
   case 2:
      float h, w, l;
      printf("Enter height : ");
      scanf("%f", &h);
      printf("Enter width : ");
      scanf("%f", &w);
      printf("Enter long : ");
      scanf("%f", &l);

      cuboid(h, w, l);

      break;
   case 3:
      float r;
      printf("Enter radius : ");
      scanf("%f", &r);

      sphere(r);

      break;
   case 4:
      float r, h;
      printf("Enter height : ");
      scanf("%f", &h);
      printf("Enter radius : ");
      scanf("%f", &r);

      cylinder(r, h);

      break;
   case 5:
      float r, h;
      printf("Enter height : ");
      scanf("%f", &h);
      printf("Enter radius : ");
      scanf("%f", &r);

      cone(r, h);

      break;
   default:
      printf("Not a valid input!!");
      break;
   }

   return 0;
}

// cube.....
void cube(float a)
{
   printf("Volume of Cube : %.2f", a * a * a);
}

// cuboid
void cuboid(float h, float w, float l)
{
   printf("Volume of Cuboid : %.2f", l * w * h);
}

// sphere
void sphere(float r)
{
   printf("Volume of Sphere : %.2f", (4 * 3.1416 * r * r * r) / 3);
}

// cylinder
void cylinder(float r, float h)
{
   printf("Volume of Cylinder : %.2f", 3.1416 * r * r * h);
}

// cone
void cone(float r, float h)
{
   printf("Volume of Cone : %.2f", (3.1416 * r * r * h) / 3);
}