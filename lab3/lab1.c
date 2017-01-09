#include <stdio.h>
#include <math.h>

int main()
{
    double G,F,Y,a,x;
    const double PI=3.14;
    printf("Введите x \n");
    scanf("%lf",&x);

    printf("Введите a \n");
    scanf("%lf",&a);

    G = - (16 * (( pow(a,2) + 24 * a * x - 27 * (pow (x, 2))))) / (45 * (pow(a, 2)) - 29 * a * x + 4 * (pow(x, 2)));
    F = - (atan(PI * (10 * (a * a) + 3 * a * x -30 * (x * x))));
    Y = - (log(2 * pow(a, 2) + 19 * a * x + 9 * pow(x, 2) + 1))/log(10);

    printf("G = %lf \n", G);
    printf("F = %lf \n", F);
    printf("Y = %lf \n", Y);

    return 0;

}