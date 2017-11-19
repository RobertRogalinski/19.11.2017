#include <stdio.h>
int main() {
  int wiek, godzina, sekundy;
  printf("Podaj swój wieka " );
  scanf("%d",&wiek );

  while (wiek<=0)
  {
    printf("Podaj swój wiek " );
    scanf("%d", &wiek );
  }
  godzina=wiek*365*24;
  sekundy=godzina*3600;
  printf("Twój wiek w godzinach %d a wiek w sekundach %d\n", godzina, sekundy);
  return 0;
}
