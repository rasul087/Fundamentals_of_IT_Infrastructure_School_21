#include <stdio.h>

struct employee {
    char name[20];
    int age;
    float salary;
};

int main() {
    struct employee ivan = {"Иван", 33, 400000.0};
    printf("Имя сотрудника: %s\nВозраст: %d\nЗарплата: %.1f\n", ivan.name, ivan.age, ivan.salary);

    return 0;
}