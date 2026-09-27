#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;;i++)
    {
        if(i%num1==0 && i%num2==0){
            printf("LCM is %d",i);
            break;
        }
    }
}