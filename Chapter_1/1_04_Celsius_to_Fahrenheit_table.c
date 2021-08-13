#include <stdio.h>

int main(){
    /* Celsius to Fahrenheit Table
    
    for Celsius: 0, 20, 40 ... 300
        
    */
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    printf(" Celsius - Fahrenheit Table\n");
    printf(" --------------------------\n");

    celsius = lower;
    while (celsius<=upper){
        fahr = ((celsius*9)/5.0)+32;
        printf("%8.2f  %10.2f\n",celsius, fahr);

        celsius = celsius + step;
    }
    printf("Done\n");
    return 0;
}
