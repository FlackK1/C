#include <stdio.h>
#include <string.h>

struct Opiskelija {
char nimi[50];
int ika;
int num1;
int num2;
};

void tulostaOpiskelija(struct Opiskelija *opiskelija) {
printf("Opiskelijan tiedot:\n");
printf("Nimi: %s\n", opiskelija->nimi);
printf("Ikä: %d\n", opiskelija->ika);
printf("Opiskelijanumero: %d\n", opiskelija->num1);
printf("Keskiarvo: %d\n", opiskelija->num2);
}

int main() {
struct Opiskelija opiskelijat[3];
    
strcpy(opiskelijat[0].nimi, "Sauli Niinistö");
opiskelijat[0].ika = 35;
opiskelijat[0].num1 = 111;
opiskelijat[0].num2 = 45;

strcpy(opiskelijat[1].nimi, "Mom's Spaghetti");
opiskelijat[1].ika = 21;
opiskelijat[1].num1 = 222;
opiskelijat[1].num2 = 42;

strcpy(opiskelijat[2].nimi, "Jurassic Park");
opiskelijat[2].ika = 52;
opiskelijat[2].num1 = 333;
opiskelijat[2].num2 = 39;

for (int i = 0; i < 3; ++i) {
printf("\nOpiskelija %d:\n", i + 1);
tulostaOpiskelija(&opiskelijat[i]);
}

return 0;
}