#include <stdio.h>
int main() {
  int queue[11], front = 0, rear = 0, action;
  while (scanf("%d", &action) != EOF) {
    if (action == 0) {
      if (front == rear){
        printf("Pop Failed. The queue is empty.\n");
      }
      else {
        printf("%d\n", queue[front]);
        ++front;
      }
      if (front >= 11)
        front %= 11;
    } else if (action == 1) {
      if ((rear + 1) % 11 != front) {
        scanf("%d", &queue[rear]);
        ++rear;     
      } else {
        printf("Push Failed. The queue is full.\n");
      }
      if (rear >= 11)
        rear %= 11;   
    }
  }
  return 0;
}