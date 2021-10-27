#include<stdio.h>
#include<stdlib.h>
#include"difference.h"

int main()
{
    //enter a double array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    double *arr = (double*)malloc(n*sizeof(double));
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }

    printf("\nThe difference between Highest and lowest value of the array is:\n");
    printf("%f\n", difference(arr, n));
    return 0;
}