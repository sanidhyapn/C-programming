#include <stdio.h>

// function prototype ----------------------------------
char menu();
void FtoC();
void CtoF();

// PROGRAM: Conversion between Celsius to Fahrenheit -----
int main(void)
{
  int choice;

  choice = menu();

  if (choice=='1'){
    CtoF();
  }
  else if (choice=='2'){
    FtoC();
  }
  else{
    printf("Invalid choice.");
  }

  printf("\n");
  return 0;
}

//function definitions-----------------------
char menu(){
    char response;
    //int response;
    printf("[ Menu ]\n\n");
    printf("1. C -> F\n");
    printf("2. F -> C\n\n");
    printf("Choice: ");
    response = getchar();
    //scanf("%d", &response);
    //printf("Response was: %d", response);
    return response;
}

void CtoF(){
    float fahr, celsius;
    printf("Input Celsius: ");
    scanf("%f",&celsius);
    fahr = ((celsius*9)/5.0)+32;
    printf("Output Fahrenheit: %.2f", fahr);
}

void FtoC(){
    float fahr, celsius;
    printf("Input Fahrenheit: ");
    scanf("%f",&fahr);
    celsius = (fahr-32.0)*(5.0/9);
    printf("Output Celsius: %.2f", celsius);
}
