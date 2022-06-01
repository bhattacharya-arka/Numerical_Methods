#include <stdio.h>
double error()
{
    double e = 0.001;
    return e;
}
double func(double x)
{
    return ((x * x * x) - x - 1);
}
int main()
{
    double a, b;
    printf("Enter the values of a and b :-");
    scanf("%lf %lf", &a, &b);
    bisection(a, b);
    return 0;
}
void bisection(double a, double b)
{
    double m = 0.0;
    if (func(a) * func(b) >= 0)
        printf("You have not choosen the values of a and b correctly.\n");
    else
    {
        while ((b - a) >= error())
        {
            m = (a + b) / 2;
            if (func(a) * func(m) < 0)
                b = m;
            else
                a = m;
        }
        printf("The value of the root is :- %lf", m);
    }
}