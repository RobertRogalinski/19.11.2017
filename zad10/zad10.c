#include <stdio.h>
int main() {
  int a;
  printf("podaj liczbe a" );
  scanf("%d", &a );
  int b;
  printf("podaj liczbe b" );
  scanf("%d", &b );
  int c;
  printf("podaj liczbe c" );
  scanf("%d", &c );
  if(a<b)
  {
    if(b<c)
    {
      printf("%d, %d, %d\n", a, b, c);
    }
    else
    {
      printf("%d, %d, %d\n", a, c, b);
    }
  }
  else if(b<c)
  {
    if(a<c)
    {
      printf("%d, %d, %d\n", b, a, c);
    }
    else
    {
      printf("%d, %d, %d\n", b, c, a);
    }
  }
  else
  {
    if(a<b)
    {
      printf("%d, %d, %d\n", c, a, b);
    }
    else
    {
      printf("%d, %d, %d\n", c, b, a);
    }
  }

  return 0;
}
