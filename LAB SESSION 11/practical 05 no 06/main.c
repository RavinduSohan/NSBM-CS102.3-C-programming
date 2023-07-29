#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exp;
    long long result=1;

    printf("Enter the base number:");
    scanf("%d",&base);

    printf("Enter the exponent:");
    scanf("%d",&exp);

    while(exp!=0){
        result*=base;
        --exp;
    }
    printf("Result:%llu\n",result);
    return 0;
}
