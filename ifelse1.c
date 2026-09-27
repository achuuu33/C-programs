#include<stdio.h>
int main()
{
    char name;
    int s1,s2,s3,s4,s5,mark;
    printf("Enter stu name:");
    scanf("%s",&name);
    printf("Enter the mark:\n");
    scanf("%d",&mark);
    if(mark>85){
        printf("grade A");
    }
    else if(mark>65 && mark<85){
        printf("grade B");
    }
    else if(mark>50 && mark<65){
        printf("grade C");
    }
    else{
        printf("grade D");
    }
}