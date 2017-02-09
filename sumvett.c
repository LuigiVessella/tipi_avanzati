#include<stdio.h>

int main(){
  int vett[3];
  int somma;
  float media;

  printf("Inserisci tre valori interi:\n");
  printf("?");
  scanf("%d", &vett[0]);
  printf("?");
  scanf("%d", &vett[1]);
  printf("?");
  scanf("%d",&vett[2]);
  
  printf("Numeri inseriti:\n");
  printf("%d\n%d\n%d\n", vett[0],vett[1],vett[2]);

  somma = vett[0]+vett[1]+vett[2];
  media = somma/3.0;

  printf("Somma:%d\nMedia:%.1f\n",somma,media);

  return 0;

}
