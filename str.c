#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],temp;
    int i;
    printf("Enter a string:");
    fgets(a,50,stdin);
    i=0;
    int len=strlen(a);
    while (i<len/2)
    {
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
        i++;
    }
    printf("Reversed string is: %s",a);

}