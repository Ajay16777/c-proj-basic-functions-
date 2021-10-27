void largerOf(double *a, double *b)
{
    if(*a > *b)
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }
}