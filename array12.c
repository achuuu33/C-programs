#include<stdio.h>
void main()
{
    int arr[10],nzero[10],zero[10],i,nz=0,z=0,total;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            nzero[nz]=arr[i];
            nz++;
        }
        else if(arr[i]==0)
        {
            zero[z]=arr[i];
            z++;
        }
    }
    for(i=0;i<nz;i++)
    {
        arr[i]=nzero[i];
    }
    for(i=0;i<z;i++)
    {
        arr[nz+i]=zero[i];
    }
    total=nz+z;
    for(i=0;i<total;i++)
    {
         printf("%d ",arr[i]);

    }
}