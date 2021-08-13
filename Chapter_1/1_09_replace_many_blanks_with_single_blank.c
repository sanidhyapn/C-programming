#include <stdio.h>

int main(void)
{
  /* Replace 1+ blanks by single blank space */
  int c;
  int last_c='a'; // some random not_blank value

  while ((c=getchar()) != EOF){
    if (c==' ' || c=='\t'){
        ;
    }
    else if(c!=' ' || c!='\t'){

        if (last_c==' ' || last_c=='\t'){
            putchar(' ');
        }

        putchar(c);
    }

    last_c = c;
  }
  return 0;
}
