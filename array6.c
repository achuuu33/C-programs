#include<stdio.h>
void main()
{
    int n1,n2,i,j,key;
    printf("Enter how many rows and columns:");
    scanf("%d%d",&n1,&n2);
    int arr[n1][n2];
    printf("Enter array elements:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter a value to search\n");
    scanf("%d",&key);
    int found=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr[i][j]==key){
                printf("Element is found at %d row and %d column",i,j);
                found=1;
            }

        }
    }
    if(found==0)
    {
        printf("Element not found");

    }
}