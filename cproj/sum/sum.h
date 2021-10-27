// test function that sets each element in an array to sum of the corresponding elements in two other arrays
// ensure function work for all double variables.
void sum(double *array1, double *array2, double *array3, int size)
{
    for(int i = 0; i < size; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    
}