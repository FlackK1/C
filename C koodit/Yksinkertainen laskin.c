#include <stdio.h>

int main() {
    int num1, num2;
    float jako;

    printf("Anna ensimmäinen luku: ");
    scanf("%d", &num1);

    printf("Anna toinen luku: ");
    scanf("%d", &num2);

    int tulo = num1 * num2;
    int summa = num1 + num2;

    // Tarkistetaan, että jakaminen on mahdollista
    if (num2 != 0) {
        jako = (float)num1 / num2;
        printf("Jako: %.2f\n", jako);
    } else {
        printf("Jaon laskeminen ei ole mahdollista, koska jakaja on nolla.\n");
    }

    printf("Luvut: %d ja %d\n", num1, num2);
    printf("Summa: %d\n", summa);
    printf("Tulo: %d\n", tulo);

    return 0;
}
