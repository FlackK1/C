#include <stdio.h>

int main() {
int luku;

printf("syötä luku: ");
scanf("%d", &luku);

if (luku > 100) {
printf("luku on yli 100\n");
} else if (luku >= -100 && luku <= 100) {
printf("luku on -100 ja 100 välissä\n");
} else {
printf("luku on alle -100\n");
}

    return 0;
}