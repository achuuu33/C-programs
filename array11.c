#include<stdio.h>
void sort_array(int arr[],int n,int i,int j);
void main()
{
    int arr[5],i,j;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort_array(arr,5,0,1);
    printf("Descending order\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sort_array(int arr[],int n,int i,int j)
{
    if(i>=n-1)
    {
        return;
    }
    if(j>=n)
    {
        sort_array(arr,n,i+1,i+2);
        return;

    }
    if(arr[i]<arr[j])
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    sort_array(arr,n,i,j+1);

}