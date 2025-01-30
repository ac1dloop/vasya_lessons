//Ветвления\условные конструкции, branching. if else, switch
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    int b = 2;
    
    /* Если условие верное выполнить код в фигурных скобках */
    if (a > b){
        printf("%d > %d\n", a, b);
    }

    /* Если условие верное выполнить код 1. В противном случае выполнить код 2 */
    if (a > b){
        /* код 1 */
    } else {
        /* код 2 */
    }

    /* Можно нагородить сколько душе угодно конструкций, но выполнится только одна */
    if (a % 3 == 0) {
        printf("Multiple of 3\n");
    } else if (a % 3 != 0){
        printf("Not multiple of 3\n");
    } else if (a % 2 == 0){
        printf("Even\n");
    } else if (a % 2 != 0){
        printf("Odd\n");
    } else {
        printf("Hello\n");
    }

    /* Можно вкладывать условия одно в другое */
    a = 17;
    if (a % 5 != 0){
        if (a % 3 != 0){
            if (a % 2 != 0){
                if (a < 15){
                    printf("%d is natural number!\n", a);
                }
            }
        }
    }

    /* switch удобен если мы проверяем значение числа */
    a = 1;
    switch (a){
        case 0:
        {//фигурные скобки не обязательны
            printf("Hello\n");
            break;//если не будет break то будут выполнены и все последующие конструкции
        }
        case 1:
        {
            printf("Ola\n");
        }
        case 2:
        {
            printf("Goodbye\n");
            break;
        }
        default:
        {
            break;
        }
    }
}