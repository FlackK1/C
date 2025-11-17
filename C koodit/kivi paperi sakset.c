#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tietokoneenValinta() { return rand() % 3; }

void tarkistaVoittaja(int pelaaja, int tietokone) {
const char *valinta[] = {"kivi", "sakset", "paperi"};
if (pelaaja >= 0 && pelaaja <= 2) {
    
printf("Valitsit %s\n", valinta[pelaaja]);
printf("Tietokone valitsi %s\n", valinta[tietokone]);

if (pelaaja == tietokone) printf("tasapeli\n");
else if ((pelaaja == 0 && tietokone == 1) || (pelaaja == 1 && tietokone == 2) || (pelaaja == 2 && tietokone == 0)) printf("voitit\n");
else printf("hävisit\n");
}
}

int main() {
srand(time(NULL));
int pelaajanValinta;
char jatka;

do {
printf("Valitse:\n kivi\n sakset\n paperi\n");
scanf("%d", &pelaajanValinta);

int tietokone = tietokoneenValinta();
tarkistaVoittaja(pelaajanValinta, tietokone);
printf("Haluatko jatkaa? (K/k, E/e): ");

} while (jatka == 'K' || jatka == 'k');
scanf(" %c", &jatka);
return 0;
}