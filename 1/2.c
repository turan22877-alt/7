#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    float x, y;
    char c;
    printf("Введите выражение:\n");
    scanf("%f%c%f", &x, &c, &y);
    switch (c) {
    case '+':
        printf("=%.3f\n", x + y);
        break;
    case '-':
        printf("=%.3f\n", x - y);
        break;
    case '*':
        printf("=%.3f\n", x * y);
        break;
    case '/':
        printf("=%.3f\n", x / y);
        break;
    case '^':
        printf("=%.3f\n", pow(x, y));
        break;
    default:
        printf("Ошибка: неизвестная операция '%c'\n", c);
        break;
    }
    system("pause");
    return 0;
}