#include <stdio.h>
void Merge(int sourcearr[], int temparr[], int startindex, int midindex, int endindex) {
  int index1 = startindex, index2 = midindex + 1, tempindex = startindex, index;
  while (index1 <= midindex && index2 <= endindex) {
    if (sourcearr[index1] >= sourcearr[index2]) {
      temparr[tempindex] = sourcearr[index2];
      ++tempindex;
      ++index2;
    } else {
      temparr[tempindex] = sourcearr[index1];
      ++tempindex;
      ++index1;
    }
  }
  while (index1 <= midindex) {
    temparr[tempindex] = sourcearr[index1];
    ++index1;
    ++tempindex;
  }
  while (index2 <= endindex) {
    temparr[tempindex] = sourcearr[index2];
    ++index2;
    ++tempindex;
  }
  for (index = startindex; index <= endindex; ++index)
    sourcearr[index] = temparr[index];
}
void Merge_sort(int sourcearr[], int temparr[], int startindex, int endindex, int len) {
  int midindex, index;
  if (startindex < endindex) {
    midindex = (startindex + endindex) / 2;
    Merge_sort(sourcearr, temparr, startindex, midindex, len);
    Merge_sort(sourcearr, temparr, midindex + 1, endindex, len);
    Merge(sourcearr, temparr, startindex, midindex, endindex);
    printf("%d", sourcearr[0]);
    for (index = 1; index < len; ++index)
      printf(" %d", sourcearr[index]);
    printf("\n");
  }
}
int main() {
  int len, index;
  scanf("%d", &len);
  int arr[100], temp[100];
  for (index = 0; index < len; ++index) {
    scanf("%d", &arr[index]);
  }
  Merge_sort(arr, temp, 0, len - 1, len);
  return 0;
}