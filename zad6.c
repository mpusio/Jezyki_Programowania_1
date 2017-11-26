#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void swap_integers(int *a, int *b);

int main() {
  int a, b;
  printf("Podaj dwie liczby:\n");
  scanf("%d %d", &a, &b);
  printf("Przed zmianą kolejności a = %d, b = %d\n", a, b);
  swap_integers(&a,&b);
  printf("Po zmianie kolejności a = %d, b = %d\n", a, b);
  return 0;
}

void swap_integers(int *a, int *b) {
  int save_a = *a;
  *a = *b;
  *b = save_a;
}
