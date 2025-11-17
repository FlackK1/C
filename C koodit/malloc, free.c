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
void tulostaTaulu(int *taulukko, int koko){
        printf("taulusi on: ");
        for (int i = 0; i < koko; i++){
            printf("%d", taulukko[i]);
        }
        printf("\n");
    }
int main() {
int koko;
printf("Anna taulukon koko:\n");
scanf("%d", &koko);
if (koko < 1) {
    printf("Liian pieni taulu\n");
    return 1;
}
int *taulukko = luoTaulukko(koko);
tulostaTaulu(taulukko, koko);
printf("\n");
free(taulukko);
    return 0;
}