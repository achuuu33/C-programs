#include<stdio.h>
int main()
{
    int num,rem,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    /**
     *  input num = 121
     *  logic variable num%9 == 0 then the sum of num is 9
     *   otherwise the sum of num num%9
     *  */    

     if(num%9 ==0){
        printf("9");
     }else{
        printf("%d", num%9);
     }
    
}
    

