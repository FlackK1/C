#include <stdio.h>

struct Opiskelija {
char nimi[50];
int ika;
int num1;
int num2;
};

void tulostaOpiskelija(struct Opiskelija opiskelija) {
printf("Opiskelijan tiedot:\n");
printf("Nimi: %s\n", opiskelija.nimi);
printf("Ikä: %d\n", opiskelija.ika);
printf("Opiskelijanumero: %d\n", opiskelija.num1);
printf("Keskiarvo: %d\n", opiskelija.num2);
}

int main() {
struct Opiskelija opiskelija;
    
printf("Anna opiskelijan nimi: ");
scanf("%s", opiskelija.nimi);
printf("Anna ikä: ");
scanf("%d", &opiskelija.ika);
printf("Anna opiskelijanumero: ");
scanf("%d", &opiskelija.num1);
printf("Anna keskiarvo: ");
scanf("%d", &opiskelija.num2);
 
tulostaOpiskelija(opiskelija);

return 0;
}