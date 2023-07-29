#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem,sum=0;

    printf("Enter a number:");
    scanf("%d",&num);

    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum of digits:%d\n",sum);
    return 0;
}
