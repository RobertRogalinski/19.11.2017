#include <stdio.h>
int main() {
  double wzrost;
  char znak;
  printf("podaj swój wzrost i znak" );
  scanf("%lf %c", &wzrost, &znak );
  double cale, centymetrach;
  if(znak=='c')
  {
    cale=wzrost/2.54;
    printf("wzrost w calach to %lf\n",cale  );
  }
  if (znak=='i')
  {
  centymetrach=wzrost/0.39;
  printf("twój wzrost w centymetrach to %lf\n", centymetrach);
}
  return 0;
}
