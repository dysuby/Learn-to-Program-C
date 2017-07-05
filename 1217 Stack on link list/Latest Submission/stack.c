#include "stack.h"
#include <stdio.h>
void pop(Stack *stack) {
  Node *current;
  current = stack -> top;
  stack -> top = current -> next;
  free(current);
  --stack -> size;
}
int top(Stack *stack) {
  return stack -> top -> data;
}
void push(Stack *stack, int data) {
  stack -> top = createNode(data, stack -> top);
  ++stack -> size;
}
int size(Stack *stack) {
  return stack -> size;
}
int empty(Stack *stack) {
  if (stack -> top == NULL) {
    return 1;
  } else {
    return 0;
  }
}