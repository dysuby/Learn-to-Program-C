#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100
int main() {
  int arr[MAXSIZE] = {0}, shuffledArr[MAXSIZE] = {0}, total = 0;
  scanf("%d", &total);
  for (int index = 0; index < total; ++index) {
    scanf("%d", &arr[index]);
  }
  unsigned seed = 0;
  scanf("%u", &seed);
  srand(seed);
  int selectedIndex = 0, temp = 0;
  for (int timesCount = 0; timesCount < 2; ++timesCount) {
    memcpy(shuffledArr, arr, sizeof(arr));
    for (int maxIndex = total - 1; maxIndex > 0; --maxIndex) {
      selectedIndex = rand() % (maxIndex + 1);
      temp = shuffledArr[selectedIndex];
      shuffledArr[selectedIndex] = shuffledArr[maxIndex];
      shuffledArr[maxIndex] = temp;
    }
    printf("{%d", shuffledArr[0]);
    for (int index = 1; index < total; ++index) {
      printf(", %d", shuffledArr[index]);
    }
    puts("}");
  }
  return 0;
}

