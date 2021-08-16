/* K&R2: 1.9, Character Arrays, exercise 1.17

STATEMENT:
write a programme to print all the input lines
longer thans 80 characters.
*/

#include <stdio.h>

#define MAXLINE 1000
#define THRESH 80

int load_buffer(char line[], int limit);
void publish(char line[], int len, int thresh);

int main(){
    int len;
    char line[MAXLINE];
    while((len = load_buffer(line, MAXLINE))>0){
        printf("[Last line length %d]\n", len);
        publish(line, len, THRESH);
    }

    return 0;
}

int load_buffer(char line[], int limit){
    int i,c;
    for (i=0; i<limit && (c=getchar())!= EOF && c!='\n'; ++i){
        line[i] = c;
    }
    if (i==limit){
        while ((c=getchar)!=EOF && c!='\n')
            ++i;
    }

    return i;
}


void publish(char line[], int len, int thresh){
    /* printf("inside publish\n");*/
    if (len<=thresh)
        return;

    printf("--- Threshold (%d) exceeded ---\n", thresh);
    for (int i=0; i<len; i++)
        putchar(line[i]);

    printf("\n");
}
