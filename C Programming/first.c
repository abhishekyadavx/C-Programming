#include <stdio.h>

void add(int x, int y);

int main()
{
  int x, y;
  printf("Enter two number: ");
  scanf("%d %d", &x, &y);

  add(x, y);

  return 0;
}

void add(int x, int y) {
  int sum = x + y;

  printf("Sum = %d", sum);
}