#include <stdio.h>
#include <stdlib.h>

int main()
{
   const double PI=3.14159;
   double r,d,c,a;

   printf("Enter the radius of the circle:");
   scanf("%lf",&r);

   d=2*r;
   c=2*PI*r;
   a=PI*r*r;

   printf("Diameter:%.2f\n",d);
   printf("Circumference:%.2f\n",c);
   printf("Area:%.2f\n",a);

    return 0;
}
