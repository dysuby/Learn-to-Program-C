#include <stdio.h>
#include <stdlib.h>
typedef struct balls {
  int ball;
  struct balls *next;
} balls;
balls *head;
balls* create(int balls_num) {
  balls *current;
  int index;
  current = (balls *)malloc(sizeof(balls));
  head = current; 
  for (index = 1; index < balls_num; ++index) {
    current -> ball = index;
    current -> next = (balls *)malloc(sizeof(balls));
    current = current -> next;
  }
  current -> ball = index;
  current -> next = NULL;
  return head;
}
void exchange() {
  int position, ball1, ball2;
  scanf("%d%d%d", &position, &ball1, &ball2);
  balls *current, *prev, *temp;
  current = head;
  prev = head;
  while (current -> ball != ball1) {
    prev = current;
    current = current -> next;
  }
  temp = current;
  if (prev == current) {
    current = current -> next;
    head = current;
  } else {
    prev -> next = current -> next;
  }
  current = head;
  while (current -> ball != ball2) {
    prev = current;
    current = current -> next;    
  }
  if (position == 1) {
    prev -> next = temp;
    temp -> next = current;
  } else {
    temp -> next = current -> next;
    current -> next = temp;
  }
}
void output() {
  balls *current;
  for (current = head; current -> next != NULL; current = current -> next) {
    printf("%d ", current -> ball);
  }
  printf("%d \n", current -> ball);
}
void freeBall() {
  balls *current, *next;
  current = head;
  for (next = current -> next; next != NULL; current = next) {
    next = current -> next;
    free(current);
  }
}
int main() {
  int times_num, balls_num, orders_num, times, index;
  scanf("%d", &times_num);
  for (times = 0; times < times_num; ++times) {
    scanf("%d%d", &balls_num, &orders_num);
    head = create(balls_num);
    for (index = 0; index < orders_num; ++index) {
      exchange(head);
    }
    output(head);
    freeBall(head);
  }
  return 0;
}