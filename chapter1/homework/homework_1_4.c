#include<stdio.h>
#include<math.h>

int main() {
  const double pi = acos(-1.0);
  int a;
  float b;
  scanf("%d", &a);
  b = a / 180.0 * pi;
  printf("%.3f\n", sin(b));
  printf("%.3f\n", cos(b));
  return 0;
}
