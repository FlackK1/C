#include <stdio.h>
#include <time.h>

long laskePaiva(struct tm *alku, struct tm *loppu) {
    time_t alku_aika = mktime(alku);
    time_t loppu_aika = mktime(loppu);
    return (loppu_aika - alku_aika) / (60 * 60 * 24);
}

int main() {
    struct tm syntymaPaiva = {0}, nykyhetki = {0}, seuraavaSyntymapaiva = {0};
    time_t nyt = time(NULL);
    localtime_r(&nyt, &nykyhetki);

    printf("Anna syntymäpäiväsi (dd/mm/yyyy): ");
    scanf("%d %d %d", &syntymaPaiva.tm_mday, &syntymaPaiva.tm_mon, &syntymaPaiva.tm_year);
    syntymaPaiva.tm_mon -= 1;
    syntymaPaiva.tm_year -= 1900;

    long ikaPaivina = laskePaiva(&syntymaPaiva, &nykyhetki);
    printf("olet %ld päivää vanha.\n", ikaPaivina);

    seuraavaSyntymapaiva = nykyhetki;
    seuraavaSyntymapaiva.tm_year += (nykyhetki.tm_mon > syntymaPaiva.tm_mon || (nykyhetki.tm_mon == syntymaPaiva.tm_mon && nykyhetki.tm_mday >= syntymaPaiva.tm_mday));
    seuraavaSyntymapaiva.tm_mon = syntymaPaiva.tm_mon;
    seuraavaSyntymapaiva.tm_mday = syntymaPaiva.tm_mday;

    long paiviaSeuraavan = laskePaiva(&nykyhetki, &seuraavaSyntymapaiva);
    printf("Seuraavaan syntymäpäivään on %ld päivää.\n", paiviaSeuraavan);

    return 0;
}
