#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,num3,largest,smallest;

   printf("Enter number 1:\n");
   scanf("%d",&num1);
   printf("Enter number 2:\n");
   scanf("%d",&num2);
   printf("Enter number 3:\n");
   scanf("%d",&num3);

   largest=num1;
   if(num2>largest){
    largest=num2;
   }
   else if(num3>largest){
    largest=num3;
   }

   smallest=num1;
   if(num2<smallest){
    smallest=num2;
   }
   else if(num3<smallest){
    smallest=num3;
   }
   printf("The largest number is %d\n",largest);
   printf("The smallest number is %d\n",smallest);

    return 0;
}
