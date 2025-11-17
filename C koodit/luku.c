// Online C compiler to run C program online
#include <stdio.h>

int main() {
float num1, num2;
float *p1, *p2;
float sum, sub, mul, div;

printf("Anna ensimmäinen luku: ");
scanf("%f", &num1);
printf("Anna toinen luku: ");
scanf("%f", &num2);

p1 = &num1;
p2 = &num2;

sum = *p1 + *p2;
sub = *p1 - *p2;
mul = *p1 * *p2;
if (*p2 != 0)
div = *p1 / *p2;
else
div * 0;
printf("lukujen tulot ovat summa: %.2f\n sub: %.2f\n mul: %.2f\n div: %.2f", num1, num2, sum, sub, mul, div);
    return 0;
}