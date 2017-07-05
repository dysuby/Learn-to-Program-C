#include "utility.h"
#include <stdio.h>
#include <stdlib.h>
void readMap(const size_t map_size) {
  int index, index2;
  for (index = 0; index < (int)map_size; ++index) {
    getchar();
    fgets(map[index], 15, stdin);
  }
  for (index = 0; index < (int)map_size; ++index) {
    for (index2 = 0; index2 < (int)map_size; ++index2) {
      if (map[index][index2] == 'A') {
        human_x = index2;
        human_y = index;
        break;
      }
    }
  }
}
void printMap(const size_t map_size) {
  int index;
  for (index = 0; index < (int)map_size; ++index) {
    printf("*%s", map[index]);
  }
}
void move(size_t map_size, int *is_alive, int *is_stop) {
  char move = '\0';
  int is_water = 0, next_x, next_y;
  for (next_x = human_x, next_y = human_y; *is_alive && scanf(" %c", &move) != EOF; ) {
    if (*is_stop) {
      switch (move) {
        case 'a':
          --next_x;
          if (next_x == -1) {
            next_x = map_size - 3;
          }
          break;
        case 's':
          ++next_y;
          if (next_y == map_size - 1)
            next_y = 1;
          break;
        case 'w':
          --next_y;
          if (next_y == 0) 
            next_y = map_size - 2;
          break;
        case 'd':
          ++next_x;
          if (next_x == map_size - 2)
            next_x = 0;
          break;
      }
      if (is_water && map[next_y][next_x] != '#') {
        map[human_y][human_x] = '@';
        is_water = 0;
      } else {
        map[human_y][human_x] = ' ';
      }
      switch (map[next_y][next_x]) {
        case '@':
          is_water = 1;
          *is_stop = 0;
          map[next_y][next_x] = 'A';
          printMap(map_size);
          break;
        case '$':
          *is_alive = 0;
          printf("Game Over!\n");
          break;
        case ' ':
          map[next_y][next_x] = 'A';
          printMap(map_size);
          break;
        case '#':
          next_x = human_x;
          next_y = human_y;
          map[human_y][human_x] = 'A';
          printMap(map_size);
          break;
        default:
          printMap(map_size);
          break;
      }
      human_y = next_y;
      human_x = next_x;
    } else {
      printMap(map_size);
      *is_stop = 1;
    }
  }
}
int main() {
  size_t map_size;
  int is_alive = 1, is_stop = 1;
  scanf("%zu", &map_size);
  map_size += 2;
  getchar();
  readMap(map_size);
  move(map_size, &is_alive, &is_stop);
  return 0;
}