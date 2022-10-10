#include<stdio.h>

int main() {
  float a, b, c, result;
  scanf("%f%f%f", &a, &b, &c);
  result = (a + b + c) / 3;
  printf("%.3f\n", result);
  return 0;
}
