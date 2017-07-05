#include <stdio.h>
int main() {
  int year,month;
  scanf("%d%d", &year, &month);
  if (year >= 0 && year <= 9999 && month >= 1 && month <= 12) {
    if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))  
      switch(month)  {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          printf("%04d/%02d has 31 days.\n", year, month);
          break;
        case 2:
          printf("%04d/%02d has 29 days.\n", year, month);
          break;
        default:
          printf("%04d/%02d has 30 days.\n", year, month);
          break;
      } else {
        switch(month)  {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          printf("%04d/%02d has 31 days.\n", year, month);
          break;
        case 2:
          printf("%04d/%02d has 28 days.\n", year, month);
          break;
        default:
          printf("%04d/%02d has 30 days.\n", year, month);
          break;
        }    
      } 
    } else {
  printf("Invalid Input Detected.\n");
  }
  return 0;
}