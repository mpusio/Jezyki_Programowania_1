#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int silnia (unsigned int n);

int main() {
  unsigned int number;
  printf("Podaj liczbę: \n");
  scanf("%d", &number);
  printf("%d", silnia(number));

  for (int i = 1; i <= 10; i++) {
    printf("Silnia z %d równa: %d\n", i,  silnia(i));
  }

  return 0;
}

int silnia (unsigned int n){
  int results = 1;
  for (int i = 1; i <= n; i++) {
    results *= i;
  }
  return results;
}
