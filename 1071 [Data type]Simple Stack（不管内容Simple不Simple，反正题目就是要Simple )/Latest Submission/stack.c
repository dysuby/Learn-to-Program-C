#include "stack.h"
#include <stdlib.h>
#include <string.h>
int stack_push(int *stack, int num) {
  int index;
  index = *stack;
  if (index == STACK_MAX_SIZE) {
    return 0;
  } else {
    ++index;
    ++(*stack);
    *(stack + index) = num;
    return 1;
  }
}

int stack_pop(int *stack) {
  int index;
  index = *stack;
  if (index == 0) {
    return 0;
  } else {
    --(*stack);
    return 1;
  }
}

int stack_top(int *stack, int *ret) {
  int index;
  index = *stack;
  if (index == 0) {
    return 0;
  } else {
    *ret = *(stack + index);
    return 1;
  }
}

int *stack_constructor(void) {
  int *stack;
  stack = (int *)malloc(10 * sizeof(int));
  memset(stack, 0, 10 * sizeof(int));
  return stack;
}

void stack_destructor(int *stack) {
  free(stack);
}