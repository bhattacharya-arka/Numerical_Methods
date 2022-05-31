#include <stdio.h>
#include <math.h>
#define MAX 100
int main()
{
    int n, i, j, fact = 1;
    float a[MAX][MAX + 1], u, u1, y, x;
    printf("Enter the number of values you want to enter :-");
    scanf("%d", &n);
    printf("Enter the values of X and Y\n");
    printf("X Y\n");
    // Taking X and Y input.
    for (i = 0; i < n; i++)
        scanf("%f %f", &a[i][0], &a[i][1]);
    printf("Enter the value of X for which Y is to be found:-");
    scanf("%f", &x);
    // Creating Difference Table
    for (j = 2; j < n + 1; j++)
    {
        for (i = 0; i < n - j + 1; i++)
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];
    }
    // Finding u
    u = (x - a[n - 1][0]) / (a[1][0] - a[0][0]);
    y = a[n - 1][1];
    u1 = u;
    fact = 1;
    j = 2; // corresponds to column number
    // Applying Formula
    for (i = n - 2; i >= 0; i--)
    {
        y = y + (u1 * a[i][j]) / fact; // final answer
        fact *= j;
        u1 = u1 * (u + (i - 1));
        j++;
    }
    printf("For the given value of x = %f, the corresponding y = %f.", x, y);
    return 0;
}
