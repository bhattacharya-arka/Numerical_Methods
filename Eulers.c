#include <stdio.h>
float func(float x, float y)
{
    return (x + y + (x * y));
}
int main()
{
    float x0, y0, n, h, yn;
    int i;
    printf("Enter the initial value of x:-");
    scanf("%f", &x0);
    printf("Enter the initial value of y:-");
    scanf("%f", &y0);
    printf("Enter the value of h:-");
    scanf("%f", &h);
    printf("Enter the value of n:-");
    scanf("%f", &n);
    for (i = 0; i < n; i++)
    {
        yn = y0 + (h * func((x0 + i * h), y0));
        y0 = yn;
    }
    printf("The answer is:-%f", yn);
    return 0;
}