/* MISSION: Reverse input one line(string) at a time */
#include<stdio.h>

#define MAX 1000

int getline(char line[]);
void reverse (char line[], int len);
void display (char line[], int len);

int main(){
    int len,c;
    char line[MAX];
    while( (len = getline(line)) > 0 ){
        reverse(line, len);
        display(line, len);
    }

    return 0;
}

int getline(char line[]){
    int c;
    int i;
    for(i=0; (c=getchar())!=EOF && (c!='\n'); ++i)
        line[i] = c;
    return i;
}

void reverse(char line[], int len){
    int mid = (len/2);
    int i=0;
    int j=len-1;
    while(i<=mid){
        int temp;
        temp = line[j];
        line[j] = line[i];
        line[i] = temp;
        ++i;
        --j;
    }
}

void display(char line[], int len){
    for(int i=0; i<len; i++)
        putchar(line[i]);

    printf("\n");
}
