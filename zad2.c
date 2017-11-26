#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int perfect_number (int n);

int main() {
  int number;
  printf("Podaj liczbę: \n");
  scanf("%d", &number);

  if (perfect_number(number)==1)
  printf("Liczba %d jest doskonała\n", number);
  else
  printf("Liczba %d nie jest doskonała\n", number);


  perfect_number(number); //sprawdza numer podany przez uzytkownika


  for (int i = 0; i <=number; i++) {  //sprawdza liczby podane poniżej i równe n
    if (perfect_number(i)==1)
    printf("Liczba %d jest doskonała\n", i);
    else
    printf("Liczba %d nie jest doskonała\n", i);
  }

  int amount = 0;  //sprawdza ilość liczb doskonałych od 0 do 10000 włącznie
  for (int i = 0; i <=10000; i++) {
    if (perfect_number(i)==1)
    amount ++;
  }
  printf("Ilość liczb doskonałych z przedziału od 0 do 10 000 = %d\n", amount);
}



int perfect_number (int n){
  int result = 0;
  for (int i = 1; i < n; i++) {
    if (n%i==0) {
      result +=i;
    }
  }
  if (result==n) {
    return 1;
  } else {
    return 0;
  }
}
