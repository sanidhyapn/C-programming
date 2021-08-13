#include <stdio.h>

#define LOWER 0   // lower_limit
#define UPPER 300 // upper_limit
#define STEP 20   // step size

int main(){
    /* count blanks, tabs and newlines */
    long blanks=0;
    long tabs=0;
    long newlines=0;
    int c;
    /* Didn't use char c since
    c must be enough to hold EOF in addition to any possible char
    */

    while ((c=getchar()) != EOF){
        if (c=='\n'){
            ++newlines;
        }
        else if (c=='\t'){
            ++tabs;
        }
        else if (c==' '){
            ++blanks;
        }
    }
    printf("Blanks: %ld\n", blanks);
    printf("tabs: %ld\n", tabs);
    printf("newlines: %ld\n", newlines);
    return 0;
}

/* 
INPUT -----------------------
h i hello       bye
^Z

(CTRL+Z invokes EOF in windows)

OUTPUT ----------------------
Blanks: 2
tabs: 1
newlines: 1