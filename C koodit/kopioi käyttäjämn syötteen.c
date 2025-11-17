#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* kopioiMerkkijono(const char* alkuperainen) {
size_t pituus = strlen(alkuperainen);

char* kopio = (char*)malloc((pituus + 1) * sizeof(char));
strcpy(kopio, alkuperainen);
return kopio;
}

int main() {
    
const char* alkuperainen = "kopioitu";
char* kopioitu = kopioiMerkkijono(alkuperainen);

printf("Anna merkkijono:");
scanf("%s", kopioitu);
printf("Kopioitu merkkijono: %s", kopioitu);


free(kopioitu);
return 0;
}