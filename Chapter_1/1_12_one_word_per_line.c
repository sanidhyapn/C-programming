#include <stdio.h>

int main(void)
{
  /* write input one word per line */
  int c;
  int last_c='a'; // random not_blank value
  
  while ((c=getchar()) != EOF){
    if (c!=' ' && c!='\t'){
        if (last_c==' ' || last_c=='\t'){
            putchar('\n');
        }
        putchar(c);
    }

    last_c = c;
  }
  return 0;
}
