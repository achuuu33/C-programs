#include<stdio.h>
void main()
{
    int arr[3][3],M_sum=0,S_sum=0,i,j;
    printf("Enter elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        M_sum=M_sum+arr[i][i];
        S_sum=S_sum+arr[i][3-1-i];
    }
    printf("Main diagonal sum is %d\n",M_sum);
    printf("Secondary diagonal sum is %d",S_sum);
}