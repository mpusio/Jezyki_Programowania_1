#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void glue_strings(char *string1, int length1, char *string2, int length2);

int main () {
  char t1[] = "Ala ma kota";
  char t2[] = "Kota ma prezes";
  int len1 = strlen(t1);
  int len2 = strlen(t2);

  glue_strings (t1, len1, t2, len2);
}

void glue_strings(char *string1, int length1, char *string2, int length2){
  char glue[100]; //łączona tablica do 100 znaków

  for (int i = 0; i < length1; i++) { //daj 1 tablicę
    glue[i] = string1[i];
  }
  for (int i = 0; i < length2; i++) { //daj 2 tablice
    glue[i+length1] =  string2[i];
  }
  for (int i = 0; i < length1+length2; i++) { //wypisz
    printf("%c", glue[i]);
  }
}

//można było użyć strcat
