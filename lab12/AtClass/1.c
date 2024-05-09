#include <stdio.h>

#include <stdarg.h>

int max(int count, ...) {
  va_list args;
  int max, num;
  va_start(args, count);

  max = 0;

  for (int i = 1; i < count; i++) {
    num = va_arg(args, int);
    if (num > max) {
      max = num;
    }
  }

  va_end(args);

  return max;
}

int main() {
  int max_val = max(6, 1, 5, 7, 2, 9, 0);
  printf("Maximum value: %d\n", max_val);

  int max1 = max(5 ,2 ,3 ,4, 6, 5);
  printf("Maximum value: %d\n", max1);
  return 0;
}


