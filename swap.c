#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;
    b=20;
    c=a;
    a=b;
    b=c;
    printf("Swapped value of a is a=%d and b is b=%d",a,b);
}