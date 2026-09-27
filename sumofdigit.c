#include<stdio.h>
void sum_of_the_digit(int num);
int main()
{
      

    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    sum_of_the_digit(num);
    // printf("sum of digit=%d\n",sum);
   
}


 void sum_of_the_digit(int num){
   int re,sum=0;
    while(num>0){
        re=num%10;
        sum=sum+re;
        num=num/10;
    }
    if(sum > 9){
        sum_of_the_digit(sum);
    }else{
         printf("sum of digit=%d\n",sum);
    }
}