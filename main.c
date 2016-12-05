#include <stdio.h>
#include <math.h>

int main()
{
    char r;
    double G,F,Y,a,x1,x2;
    const double pi=3.14;
    printf("Введите x: \n");
    scanf ("%lf", &x);

    printf("Введите a: \n");
    scanf ("%lf", &a);

    printf("Введите букву выражения, которое xотите вычислить - G,F,Y) \n");
    scanf ("%s", &r);

    switch (r){
        case 'G':
            if ((45 * (pow(a, 2)) - 29 * a * x + 4 * (pow(x, 2))) !=0)
                G= -(16 * (( pow(a,2) + 24 * a * x - 27 * (pow (x, 2))))) / (45 * (pow(a, 2)) - 29 * a * x + 4 * (pow(x, 2)));
            printf("G = %lf \n", G);
            break;

        case 'F':
            F=-(atan(pi * (10 * (a * a) + 13 * a * x -30 * (x * x))));
            printf("F = %lf \n", F);
            break;

        case 'Y':
            Y=(log(2 * pow(a, 2) + 19 * a * x + 9 * pow(x, 2) + 1))/log(10);
            printf("Y = %lf \n", Y);
            break;
        default: printf("ne veren vvod function \n");
    }

    return 0;
}