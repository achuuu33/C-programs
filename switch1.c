#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
      printf("Enter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter two numbers:");
       scanf("%d%d",&a,&b);
        printf("addition of a and b is %d",a+b);
        break;
        case 2:
        printf("Enter two numbers:");
         scanf("%d%d",&a,&b);
         printf("subtraction of a and b is %d",a-b);
         break;
         case 3:
         printf("Enter two numbers:");
         scanf("%d%d",&a,&b);
         printf("multiplication of a and b is %d",a*b);
         break;
         case 4:
         printf("Enter two numbers:");
         scanf("%d%d",&a,&b);
         printf("division of a and b is %d",a/b);
         break;
        default:
        printf("invalid");
    }
}