#include <stdio.h>

#define LOWER 0   // lower_limit
#define UPPER 300 // upper_limit
#define STEP 20   // step size

int main(){
    /* Celsius to Fahrenheit Table Reverse Order

    for Celsius: 300, 280, 260 ... 0

    */
    float fahr, celsius;

    printf(" Celsius - Fahrenheit Table\n");
    printf(" --------------------------\n");

    celsius = UPPER;
    while (celsius>=LOWER){
        fahr = ((celsius*9)/5.0)+32;
        printf("%8.2f  %10.2f\n",celsius, fahr);


        celsius = celsius - STEP;
    }
    printf("Done\n");
    return 0;
}
