#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10];
    int total=0;
    float avg;

    printf("Enter 10 marks:\n");

    for(int i=0;i<10;i++){
        printf("Enter mark %d:",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    avg=total/10;

    printf("Total marks:%d\n",total);
    printf("Average marks:%.2f\n",avg);

    if(avg<50){
        printf("Fail!\n");
    }else{
        printf("Pass!\n");
    }


    return 0;
}
