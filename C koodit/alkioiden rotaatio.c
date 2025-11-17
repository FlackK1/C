
#include <stdio.h>
#include <stdlib.h>

int* luoTaulukko(int koko) {
int *taulukko = malloc(koko * sizeof(int));
if (taulukko == NULL) {
printf("Muistin varaaminen epäonnistui\n");
exit(1);
}
for (int i = 0; i < koko; i++) {
taulukko[i] = 0;
}
return taulukko;
}

void reverse(int *taulu, int koko) {
int *alku = taulu;
int *loppu = taulu + koko - 1;
while (alku < loppu) {
int temp = *alku;
*alku = *loppu;
*loppu = temp;
alku++;
loppu--;
}
}

void tulostaTaulu(int *taulukko, int koko) {
for (int i = 0; i < koko; i++) {
printf("%d ", taulukko[i]);
}
printf("\n");
}

int main() {
int koko;
int *taulukko;
int alkio;
int steps;

printf("Anna taulukon koko: ");
scanf("%d", &koko);

taulukko = luoTaulukko(koko);

printf("\nAnna %d alkiota: ", koko);
for (int i = 0; i < koko; i++) {
scanf("%d", &alkio);
taulukko[i] = alkio;
}

printf("\nKuinka monta askelta rotaatioon: ");
scanf("%d", &steps);
reverse(taulukko, koko);
printf("\nTaulukko rotaation jälkeen: ");
tulostaTaulu(taulukko, koko);


free(taulukko);
return 0;
}