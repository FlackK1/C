#include <stdio.h>
#include <stdlib.h>

void vaihda(int *osoitin1, int *osoitin2) {
int temp = *osoitin1;
*osoitin1 = *osoitin2;
*osoitin2 = temp;
}

int main() {
int luku1;
int luku2;

printf("Anna kokonaisluvut\n");
printf("luku1-");
scanf("%d", &luku1);
printf("luku2-");
scanf("%d", &luku2);

printf("\nennen vaihtoa:\n");
printf("luku1 = %d\n", luku1);
printf("luku2 = %d\n", luku2);

vaihda(&luku1, &luku2);

printf("\nvaihto:\n");
printf("luku1 = %d\n", luku1);
printf("luku2 = %d\n", luku2);

return 0;
}