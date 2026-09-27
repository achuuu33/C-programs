#include<stdio.h>
int reverse_array(int a[],int i,int end);
int main()
{
    int i,a[5];
    int n=5;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    reverse_array(a,0,n-1);
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}
    int reverse_array(int a[] ,int i,int end)
    {
        if(i>=end)
        {
            return 0;
        }
        int temp;
        temp=a[i];
        a[i]=a[end];
        a[end]=temp;
        reverse_array(a,i+1,end-1);
   }

