#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
int ref[] = {8, 4, 0, 2, 6, 8, 3, 0, 3, 6};
int *wsk;
int indeks;

for (indeks = 0, wsk = ref; indeks < 10; indeks++, wsk++){
  printf("%d\n", *wsk);
}
return 0;
}
