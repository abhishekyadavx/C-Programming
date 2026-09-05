#include <stdio.h>

int main() {

  float num[10] = {0.0};
  float sum = 0.0, sub = 0.0, mul = 1.0, div = 1.0;
  int op = 0;

  printf("\n----------Basic Calculator----------\n");

  printf("\n1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n");

  for(int i = 0; i < 10; i++) {
    
    printf("\nSelect Operator: ");
    scanf("%d", &op);
    
    printf("\nEnter %d number: ", i+1);
    scanf("%f", &num[i]);

    switch (op)
    {
    case 1:

      sum += num[i];
      printf("%.2f", sum);
      break;

    case 2:

      if (i == 0) {
        sub = num[i];
      } else {
        if (sub < 0)
          sub -= -num[i];
        else
          sub -= num[i];
      }

      printf("%.2f\n", sub);
      break;

    case 3:

      mul *= num[i];
      printf("%.2f\n", mul);
      break;

    case 4:

      if(i == 0) {
        div = num[i];
      } else {
        if(num[i] == 0) {
          printf("Error: Cannot divide by zero!\n");
          return 1;
        }
        
        div /= num[i];
      }

      printf("%.2f\n", div);
      break;

    default:
      printf("Select valid operator!");
      break;
    }
  }

  return 0;
}