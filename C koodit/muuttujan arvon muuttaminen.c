#include <stdio.h>
#include <string.h>

int main() {
int X = 0;
char operaatio[10];
int koko;

printf("Anna operaatio: ");
scanf("%s", operaatio);

if (strcmp(operaatio, "--X") == 0) {
X -= 1;
} else if (strcmp(operaatio, "X--") == 0) {
X -= 1;
} else if (strcmp(operaatio, "++X") == 0) {
X += 1;
} else if (strcmp(operaatio, "X++") == 0) {
X += 1;
}

printf("X arvo on: %d\n", X);

return 0;
}