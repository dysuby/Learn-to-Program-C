#include "linkedList.h"
#include <stdlib.h>
bool insert(int position, int value) {
  int index;
  node *prev, *current, *temp;
  if (position > size || position < 0) {
    return false;
  } else {
    temp = (node *)malloc(sizeof(node));
    if (position == 0) {
      temp -> value = value;
      temp -> next = head;
      head = temp;
    } else {
      current = head;
      for (index = 0; index < position; ++index) {
      prev = current;
      current = current -> next;
      }
      prev -> next = temp;
      temp -> value = value;
      temp -> next = current;
    }
    ++size;
    return true;
  }
}
int get(int position) {
  int index;
  node *current;
  current = head;
  for (index = 0; index < position; ++index) {
    current = current -> next;
  }
  return current -> value;
}
void clear() {
  node *current, *next;
  current = head;
  for (next = current -> next; next != NULL; current = next) {
    next = current -> next;
    free(current);
  }
}