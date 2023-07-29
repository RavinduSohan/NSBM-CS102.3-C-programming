#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;

    printf("Enter a number:");
    scanf("%d",&num);

    for(i=2;i*i<=num;i++)
    {
        if(num%i==0){
            printf("not a prime number");
        }else{
        printf("prime number");
        }

    }
    return 0;
}
