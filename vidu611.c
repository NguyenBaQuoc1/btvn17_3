#include <stdio.h>
int main(){
  char item[20];
  int partno;
  float cost;

  printf("nhap vat pham\n");
  scanf("%s %*d %f", &item, &partno, &cost);
  printf("ket qua la %s %.2f", item,  partno,  cost);

  return 0;
}