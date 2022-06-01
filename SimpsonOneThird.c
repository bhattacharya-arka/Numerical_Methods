#include <stdio.h>
float func(float x)
{
    return 1 / (1 + (x * x));
}
int main()
{
    float high, low, h, y[100], x, sum = 0.0, res1 = 0.0, res2 = 0.0;
    int i, n;
    printf("Enter the lower and upper limits:-");
    scanf("%f %f", &low, &high);
    printf("Enter the no of intervals:-");
    scanf("%d", &n);
    h = (high - low) / n;
    printf("The values of x are:-\n");
    for (i = 0; i <= n; i++)
    {
        x = low + i * h;
        printf("%.2f ,", x);
        y[i] = func(x);
    }
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            res2 += y[i];
        else if (i % 2 != 0)
            res1 += y[i];
    }
    sum = h / 3 * ((y[0] + y[n]) + 4 * res1 + 2 * res2);
    printf("\nThe sum = %f", sum);
    return 0;
}