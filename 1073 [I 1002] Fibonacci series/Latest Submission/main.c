 #include <stdio.h>
int main() {
  int times, tested, counter, sum1, sum2, term, bigger;
  scanf("%d", &times);
  for (counter = 0; counter < times; ++counter) {
    scanf("%d", &tested);
    term = 2;
    bigger = 1;
    for (sum1 = 0, sum2 = 1; bigger <= tested; ++term) {
      if (bigger == tested) {
        printf("%d\n", term);
        break;
      }      
      if (sum1 >= sum2) {
        sum2 += sum1;
        bigger = sum2;
      } else {
        sum1 += sum2;
        bigger = sum1;
      }
    }
    if (bigger > tested) {
      printf("0\n");
    }
  }
  return 0;
}