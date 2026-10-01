#include <stdio.h>
#include <math.h>
int main(void)
{
    double V, g, vy, vx, P, ar, xt, yt, T, L;
    int a;
    printf("Начальная скорость в м/с: ");
    scanf("%lf", &V);
    printf("Угол броска: ");
    scanf("%d", &a);
    g = 9.81;
    P = 3.14;
    ar = a * (P/180);
    vx = V * cos(ar);
    vy = V * sin(ar);
    T = (2 * V * sin(ar)) / g;

    xt = vx * T;
    yt = V * sin(ar) * T - (g * pow(T, 2)) / 2;

    L =  (pow(V, 2) * sin(2 * ar)) / g;
    printf("Время полёта: %.2lf\n Дальность: %.2lf\n Координата X: %.2lf\n Координата Y: %.2lf\n", T, L, xt, yt);


            return 0;
}
