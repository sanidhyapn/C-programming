/* MISSION: Remove leading and trailing spaces, tabs. Delete blank lines */

#include<stdio.h>

#define MAX 1000
#define STOP -1

int getline(char line[]);
void display(char line[], int len);

int main(){
    int len;
    char line[MAX];
    while ((len=getline(line)) != STOP) {
        display(line, len);
    }

    return 0;
}

/* return space trimmed line length and also read it into array */
int getline(char line[]){
    int i=0;
    int c;
    int spacebuffer[MAX];
    int idx = 0;
    /* ignore leading spaces */
    while ((c=getchar())!=EOF && c!='\n' && (c==' ' || c=='\t')){}
    if (c==EOF)
        return STOP;
    else if (c=='\n')
        return i;

    line[i] = c;
    ++i;

    while ( i<MAX && (c=getchar())!=EOF ){
        if (c==' ' || c=='\t'){
            spacebuffer[idx] = c;
            ++idx;
        }

        else if (c!='\n'){
            for (int x=0; x<idx; x++){
                line[i] = spacebuffer[x];
                ++i;
            }
            idx = 0;
            line[i] = c;
            ++i;
        }

        else if (c=='\n'){
            break;
        }
    }
    /* For debugging
    printf("i %d\n",i);
    */
    return i;
}

/* Prints character array of length len */
void display(char line[], int len){
    printf("------------------------\n");
    printf("space-trimmed line (%d):\n",len);
    for (int i=0; i<len; ++i)
        putchar(line[i]);
    printf("\n");
    printf("------------------------\n");
}
