#include <stdio.h>

int main() {
  int a;
  printf("Введите первое целое число: ");
  scanf("%d", &a);
  int b;
  printf("Введите второе целое число: ");
  scanf("%d", &b);
  if (a == b) {
    printf("Значения равны.");
  } else {
    printf("Значения не равны");
  }
  return 0;
}
