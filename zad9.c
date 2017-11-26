#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void print_table(char *tab, int n);

int main () {
  int n;
  printf("Podaj rozmiar tablicy:\n");
  scanf("%d", &n);
  char table[n];
  for (int i = 0; i<n; i++){ //dodaj naturalne do tablicy
    table [i] = i+1;
  }
  print_table(table, n);
}

void print_table(char *tab, int n){
  n--;
  for (int i = 0; i <= n; n--) {
    printf("tablica %d równa jest: %d\n", n, tab[n]);
  }
}
