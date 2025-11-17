#include <stdio.h>

int minimi(int a, int b) {
return (a < b) ? a : b;
}

int maksimi(int a, int b) {
return (a > b) ? a : b;
}

int main() {
int luku1, luku2;
    
printf("Syötä kaksi kokonaislukua: ");
scanf("%d %d", &luku1, &luku2);
printf("luku1-");
scanf("%d", &luku1);
printf("luku2-");
scanf("%d", &luku2);
    
printf("Pienempi luku: %d\n", minimi(luku1, luku2));
printf("Suurempi luku: %d\n", maksimi(luku1, luku2));
    
    return 0;
}