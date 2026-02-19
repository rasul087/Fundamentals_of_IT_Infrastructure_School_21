#include <stdio.h>

int main() {
  int number = 5;

  switch (number) {
    case 4:
      printf("number = 4");
      break;
    case 5:
      printf("number = 5");
      break;
    case 6:
      printf("number = 6");
      break;

    default:
      printf("number < 4 или number > 6");
  }

  return 0;
}
