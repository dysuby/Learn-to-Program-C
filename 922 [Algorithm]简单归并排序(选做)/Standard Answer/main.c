#include <stdio.h>
#include <stdlib.h>

int arrLen = 0;

void merge_sort_recursive(int arr[], int reg[], int start, int end);

int main() {
  int arr[1000];
  int reg[1000];

  int i = 0;
  scanf("%d", &arrLen);
  for (i = 0; i < arrLen; i++)
    scanf("%d", &arr[i]);

  merge_sort_recursive(arr, reg, 0, arrLen - 1);

  return 0;

}


void merge_sort_recursive(int arr[], int reg[], int start, int end) {
	if (start >= end) return;
	int len = end - start, mid = (len >> 1) + start;
	int start1 = start, end1 = mid;
	int start2 = mid + 1, end2 = end;

	merge_sort_recursive(arr, reg, start1, end1);
	merge_sort_recursive(arr, reg, start2, end2);

	int k = start;
	while (start1 <= end1 && start2 <= end2)
		reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
	while (start1 <= end1)
		reg[k++] = arr[start1++];
	while (start2 <= end2)
		reg[k++] = arr[start2++];
	for (k = start; k <= end; k++)
		arr[k] = reg[k];

  int j = 0;
  for (j = 0; j < arrLen - 1; j++) {
    printf("%d ", arr[j]);
  }
  printf("%d\n", arr[j]);

}
