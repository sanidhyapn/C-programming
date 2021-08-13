#include <stdio.h>

int main(){
    /* Fahrenheit to Celsius Table
    for Fahrenheit: 0, 20, 40 ... 300
    */
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit - Celsius Table\n");
    printf("---------------------------\n");

    fahr = lower;
    while (fahr<=upper){
        celsius = (fahr-32.0)*(5.0/9);
        printf("%10.2f  %8.2f\n",fahr,celsius);
        // %w.pf --> width.decimal_precision float
        // %wd --> width int
        fahr = fahr + step;
    }
    printf("Done\n");
    return 0;
}
