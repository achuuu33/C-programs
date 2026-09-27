#include<stdio.h>
void main()
{
    int arr[5];
    printf("Enter elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0],smallest=arr[0];
    for(int j=0;j<5;j++)
    {
        if(arr[j]>largest)
         largest=arr[j];
    
    if(arr[j]<smallest)
        smallest=arr[j];
    }
    printf("Largest element is %d\n",largest);
    printf("Smallest element is %d",smallest);


}