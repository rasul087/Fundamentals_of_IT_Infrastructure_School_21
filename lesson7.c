#include <stdio.h>

int main()
{
  int a = 3, b = 6, c = 9;
  printf("a = %d\nb = %d\nc = %d\n", a, b, c);
  printf("Результат с оператором ИЛИ: (a < b) || (b >= c) - %d\n", (a < b) || (b >= c));
  printf("Результат с оператором И: (a < b) && (b >= c) - %d\n", (a < b) && (b >= c));

  return 0;
}
