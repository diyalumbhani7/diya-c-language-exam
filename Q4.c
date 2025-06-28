// write a c program to find square of each element of an 1D array using pointer.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:");
    scanf("%d",&size);

    char arr[size];
    int *ptr;
    *ptr= &arr;
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
   
    printf("Square of an elements are:");
    for(int i=1; i<=size; i++)
    {
        printf("\n %d",((*ptr))*((*ptr)));
    }

    return 0;
}