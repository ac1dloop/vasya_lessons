//Арифметические операции
#include <stdio.h>

#include <stdbool.h>//

void main(){

    /* База */
    int a = 1 + 1;//a = 2
    int b = 2 - 2;//b = 0
    int c = 3 * 3;//c = 9
    int d = 4 / 4;//d = 1

    /* Остаток от целочисленного деления 3/4 */
    int e = 3 % 4;//e = 1

    printf("%d %d %d %d %d\n", a, b, c, d, e);

    a += 11;//a = a + 11
    b -= 22;//b = b - 22
    c *= 33;//c = c * 33
    d /= 44;//d = d / 44
    e %= 2;//e = e % 2

    printf("%d %d %d %d %d\n", a, b, c, d, e);

    /* Выражение */
    double x = 100;
    double y = x*x + (5*x - 12);

    printf("y = %lf\n", y);

    /* Неравенства */
    bool aa = 11 < 22;//aa = true
    bool bb = 33 <= 33;//bb = true
    bool cc = 44 > 44;//cc = false
    bool dd = 55 >= 66;//dd = false
    bool ee = 77 == 77;//ee = true
    bool ff = 88 != 99;//ff = true

    /* Инкремент, декремент */
    int i = 0;
    i++;//Можно справа
    printf("i: %d\n", i);
    --i;//Можно слева
    printf("i: %d\n", i);

    /* Тернарный оператор */
    int ret = i == 0 ? 0 : i + i;
}