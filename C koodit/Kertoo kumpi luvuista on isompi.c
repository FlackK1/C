#include <stdio.h>

int main() {
int luku1, luku2;


printf("luku1: ");
scanf("%d", &luku1);

printf("luku2: ");
scanf("%d", &luku2);


if (luku1 > luku2) {
printf("%d on suurempi kuin %d\n", luku1, luku2);
} else if (luku2 > luku1) {
printf("%d on suurempi kuin %d\n", luku2, luku1);
} else {
printf("Luvut %d ja %d ovat saman kokoisia\n", luku1, luku2);
}

    return 0;
}