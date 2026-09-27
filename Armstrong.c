#include<stdio.h>
int main()
{
    int num,rem,sum=0,cube,original;
    printf("Enter a num:\n");
    scanf("%d",&num);
    original = num;
    while(num!=0)
    {
    rem=num%10;
    cube=rem*rem*rem;
    sum+=cube;
    num=num/10;
    }
    if(sum==original)
    {
        printf("Given num is armstrong");
    }
    else
    {
        printf("Given num is not armstrong");
    }

}