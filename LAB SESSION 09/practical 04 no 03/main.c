#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    int choice;
    float r,c,a,v;

    printf("1.Calculate the circumference of a circle\n");
    printf("2.Calculate the area of a circle\n");
    printf("3.Calculate the volume of a sphere\n");
    printf("Enter your choice(1-3):\n");
    scanf("%d",&choice);

    printf("Enter the radius:");
    scanf("%f",&r);

    switch(choice){
  case 1:
    if (r>=0){
            c=2*PI*r;
        printf("Circumference of the circle:%.2f\n",c);
    }else{
        printf("Enter a valid radius value\n");
    }
    break;
  case 2:
    if (r>=0){
        a=PI*r*r;
        printf("Area of the circle:%.2f\n",a);
    }else{
      printf("Enter a valid radius value\n");
    }break;
  case 3:
    if(r>=0)
    {
     v=(4.0/3.0)*PI*r*r*r;
     printf("Volume of the sphere:%.2f\n",v);
    }else
    {
        printf("Enter a valid radius value\n");
    }break;
  default:
    printf("Invalid choice\n");break;
    }

    return 0;
}
