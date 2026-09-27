#include<stdio.h>
int main()
{
    int Km,Meter,Cmeter;
    printf("Enter the kilometre:");
    scanf("%d",&Km);
    Meter=Km*1000;
    Cmeter=Km*100000;
    printf("kilometres into meter is %d \n",Meter);
    printf("kilometres into centimetre is %d \n",Cmeter);
}