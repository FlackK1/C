#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Henkilo {
char nimi[50];
int ika;
float pituus;  
};

void tulostaHenkilo(struct Henkilo henkilo) {
printf("henkilön tiedot:\n");
printf("nimi: %s\n", henkilo.nimi);
printf("ikä: %d\n", henkilo.ika);
printf("pituus: %.1f\n", henkilo.pituus);
}
int main() {
struct Henkilo henkilo[3];
    
strcpy(henkilo[0].nimi, "Sauli Niinistö");
henkilo[0].ika = 11;
henkilo[0].pituus = 150;

strcpy(henkilo[1].nimi, "Justin Bieber");
henkilo[1].ika = 34;
henkilo[1].pituus = 422;

strcpy(henkilo[2].nimi, "Teemu Joini");
henkilo[2].ika = 22;
henkilo[2].pituus = 139;

for (int i = 0; i < 3; ++i) {
printf("\nHenkilo %d:\n", i + 1);
tulostaHenkilo(henkilo[i]);
}
return 0;
}