#include<stdio.h>
#include<string.h>
void main()
{
    char arr[10];
    printf("Enter a string:\n");
    scanf("%s",arr);
    int len,i,count=0;
    len=strlen(arr);
    for(i=0;i<len;i++)
    {
        if(arr[i]==arr[len-i-1])
        count++;
    }
    if(count==len){
        printf("Is a palindrome");
    }
    else{
        printf("Is not a palindrome");
    }
}