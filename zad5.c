#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void podnies_do_kwadratu(int *n) {  //można użyć pow(liczba, 2);
  *n = (*n)*(*n);
}


void wczytaj_liczbe(int *n) {
printf("Wpisz liczbę naturalną: ");
scanf("%d", n);
if (*n<0) {
  printf("Nie podałeś liczby naturalnej\n");
  exit(1);
  }
}


int main() {
int liczba;
wczytaj_liczbe(&liczba);
podnies_do_kwadratu(&liczba);
printf("Kwadrat wczytanej liczby to %d\n", liczba);
return 0;
}
