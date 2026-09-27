#include<stdio.h>
int main()
{
 int arr[5];
 printf("Enter elements\n");
 for(int i=0;i<=4;i++)
 {
 scanf("%d",&arr[i]);

 }
 printf("duplicate element is:\n");
 for(int j=0;j<=4;j++)
 {
    for(int k=j+1;k<=4;k++)
    {
       if( arr[j]==arr[k])
       {
        printf("%d\n",arr[j]);
       }
        
    }

 }
 return 0;

}
