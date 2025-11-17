#include <stdio.h>

int taulukonMinimi(int taulukko[], int koko) {
int min = taulukko[0];

for (int i = 1; i < koko; ++i) {
if (taulukko[i] < min) {
min = taulukko[i];
}
}

return min;
}

int taulukonMaksimi(int taulukko[], int koko) {
int max = taulukko[0]; 

for (int i = 1; i < koko; ++i) {
if (taulukko[i] > max) {
max = taulukko[i];
}
}

return max;
}

int main() {
int taulukko[] = {5, 3, 8, 1, 9};
int koko = sizeof(taulukko) / sizeof(taulukko[0]);

int min = taulukonMinimi(taulukko, koko);
int max = taulukonMaksimi(taulukko, koko);

printf("Taulukon pienin arvo: %d\n", min);
printf("Taulukon suurin arvo: %d\n", max);

return 0;
}