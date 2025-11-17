#include <stdio.h>
#include <time.h>

struct tm luePaivamaara() {
    struct tm aika = {0};
    printf("Anna päivämäärä (pp/kk/vvvv): ");
    
    if (scanf("%d/%d/%d", &aika.tm_mday, &aika.tm_mon, &aika.tm_year) != 3) {
        printf("Virheellinen syöte.\n");
        return (struct tm){0}; 
    }
    aika.tm_mon -= 1;  
    aika.tm_year -= 1900;  
    return aika;
}

int main() {
    struct tm paivamaara1 = luePaivamaara();
    if (paivamaara1.tm_year == 0 && paivamaara1.tm_mon == 0 && paivamaara1.tm_mday == 0) {
        return 1;  // Exit jos väärä päivämäärä
    }

    struct tm paivamaara2 = luePaivamaara();
    if (paivamaara2.tm_year == 0 && paivamaara2.tm_mon == 0 && paivamaara2.tm_mday == 0) {
        return 1;  // Exit jos väärä päivämäärä
    }

    time_t aika1 = mktime(&paivamaara1);
    time_t aika2 = mktime(&paivamaara2);

    
    if (aika1 == (time_t)-1 || aika2 == (time_t)-1) {
        printf("Virheellinen päivämäärä\n");
        return 1;  // Exit the program if the date is invalid
    }

    // laskee sekunttien erot päivämäärissä
    double sekuntteja = difftime(aika1, aika2);
    double paivia = sekuntteja / (60 * 60 * 24);  // muuta sekunnit päiviksi

    printf("Päivämääräero on %.0f päivää\n", paivia);

    return 0;
}
