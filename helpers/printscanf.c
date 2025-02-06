#include <stdio.h>

void main(){
    /* Прочитать целое число */
    /* Для типа int - %d */
    int a;
    scanf("%d", &a);//Внимание амперсанд перед имененем переменной
    printf("You entered %d\n", a);

    /* Прочитать целое ПОЛОЖИТЕЛЬНОЕ число */
    unsigned b;
    scanf("%u", &b);//Попробуй здесь ввести -123
    printf("You entered %u\n", b);

    /* Прочитать длинное беззнаковое число */
    unsigned long c;
    scanf("%lu", &c);
    printf("You entered %lu", c);

    /* Прочитать число с плавающей точкой float */
    float val;
    scanf("%f", &val);
    printf("You entered %f\n", val);

    /* Прочитать число с плавающей точкой double */
    double doubleVal;//%lf
    scanf("%lf", &doubleVal);
    printf("You entered %lf\n", doubleVal);

    /* Прочитать строку */
    char str[100];//Строка может хранить в себе до 100 символов
    scanf("%s", str);//Hello World => "Hello"
    scanf("%[^\n]", str);//Hello World => "Hello World" | Все символы допустимые. Кроме \n
    scanf("%[0-9]", str);//Hello World => "" | Считать все символы которые цифры
    scanf("%[0-9]", str);//123Hell78347World => "123"

    /* Вывести строку */
    printf("Text: %s\n", str);

    /* Объявить массив с именем array. Хранящим 5 значений имеющих тип int */
    /* По умолчанию в языке Си переменные и в том числе массивы не инициализированы
     * А значит могут иметь непредсказуемые значения */
    int array[5];//Массив типа int. [int, int, int, int, int]

    /* Доступ к элементам массива */
    array[0] = 1;
    array[1] = 15;
    array[3] = -1;
    /* Осталось неиницилизированных значения. Там может быть что угодно */
    //[1, 15, int, -1, int]

    /* Нет возможности одноразово прочитать массив не являющийся строкой (например char arr[100]) см. выше */
    /* По считывать значения надо поочерёдно */
    scanf("%d", &array[0]);//Амперсанд!
    scanf("%d", &array[1]);

    /* Справедливо и для вывода */
    printf("%d", array[4]);
    printf("%d", array[3]);

    /* Для удобства используются циклы */
    const int arr_size = 30;
    double temp[arr_size];//В качестве размера или индекса может использоваться переменная
    
    printf("Enter %d temperatures\n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%lf", &temp[i]);//прочитать значение типа double и присвоить его в массив temp по индексу i
    }

    /* Дальше можно работать с введёнными значениями */
    double average = 0.0;//среднее значение
    for (int i = 0; i < arr_size; i++)
    {
        average += temp[i];
    }
    average /= arr_size;

    printf("First day: %lf\n", temp[0]);
    printf("Last day: %lf\n", temp[arr_size - 1]);
    printf("Average temp: %lf\n", average);
}