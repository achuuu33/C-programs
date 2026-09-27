#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>=10)
    {
        num=num%10;

    }
    printf("Last digit of the number id %d",num);
}