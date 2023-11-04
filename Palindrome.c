#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;
  scanf("%d", &n);
   int a=n;
  while (n != 0)
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  if(a==reverse)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
}