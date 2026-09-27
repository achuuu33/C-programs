#include<stdio.h>
int main()
{
    char name;
    int sub1,sub2,sub3,sub4,sub5,total;
    float percentage;
    printf("Enter the stu name:\n");
    scanf("%s",&name);
    printf("Enter the marks of 5 subject:\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    printf("total mark is %d \n",total);
    percentage=(total/500.0)*100;
    printf("Marks in percentage %f",percentage);

}