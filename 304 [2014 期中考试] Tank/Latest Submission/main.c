     #include <stdio.h>

    int capacity;
    int error_flag = 0;
			static int water = 0;

    int pour_in(int volume) {
      water += volume;
      if (water > capacity) {
        error_flag = 1;
        water = capacity;
      }
      return water;
      
    }
    int let_out(int volume) {
      water -= volume;
      if (water < 0) {
        water = 0;
      }
      return water;
    }

    int main(void) {
      int n, operation, volume, result;
      /*for operation, 1 means pour_in and 0 means let_out*/
      scanf("%d%d", &capacity, &n);
      while (n--) {
        scanf("%d%d", &operation, &volume);
        result = operation ? pour_in(volume) : let_out(volume);
        printf("%d %d\n", result, error_flag);
        error_flag = 0;
      }
      return 0;
    }