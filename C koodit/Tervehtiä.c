// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
char komento[50];
printf("Komento vaihtoehdot- Moikkaa ja lopeta.\n");
while(1) {
    printf("Anna komento: ");
    scanf("%49s", komento);
    if (strcmp(komento, "Moi") == 0 ||
    strcmp(komento, "Päivää") == 0 ||
    strcmp(komento, "Hei") == 0 ||
    strcmp(komento, "Terve") == 0) {
    printf("Hei.\n");

    }
    else if (strcmp(komento, "lopeta") == 0) {
    printf("Ohjelma lopetettu.\n");
    break;
    }
    else {
        printf("Tuntematon komento, yritä uudestaan.\n");
    }
}