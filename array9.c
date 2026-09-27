#include<stdio.h>
void largest_element(int arr[],int i,int *largest,int *secondlargest);
void main()
{
    int arr[5],i,largest,secondlargest,element;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    largest=arr[0];
    secondlargest=arr[0];
    largest_element(arr,0,&largest,&secondlargest);
    printf("%d %d",largest,secondlargest);
}
void largest_element(int arr[],int i,int *largest,int *secondlargest)
{
    if(i==5)
    {
        return;
    }
    int element=arr[i];
        if(element>*largest)
        {
            *secondlargest=*largest;
            *largest=element; 
            
        }
        if(element<*largest && element>*secondlargest)
        {
            *secondlargest=element;
        }
        largest_element(arr,i+1,largest,secondlargest);

}