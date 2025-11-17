// Online C compiler to run C program online
#include <stdio.h>

int main() {
int luku1, luku2;

printf("Anna aloitusluku: ");
scanf("%d", &luku1);

printf("Anna lopetusluku: ");
scanf("%d", &luku2);
if (luku1 % 2 != 0)
luku1++;

while (luku1 <= luku2) {
    printf("%d\n", luku1);
    luku1+= 2;
}
    return 0;
}