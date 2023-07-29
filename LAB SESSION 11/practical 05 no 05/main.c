#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,revnum,rem;

    printf("Enter a positive integer:");
    scanf("%d",&num);

    do{
        rem=num%10;
        revnum=revnum*10+rem;
        num/=10;
    }while(num!=0);

    printf("Reversed number:%d\n",revnum);
    return 0;
}
