// Online C compiler to run C program online
#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
return (celsius * 9 / 5) + 32;
}

int main() {
float celsius, fahrenheit;
    
printf("Anna lämpötila celsius asteina: ");
scanf("%f", &celsius);
    
fahrenheit = celsiusToFahrenheit(celsius);
    
printf("%.2f celsius astetta on %.2f fahrenheit astetta.\n", celsius, fahrenheit);
    
return 0;
}