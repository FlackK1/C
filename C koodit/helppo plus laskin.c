// Online C compiler to run C program online
#include <stdio.h>

int main() {
int num1;
int num2;

printf("Anna ensimmäinen luku: ");
scanf("%d", &num1);
printf("Anna toinen luku: ");
scanf("%d", &num2);

int summa = num1 * num2;

printf("summa on: %d", summa);
    return 0;
}