#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float num1,num2,result;

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);

    switch(choice){
      case 1:result=num1+num2;
      printf("Result:%.2f\n",result);break;
      case 2:result=num1-num2;
      printf("Result:%.2f\n",result);break;
      case 3:
        if(num2!=0)
        {
            result=num1/num2;
            printf("Result:%d\n",result);
        }else{
            printf("Can't divide by 0\n");break;
        }
        case 4:result=num1*num2;
        printf("Result:%.2f\n",result);break;
        default:
            printf("Invalid choice\n");break;
          }
    return 0;
}
