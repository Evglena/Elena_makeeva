#include <stdio.h> /*позволяет выводить текст на экран и читать его с клавиатуры*/
#include <math.h>
int main() {
    double G, F, Y, a, x1, x2, b, min_value, max_value ;
    int  j;
    char r;
    int pr = 1;

    nachalo:

    printf("%s", "Введите  x1: "); /* s- символ */
    scanf("%lf", &x1); /*сканирует значение с клавиатуры */

    printf("%s", "Введите x2 ");
    scanf("%lf", &x2);

    printf("%s", "Введите a: ");
    scanf("%lf", &a);

    printf("%s", "Введите параметр шага  ");
    scanf("%lf", &b);


    double mas[100];
    j = 0;
    max_value = 0;
    min_value = 0;

    printf("Введите букву выражения, которое хотите вычислить - G,F,Y) \n");
    scanf ("%s", &r);

    switch (r) {
        case 'G':
            while (x1 <= x2) {
                if ((45 * (pow(a, 2)) - 29 * a * x1 + 4 * (pow(x1, 2))) >=0.000001 && (45 * (pow(a, 2)) - 29 * a * x1 + 4 * (pow(x1, 2)) <= -0.000001))
                {
                    G = -(16 * ((pow(a, 2) + 24 * a * x1 - 27 * (pow(x1, 2))))) /
                        (45 * (pow(a, 2)) - 29 * a * x1 + 4 * (pow(x1, 2)));
                    printf("X = %.3lf \t| Y = %.3lf\n", x1, G);
                    x1 = x1 + b;
                    mas[j] = G;
                    if (j <= 0.000001 && j >= -0.000001) { /*ибо нельзя сравнивать с нулём */
                        max_value = G;
                        min_value = G;
                    }
                    if (G > max_value) max_value = mas[j];
                    if (G < min_value) min_value = mas[j];
                    j += 1;
                } else {
                    printf("На ноль делить нельзя :)");
                    return 0;
                }
            }
            printf(" Максимальное значение  = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
            break;

        case 'F':
            while (x1 <= x2) {
                F = -(atan(10 * (a * a) + 13 * a * x1 - 30 * (x1 * x1)));
                printf("X = %.3lf \t| Y = %.3lf\n", x1, F);
                x1 = x1 + b;
                mas[j] = F;
                if (j <= 0.000001 && j >= -0.000001) { /*ибо нельзя сравнивать с нулём */
                    max_value = F;
                    min_value = F;
                }
                if (F > max_value) max_value = mas[j];
                if (F < min_value) min_value = mas[j];
                j += 1;
            }
    printf(" Максимальное значение  = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
    break;

        case 'Y':
            while (x1 <= x2) {
                Y = (log(2 * pow(a, 2) + 19 * a * x1 + 9 * pow(x1, 2) + 1)) / log(10);
                printf("X = %.3lf \t| Y = %.3lf\n", x1, Y);
                x1 = x1 + b;
                mas[j] = Y;
                if (j <= 0.000001 && j >= -0.000001) { /*ибо нельзя сравнивать с нулём */
                    max_value = Y;
                    min_value = Y;
                }
                if (Y > max_value) max_value = mas[j];
                if (Y < min_value) min_value = mas[j];
                j += 1;
            }
    printf(" Максимальное значение  = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
    break;

        default:
             printf("ne verno vvedena function \n");

    }
    printf("Вычислим еще раз? (1-да) \n");
    scanf("%i", &pr);
    if (pr == 1)
        goto nachalo;
    return 0;
}
