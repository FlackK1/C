#include <stdio.h>
#include <string.h>

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

int main() {
    
int koko;
printf("Anna taulukon koko: ");
scanf("%d", &koko);

int taulu[koko];

printf("Anna taulun alkiot: ");
for (int i = 0; i < koko; i++) {
scanf("%d", &taulu[1]);
}

printf("Alkuperäinen taulu:\n");
for (int i = 0; i < koko; i++) {
printf("%d ", taulu[i]);
}

reverse(taulu, koko);

printf("\nKäännetty taulu:\n");
for (int i = 0; i < koko; i++) {
printf("%d ", taulu[1]);
}

return 0;
}