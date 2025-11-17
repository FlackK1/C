#include <stdio.h>

int onKarkausVuosi(int vuosi) {
return (vuosi % 4 == 0 && vuosi % 100 != 0) || vuosi % 400 == 0;
}

void tulostaPaivamaara(int paiva, int kuukausi, int vuosi) {

const char *kuukaudet[12] = {"Tammikuuta", "Helmikuuta", "Maaliskuuta", "Huhtikuuta", "Toukokuuta", "Kesäkuuta", "Heinäkuuta", "Elokuuta", "Syyskuuta", "Lokakuuta", "Marraskuuta", "Joulukuuta"};

int paivatKuukaudessa[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if (onKarkausVuosi(vuosi)) {
paivatKuukaudessa[1] = 29;
}

if (kuukausi < 1 || kuukausi > 12) {
printf("Kuukauden pitää olla numero muodossa\n");
return;
}

if (paiva < 1 || paiva > paivatKuukaudessa[kuukausi - 1]) {
printf("Väärin\n");
return;
}

printf("%d. %s %d\n", paiva, kuukaudet[kuukausi - 1], vuosi);
}
int main() {
int paiva, kuukausi, vuosi;

printf("Anna päivä, kuukausi ja vuosi: ");
scanf("%d %d %d", &paiva, &kuukausi, &vuosi);
    
tulostaPaivamaara(paiva, kuukausi, vuosi);
    
return 0;
}