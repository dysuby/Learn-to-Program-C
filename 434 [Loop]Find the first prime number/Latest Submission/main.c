#include <stdio.h>
int main()  {
  int min, max, result = 0;
  int index;
  scanf("%d%d", &min, &max);
  for( ; min <= max && !result; ++min) {
    index = 2;
    while (index <= min) {
        if (min % index == 0 && min != index) {
          break;
        }
        else if (min % index == 0 && min == index) {
          result = min;
          printf("%d\n", result);
          ++index;
        }
        else {
          ++index;
        }  
      }
    }
    if (!result)
      printf("none\n");
  return 0;
}  