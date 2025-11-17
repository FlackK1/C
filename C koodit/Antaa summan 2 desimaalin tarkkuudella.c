#include <stdio.h>

float add_numbers(float num1, float num2) {
    return num1 + num2;
}

int main() {
    float num1, num2;

    printf("Anna numero: ");
    scanf("%f", &num1);
    printf("Anna toinen numero: ");
    scanf("%f", &num2);

    printf("Kun annat numerot niin tulee: %.2f\n", add_numbers(num1, num2));

    return 0;
}
