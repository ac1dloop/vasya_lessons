//Функции
#include <stdio.h>

int/* возвращаемый тип */ Min2/* имя функции */(int a, int b/* входящие значения */)
{
    /* В фигурных скобках тело функции */
    if (a < b){
        return a;
    } else {
        return b;
    }
}

double Square(double x){
    return x * x;
}

/* Функция может не возвращать никакое значение */
void PrintSquare(double x){

    double result = Square(x);

    printf("Result: %lf\n", result);
}

/* Возвращаемое значение можно сразу использовать */
void PrintSquare2(double x){
    printf("Result: %lf\n", Square(x) );
}


/* Иногда разделяют объявление функции и её определение */
double PowerThree(double x);

/* Самая главная функция всегда main
 * принято считать что main возвращает значение 0 если программа выполнена успешно
 * в остальных случаях специальный код ошибки. например -1 */
int main(){

    int snickers = 100;
    int mars = 101;

    printf("Cheapest candy costs: %d\n", Min2(snickers, mars));

    double x = Square(12.5);
    double y = PowerThree(2.785);

    if (x > y){

        y = Square(x) + Square(x);

    } else {

        // ((y^2)^2)^2
        x = Square(Square(Square(y)));

    }

    return 0;
}

double PowerThree(double x){
    return x * x * x;
}