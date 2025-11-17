#include <stdio.h>
#include <string.h>

int main() {
char merkkijono[100];
int vokaalit = 0, konsonantit = 0;

printf("Syötä merkkijono: ");
scanf("%s", merkkijono);
char *osoitin = merkkijono;

while (*osoitin) {
char merkki = tolower(*osoitin);
if (merkki == 'a' || merkki == 'e' || merkki == 'i' || merkki == 'o' || merkki == 'u') {
vokaalit++;
} else if ((merkki >= 'a' && merkki <= 'z') || (merkki >= 'A' && merkki <= 'Z')) {
konsonantit++;
}
osoitin++;
}

printf("Vokaalien määrä: %d\n", vokaalit);
printf("Konsonanttien määrä: %d\n", konsonantit);

return 0;
}