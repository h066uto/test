#include <stdio.h>

int main(void)
{
  int n, a, b;

  printf("n = %d");
  scanf("%d", &n);
   
  a = n/2;
  b = n - 2*a;


  if( b == 0 ){
 printf("%d は偶数です\n", n);
  }
  return 0;
} 
