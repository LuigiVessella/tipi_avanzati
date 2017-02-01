#include <stdio.h>

int main(){
float num = 50.55;
float *p_num = &num;
printf("L'indirizzo in memoria e': %p\n",p_num);
return 0;
}
