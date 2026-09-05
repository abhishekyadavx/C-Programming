#include <stdio.h>

int main() {

  float num[10] = {0.0};
  float result = 0.0;
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

      result += num[i];
      printf("%.2f\n", result);
      break;

    case 2:

      if (i == 0) {
        result = num[i];
      } else {
        if (result < 0)
          result -= -num[i];
        else
          result -= num[i];
      }

      printf("%.2f\n", result);
      break;

    case 3:

      result *= num[i];
      printf("%.2f\n", result);
      break;

    case 4:

      if(i == 0) {
        result = num[i];
      } else {
        if(num[i] == 0) {
          printf("Error: Cannot divide by zero!\n");
          return 1;
        }
        
        result /= num[i];
      }

      printf("%.2f\n", result);
      break;

    default:
      printf("Select valid operator!");
      break;;
    }
  }

  return 0;
}