#include <stdio.h>
int main() {
// ���鳤�� 
 int QL;
// �Ŷӵ��˵Ĵ���ʱ��
 int QLT[101];
//  ���ӵ�����
 int SL;
//  ���ӵ��˵Ĵ���ʱ��
 int SLT[101];
//  ���ӵ��˵Ĳ���λ�� 
 int SLP[101];
//  С��ǰ�������� 
 int PL;
// С��Ҫ�ȴ���ʱ��
 int time = 0; 
 scanf("%d", &QL);
 PL = QL;
 for (int i = 0; i < QL; i++) {
  scanf("%d", &QLT[i]);
  time += QLT[i];
 }
 scanf("%d", &SL);
 for (int i = 0; i < SL; i++) {
  scanf("%d%d", &SLP[i], &SLT[i]);
  if (SLP[i] <= PL) {
   time += SLT[i];
   PL++;
  }
 }
 printf("%d\n", time);
 return 0;
}
