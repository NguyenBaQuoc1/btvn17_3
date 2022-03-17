#include <stdio.h>
int main ()
{
  int i;
  float x;
  char c;
  printf("please enter data\n");
  scanf("%3d %5f %c", &i,&x,&c);
  printf("the values accepted are: %d %f %c",i , x,c);
  
  return 0;

}