#include<stdio.h>
int main()
{
    int num,re,r=0,original;
    printf("Enter a num\n");
    scanf("%d",&num);
    original=num;
    while(num>0)
    {
        re=num%10; // 1
        r=r*10+re; //321
        num=num/10; //1

    }
    if(r==original)
    { 
      printf("palindrome");

    }
    else{
        printf("is not palindrome");
    }
    return 0;

}