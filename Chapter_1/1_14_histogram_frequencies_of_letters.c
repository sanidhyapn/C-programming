#include <stdio.h>

#define CHARACTERS 26
#define STYLE '+'

int main(void)
{
  /* PROGRAM: Histogram for frequencies of different characters */

  // Variables declaration
  int array[CHARACTERS] = {}; // initialised with zero
  int c;


  while ((c=getchar()) != EOF){
      // ASCII value of A is 65
      if (c>='A' && c<='Z'){
        ++array[c-65];
      }

      // ASCII value of a is 97
      else if (c>='a' && c<='z'){
        ++array[c-97];
      }
  }


  // Histogram Print section
  printf("\n\n[ Histogram for frequencies of letters ]\n\n");

  for (int i=0; i<CHARACTERS; ++i){
    printf(" %c (%c) |", i+65, i+97);

    for (int j=0; j<array[i]; ++j){
        printf("%c", STYLE);
    }

    printf("\n");
  }


  return 0;
}
