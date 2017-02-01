#include<stdio.h>

int main(){
  double x_double;
  int x_int;
  printf("Inserisci un numero a virgola mobile: ");
  scanf("%lf", &x_double);
  x_int=(int)x_double;
  printf("La parte intera e' %d\n", x_int);
  printf("Il numero completo e' %f\n", x_double);
return 0;
}
