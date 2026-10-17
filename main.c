#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Вариант 3
// v = (1 + sin^2(x + y)) / |x - 2y / (1 + x^2 * y^2)| * x^|y| + cos^2(arctg(1 / z))
// Контрольный пример: x = 3.74e-2, y = -0.825, z = 0.16e2, v = 1.0553
int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, z, v;
    printf("Введите x, y, z через пробел: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    v = (1 + pow(sin(x + y), 2)) / fabs(x - 2 * y / (1 + x * x * y * y)) * pow(x, fabs(y))
        + pow(cos(atan(1 / z)), 2);
    printf("x = %g, y = %g, z = %g\n", x, y, z);
    printf("v = %.4f\n", v);
    return 0;
}
