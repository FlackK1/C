#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 50

struct Opiskelija {
char nimi[MAX_NAME_LENGTH];
int opiskelijanumero;
int ika;
int* arvosanat;
float keskiarvo;
};

void lisaa_opiskelija(struct Opiskelija opiskelijat[], int*opiskelijoiden_lkm) {
if (*opiskelijoiden_lkm >= MAX_STUDENTS) {
printf("Opiskelijoiden maksimimäärä\n");
return;
}

struct Opiskelija uusi_opiskelija;
printf("Anna opiskelijan nimi: ");
scanf("%s", uusi_opiskelija.nimi);
printf("Anna opiskelijanumero: ");
scanf("%d", &uusi_opiskelija.opiskelijanumero);
printf("Anna opiskelijan ikä: ");
scanf("%d", &uusi_opiskelija.ika);

uusi_opiskelija.arvosanat = (int*)malloc(5 * sizeof(int));
printf("Anna opiskelijan arvosanat (5 arvosanaa): ");
for (int i = 0; i < 5; i++) {
scanf("%d", &uusi_opiskelija.arvosanat[i]);
}

opiskelijat[*opiskelijoiden_lkm] = uusi_opiskelija;
(*opiskelijoiden_lkm)++;
}

void tulosta_opiskelija(struct Opiskelija opiskelija) {
printf("Nimi: %s\n", opiskelija.nimi);
printf("Opiskelijanumero: %d\n", opiskelija.opiskelijanumero);
printf("Ikä: %d\n", opiskelija.ika);  
printf("Arvosanat: ");
for (int i = 0; i < 5; i++) {
printf("%d ", opiskelija.arvosanat[i]);
}

printf("\n");
printf("Keskiarvo on: %.2f\n", opiskelija.keskiarvo);
}

void laske_keskiarvo(struct Opiskelija* opiskelijat, int
opiskelijoiden_lkm) {
for (int i = 0; i < opiskelijoiden_lkm; i++) {
float summa = 0;
for (int j = 0; j < 5; ++j) {
summa += opiskelijat[i].arvosanat[j];
}
opiskelijat[i].keskiarvo = summa / 5.0;
}
}

void paivita_arvosanat(struct Opiskelija* opiskelijat, int
opiskelijoiden_lkm, int opiskelijanumero) {
for (int i = 0; i < opiskelijoiden_lkm; i++) {
if (opiskelijat[i].opiskelijanumero == opiskelijanumero) {
printf("Syötä uudet arvosanat opiskelijalle %s: ", opiskelijat[i].nimi);
for (int j = 0; j < 5; j++) {
scanf("%d", &opiskelijat[i].arvosanat[j]);
}

return;
}
}
printf("Opiskelijaa %d ei löytynyt.\n", opiskelijanumero);
}

int main() {
struct Opiskelija opiskelijat[MAX_STUDENTS];
int opiskelijoiden_lkm = 0;
int valinta;

do {
    
printf("1.lisää uusi opiskelija\n");
printf("2.anna lista opiskelijoista\n");
printf("3.uusi opiskelijan arvosanat\n");
printf("\nValinta: ");
scanf("%d", &valinta);

switch (valinta) {
    
case 1:
lisaa_opiskelija(opiskelijat, &opiskelijoiden_lkm);
laske_keskiarvo(opiskelijat, opiskelijoiden_lkm);
break;

case 2:
for (int i = 0; i < opiskelijoiden_lkm; i++) {
tulosta_opiskelija(opiskelijat[i]);
}
break;

 
case 3:
if (opiskelijoiden_lkm == 0) {
printf("Ei opiskelijoita.\n");

break;
}
int opiskelijanumero;
printf("Anna opiskelijanumero, jonka arvosanoja haluat päivittää: ");
scanf("%d", &opiskelijanumero);
paivita_arvosanat(opiskelijat, opiskelijoiden_lkm, opiskelijanumero);
laske_keskiarvo(opiskelijat, opiskelijoiden_lkm);
break;

case 4:
printf("Ohjelma lopetetaan\n");
break;
default:
printf("Virheellinen valinta\n");
}

} while (valinta != 4);

for (int i = 0; i < opiskelijoiden_lkm; i++) {
free(opiskelijat[i].arvosanat);
}

return 0;
}