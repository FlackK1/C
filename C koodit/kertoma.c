#include <stdio.h>

unsigned long long kertoma(int n) {
if (n == 0) {
return 1;
} else {
return n * kertoma(n - 1);
}
}

int main() {
int luku;

printf("Anna luku: ");
scanf("%d", &luku);
if (luku < 0) {
    
printf("negatiivisilla luvuilla ei voi laskea\n");
} else {
printf("Kertoma on: %llu\n", kertoma(luku));
}

return 0;
}