#include <stdio.h>
#include <math.h>

int main() {

  printf(" Podaj promień r koła " );
  int r;
  scanf("%d", &r );
  while (r<=0)
  {printf("podaj promień r większe od 0" );
scanf("%d",&r );
}
int Pole= M_PI*r*r;
int Obwód= 2*M_PI*r;

printf("Pole koła to %d, a obwód koła to %d\n",Pole, Obwód );
return 0;
}
