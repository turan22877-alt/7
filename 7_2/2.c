#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// 1, 3, 5, 7, 8, 10, 12 - 31
// 4, 6, 9, 11 - 30 
// 2 - 28 / 29 
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int month, year, is_leap;
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        is_leap = 1;
    }
    else {
        is_leap = 0;
    }
    switch (month) {
    case 2:
        if (is_leap) {
            printf("Количество дней: 29\n");
        }
        else {
            printf("Количество дней: 28\n");
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Количество дней: 30\n");
        break;
    default:
        printf("Количество дней: 31\n");
        break;
    }
    system("pause");
    return 0;
}