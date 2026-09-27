#include <stdio.h>
void sum_of_the_digit(int num, int sum);
int main(){
   int num,sum = 0;
   printf("Enter the value\n");
   scanf("%d", &num); 
   sum_of_the_digit(num, sum); //121
}

void sum_of_the_digit(int num, int sum){
    //num
    // printf("%d\n", num);
    if(num>0){
        int re;
        re=num%10;
        sum=sum+re;
        sum_of_the_digit(num/10, sum);
        
    } 
    else{
        printf("%d", sum);
    }
    
        // printf("%d\n", num/10);
        
              
} 