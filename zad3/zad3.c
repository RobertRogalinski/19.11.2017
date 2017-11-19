#include <stdio.h>

int main() {
  int a;
  printf("Podaj liczbę a");
scanf("%d\n", &a );
if (a<=0)
{
printf("Podaj liczbę większą od 0\n" );
return 1;
}
else
{
  int n=1;
  long int sil=1;
  while(n>=a)
  {
    sil*=a;
  a++;
}
  printf("silnia  %d to %ld\n" ,n, sil );
}
  return 0;
}
