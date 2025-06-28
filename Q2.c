// create a c program to find the largest element in an 1D array.
#include<stdio.h>
int main()
{
    int size,max=0; 
    printf("Enter the size of an array:");
    scanf("%d",&size);
    char arr[size];

    for(int i=0; i<size; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];

    printf("The largest element of an array is:");
    for(int i=0; i<size; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            printf("%d",arr[i]);
             
        }
    }
    return 0;
}