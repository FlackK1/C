// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int *luoTaulukko(int koko){
int *taulukko = (int *)malloc(koko * sizeof(int));
if (taulukko == NULL){
printf("muistin varaaminen epäonnistui\n");
for (int i = 0; i < koko; i++){
taulukko[i] = 0;
exit(1);
}
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
void tulostaTaulu(int *taulukko, int koko){
for (int i = 0; i < koko; i++){
printf("%d", taulukko[i]);
}
printf("\n");
    }
    
int main() {
    int koko;
    int alkio;
    int steps;
  
}
    
printf("anna taulukon koko: ");
scanf("%d", &koko);

printf("\nkuinka monta askelta rotaatioon: ");
scanf("%d", &steps);

printf("\nAnna 5 alkiota: ");
scanf("%d", &alkio);

printf("\ntaulukon tila rotaation jälkeen:%d ");
scanf("%d", &koko);

    return 0;
}