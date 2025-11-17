#include <stdio.h>

int main() {
int luku;
int summa = 0;

printf("luku 0 lopettaa ohjelman\n");
while (1) {
printf("Syötä luku: ");
scanf("%d", &luku);

summa += luku;

if (luku == 0) {
break;
}
}

printf("Syötettyjen lukujen summa: %d\n\n", summa);
printf("ohjelma loppui");
    return 0;
}