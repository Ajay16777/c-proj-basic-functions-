#include<stdio.h>
#include<stdlib.h>
#include"sum.h"

int main(){
    //enter a double array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    double *arr = malloc(n*sizeof(double));
    printf("Enter the elements of the array1: ");
    for(int i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    //enter a double array
    
    
    double *arr2 = malloc(n*sizeof(double));
    printf("Enter the elements of the array2: ");
    for(int i=0; i<n; i++){
        scanf("%lf", &arr2[i]);
    }

    //make a array of the sum of the two arrays
    double *arr3 = malloc(n*sizeof(double));
   sum(arr, arr2, arr3, n);
   //print arr3
    printf("The sum of the two arrays is: ");
    for(int i=0; i<n; i++){
        printf("%lf ", arr3[i]);
    }
    

    return 0;
}