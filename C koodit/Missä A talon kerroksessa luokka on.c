// Online C compiler to run C program online
#include <stdio.h>

int main() {
int luokkanumero, ensimainennumero;
char paikkakoodi;

printf("Anna luokkasi paikkakoodi: ");
scanf("%c", &paikkakoodi);
printf("Anna luokkasi numero: ");
scanf("%d", &luokkanumero);

ensimainennumero = luokkanumero;
while(ensimainennumero >= 10) {
    ensimainennumero /= 10;
}
if (paikkakoodi >= 'a' && paikkakoodi <= 'z') {
    paikkakoodi -= 32;
}
switch (paikkakoodi) {
    case 'A':
    printf("Tuntisi on %c-talon %d:n kerroksen luokassa %d\n", paikkakoodi, ensimainennumero, luokkanumero);
    break;
    printf("Väärin");
    break;
    default:
    printf("Luokka ei ole Sturenkadun kampuksella");
}
    return 0;
}