#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("1.Square\n");
    printf("2.Cube\n");
    printf("3.Even/odd\n");
    printf("4.Exit\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter a number:\n");
        scanf("%d",&a);
        printf("Square of the number is %d",a*a);
        break;
        case 2:
        printf("Enter a number:\n");
        scanf("%d",&a);
        printf("Cube of the number is %d",a*a*a);
        break;
        case 3:
        printf("Enter a number:\n");
        scanf("%d",&a);
        (a%2==0)? printf("even"): printf("odd");
        break;
        case 4:
        printf("exiting");
        break;
        default:
        printf("invalid");


    }
}