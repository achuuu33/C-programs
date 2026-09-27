#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    printf("Enter a string\n");
    scanf("%s",str);
    int len,i;
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
 

}