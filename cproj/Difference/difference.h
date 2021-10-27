//test function that returns the difference beetwween the largest and smallest values in an array of doubles
// ensure function work for all double variables.
double difference(double *array, int size)
{
    double max = array[0];
    double min = array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    return max - min;
}