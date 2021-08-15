#include <stdio.h>

#define MAXLINE 20 /* max input line size */

/* Read Doc at bottom */

/* Function Prototypes */
int getline(char line[], int limit);
void copy(char to[], char from[]);

/* Print longest input line */
int main() {
    int len; /* current line length */
    int max; /* max length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    printf("Enter lines:\n");

    /* working section */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len>max) {
            max = len;
            copy(longest, line);
        }
    }

    printf("\n--- Analysis Report ---\n");

    if (max>0){ /* there was a line */
        printf("Longest string length: %d\n", max);
        if (max > MAXLINE){
            printf("Storage limit reached! (%d) \n", MAXLINE);
        }
        printf("Longest string saved: %s", longest);
    }

    printf("\n\n[Read: Null value in strings. string as character array.] \n");
    return 0;
}

/* getline: reads a line into array line upto max limit, return actual length */
int getline(char line[], int limit){
    int c; /* character */
    int i; /* trace length */

    /* limit-1 because character array needs a sentinel null value to denote end */
    for (i=0; i<limit-1 && ((c=getchar()) != EOF) && (c!='\n'); i++)
        line[i] = c;
    /* single line block doesnot need curly braces */

    if (i == limit-1) {
        line[i] = '\0';
        while ((c=getchar()) != EOF && (c!='\n'))
            ++i;
    }

    else if (c=='\n') {
        line[i] = c;
        ++i;
        line[i] = '\0';
    }

    else
        line[i] = '\0';

    return i;
}

/* copy: copy 'from' --> 'to' assuming it is big enough */
void copy(char to[], char from[]){
    int i=0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}

/* DOCS

doc1:
    string constants are stored as array of characters containing characters of string with sentinel null value.
    "hi\n" == [h][i][\n][\0]
              length = 4
    %s format expects this null value sentinel.
    BUT \0 is not a part of normal text
*/
