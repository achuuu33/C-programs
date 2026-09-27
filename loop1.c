#include<stdio.h>
int main()
{
    int num,re,r=0;
    printf("Enter a num\n");
    scanf("%d",&num);
    while(num>0)
    {
        re=num%10; // 2
        r=r*10+re; //5
        num=num/10; //1

    }
    printf("Reversed num=%d",r);
    return 0;

}