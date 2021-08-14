#include <stdio.h>

#define MAX_WORD_LEN 11
#define STYLE '*'

int main(void)
{
  /* PROGRAM: Histogram lengths of words in input */

  // Variables declaration
  int array[MAX_WORD_LEN] = {}; // initialised with zero
  int c;
  int counter=0;


  // User input section
  while ((c=getchar()) != EOF){
    if ((c!=' ') && (c!='\t') && (c!='\n')){
        ++counter;
    }
    else{
        ++array[counter];
        counter = 0;
    }
  }


  // Histogram Print section
  printf("\n\n[ Histogram for lengths of words upto %d ]\n\n", MAX_WORD_LEN-1);
  for (int i=1; i<MAX_WORD_LEN; ++i){
    printf("%2d |", i);

    for (int j=0; j<array[i]; ++j){
        printf("%c", STYLE);
    }

    printf("\n\n");
  }


  return 0;
}
