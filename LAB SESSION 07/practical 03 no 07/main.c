#include <stdio.h>
#include <stdlib.h>

int main()
{
   double bsal,addallow=0,msales,bper,bam,grem;
   int yearsos;
   char city;

   printf("Enter the basic salary:");
   scanf("%lf",&bsal);

   printf("Enter the number of years of service:");
   scanf("%d",&yearsos);

   printf("Enter the city(c for colombo,any character for other):");
   scanf("%c",&city);

   printf("Enter the monthly sales:");
   scanf("%lf",&msales);

   if(yearsos>5)
   {
       addallow=0.1*bsal;
   }
   if(city=='c');
   {
       addallow+=2500;
   }
   if(msales>=0&&msales<=25000)
   {
       bper=0.1;
   }
   else if(msales>25000&&msales<=50000)
   {
       bper=0.12;
   }
   else if(msales>50000)
   {
       bper=0.15;
   }
   bam=bper*msales;
   grem=bsal+addallow+bam;

   printf("Gross monthly remuneration:%.2f\n",grem);

    return 0;
}
