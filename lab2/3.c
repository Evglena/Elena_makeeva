#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
        case 1:
            printf("Vy vveli \"1\"\n");

        case 2:
            printf("Vy vveli \"2\"\n");

        default:
            printf("Vy vveli ne \"1\" i ne \"2\"");

    }
    return 0;
}