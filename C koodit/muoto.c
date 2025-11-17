Kaksi versiota, mutta kumpikaan ei toimi kunnolla.

#include <stdio.h>

int main() {
int luku1, luku2, i;

printf("luku1: ");
scanf("%d", &luku1);
printf("luku2: ");
scanf("%d", &luku2);

for (i = 0; i < luku2; i++) {
printf("*\n");
}

    return 0;
}


#include <stdio.h>

int main() {
int luku1, luku2, i, j;

printf("luku1: ");
scanf("%d", &luku1);
printf("luku2: ");
scanf("%d", &luku2);

for (i = 0; i < luku2; i++) {
printf("*\n");
for (i = 0; i < luku1; j++) {
    
}
}

    return 0;
}