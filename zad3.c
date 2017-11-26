#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int convert_to_binary (int n);
int convert_to_decimal (int n);

int main() {
  int number;
  char sign;
  printf("Podaj liczbę i jej format po spacji\n'b'=binarna, 'd'=decymalna \n");
  scanf("%d %c", &number, &sign);
  if (sign = 'b') printf("%d\n", convert_to_decimal(number));
  if (sign = 'd') printf("%d\n", convert_to_binary(number));
}

int convert_to_decimal (int n){
  return 0;
}

int convert_to_binary (int n){
  int bin=0;
  int i=0;
  char c[10];
  while (n != 0){
    i++;
    if (n%2!=0) {
      bin = bin +1; //bin = 1
      bin = bin *10; //bin = 10
      n=n/2;
      c[i] = 1;
    }
    else {
      bin = bin +0; //bin = 1
      bin = bin *10; //bin = 10
      n=n/2;
      c[i] = 0;
    }
  }
  return bin;
}






/*133:2|1
66:2|0
33:2|1
16:2|0
8:2|0
4:2|0
2:2|0
1:2|1
0



*/
