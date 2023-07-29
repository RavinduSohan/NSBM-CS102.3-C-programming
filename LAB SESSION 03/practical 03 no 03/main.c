#include <stdio.h>
#include <stdlib.h>

int main()
{
   char empname[30];
   float bsal,nsal,inc;

   printf("Enter the employee name:");
   scanf("%s",&empname);
   printf("enter basic salary:");
   scanf("%f",&bsal);

   if(bsal<5000){
    inc=0.05*bsal;
   }
   else if(bsal>=5000&& bsal<10000){
    inc=0.10*bsal;
   }
   else{
    inc=0.15*bsal;

   }
   nsal=bsal+inc;
   printf("Employee Name:%s\n",empname);
   printf("New salary:%.2f\n",nsal);

    return 0;
}
