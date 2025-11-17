// Online C compiler to run C program online
#include <stdio.h>

float celciusToFahrenheir(float celcius) {
    return (celcius * 9 / 5) + 32;
}
int main() {
    float celcius;
    
    printf("Anna lämpötila: ");
    scanf("%f", &celcius);
    
    float fahrenheir = celciusToFahrenheir(celcius);
    printf("%.2f on %.2f Fahrenheir\n", celcius, fahrenheir);
    return 0;
}