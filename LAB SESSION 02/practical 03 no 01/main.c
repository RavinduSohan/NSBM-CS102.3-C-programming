#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2;

   printf("Enter number 1:");
   scanf("%d",&num1);
   printf("Enter number 2:");
   scanf("%d",&num2);

   if(num1>num2){
    printf("The highest number is %d\n",num1);
   }
    else if(num2>num1){
    printf("The highest number is %d\n",num2);
   }
    else{
     printf("Number 1 and number 2 both are equal\n");
     }

   return 0;
}
