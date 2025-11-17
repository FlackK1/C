#include <stdio.h>
#include <math.h>

int main() {
    double kulma;
    int valinta;
    
    printf("1. asteet -> radiaanit\n");
    printf("2. radiaanit -> asteet\n");
    printf("Anna valinta:");
    scanf("%d", &valinta);

    switch(valinta) {
   case 1:
    printf("Anna kulma asteina:");
    scanf("%lf", &kulma);
    printf("kulma radiaaneina: %.2f\n", kulma * M_PI / 180.0);
    break;
    case 2:
    printf("anna kulma radiaaneina:");
    scanf("%lf", &kulma);
    printf("Kulma asteina: %.2f\n", kulma * 180.0 / M_PI);
    break;
    default:
    printf("Väärä valinta\n");
    break;
    }

    return 0;
}
