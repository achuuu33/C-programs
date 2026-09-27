#include<stdio.h>
void main()
{
    int arr[5]={1,3,4,5};
    int n=5,sum=0,i;
    for(i=0;i<4;i++)
    {
        sum=sum+arr[i];
    }
    int originalarray=n*(n+1)/2;
    printf("Missing element =%d",originalarray-sum);
}









