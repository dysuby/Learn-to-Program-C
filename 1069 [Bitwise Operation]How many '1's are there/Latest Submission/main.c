 #include <stdio.h>
int main() {
  int times, tested, counter, result, two[100] = {0}, shang, index;
  scanf("%d", &times);
  for (counter = 0; counter < times; ++counter) {
    scanf("%d", &tested);
    result = 0;
    shang = tested;
    for (index = 0; shang != 0; ++index) {
      two[index] = shang % 2;
      shang /= 2;
    }
    for (--index; index >= 0; --index) {
      if (two[index] == 1)
        ++result;
    }
    printf("%d\n", result);
  }
  return 0;
}