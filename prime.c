#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter a nmber:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        count++;
        }
    }
    
        if(count==2)
        {
            printf("%d is prime",num);
        }
        else{
            printf("%d is not prime",num);
        }


}