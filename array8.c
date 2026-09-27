#include<stdio.h>
void main()
{
    int arr[5]={10,50,20,40,30};
    int largest=arr[0],secondlargest=arr[0];
    for(int i=0;i<5;i++)
    {
        int element=arr[i];
        if(element>largest)
        {
            secondlargest=largest;
            largest=element;
            
        }
        if(element<largest && element>secondlargest)
        {
            secondlargest=element;
        }
        
    }
    printf("%d %d",largest,secondlargest);
  
}