// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int valinta;
float num1, num2, sum;
printf("Anna valinta 1, 2 tai 3: ");
scanf("%d", &valinta);
switch(valinta) {
    case 1:
    printf("Hei maailma\n");
    break;
    case 2:
    printf("Anna luku: ");
scanf("%f", &num1);
printf("Anna toinen luku: ");
scanf("%f", &num2);
sum = num1 + num2;
printf("sum: %.2f\n", sum);
    break;
case 3:
printf("Ohjelma lopetettu\n");
    break;
    default:
    printf("Default\n");
    
}
return 0;
}