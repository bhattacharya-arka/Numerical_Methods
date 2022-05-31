#include <stdio.h>
int main()
{
    float X[100], Y[100], x, y, term;
    int i, j, n;
    printf("Enter the number of terms you want to enter:-");
    scanf("%d", &n);
    printf("Enter the X and Y values, respectively.\n");
    for (i = 0; i < n; i++)
        scanf("%f %f", &X[i], &Y[i]);
    printf("Array elements of X are:-\n");
    for (i = 0; i < n; i++)
        printf("X[%d] = %.2f ", i, X[i]);
    printf("\nArray elements of Y are:-\n");
    for (i = 0; i < n; i++)
        printf("Y[%d] = %.2f ", i, Y[i]);
    printf("\nEnter the value of X for which corresponding Y is needed:-");
    scanf("%f", &x);
    // Applying the formula
    for (i = 0; i < n; i++)
    {
        term = 1;
        for (j = 0; j < n; j++)
        {
            if (i != j)
                term = term * ((x - X[j]) / (X[i] - X[j]));
        }
        y += (term * Y[i]);
    }
    printf("Value of Y for corresponding X = %f, is %.3f.", x, y);
    return 0;
}