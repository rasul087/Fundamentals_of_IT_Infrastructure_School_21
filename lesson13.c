#include <stdio.h>

int main() {
    int a = 3;

    int *c = &a;

    printf("a = %d \n", *c);
    printf("Адрес переменной a - %p \n", c);
    
    c++;
    printf("Адрес после инкремента - %p \n", c);

    c--;
    printf("Адрес после декремента - %p \n", c);

    return 0;
}