#include<stdio.h>
void main()
{
    int i,j,arr[10]={10,20,10,30,20,40};
    int n=6;
    printf("Duplicate elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[i]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}