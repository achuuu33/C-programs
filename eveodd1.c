#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    char*result[]={"even","odd"};
    printf("%s",result[num%2]);
}