#include <stdio.h>

int main() {
    int a = 3;
    float b = 6.5;

    int *k = &a;
    float *j = &b;
    
    printf("Адресс переменной a - %p \n", k);
    printf("Адресс переменной b - %p \n", j);
    printf("a = %d \n", *k);
    printf("b = %f \n", *j);

    return 0;
}