#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>=10)
    {
    num=num/10;
    }
    printf("First digit of the number is %d",num);
}