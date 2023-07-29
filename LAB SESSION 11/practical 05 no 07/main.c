#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,i;
    int a=0,b=1,c;
    printf("Fibonacci sequence:\n");

    for(i=0;i<n;i++){
        if(i<=1)
            c=i;
        else{
            c=a+b;
            a=b;
            b=c;
        }
    }
    printf("%d",c);
    return 0;
}
