// Online C compiler to run C program online
#include <stdio.h>
void kaannamerkkijono(char *str) {
    char *alku = str;
    char *loppu = str + strlen(str) - 1;
    while (alku < loppu) {
        char temp = *alku;
        *alku++ = *loppu;
        *loppu-- = temp;
    }
}
int main() {
char taulu[] = "kukkapuska";
printf("merkkijonosi on %s\n", taulu, strlen(taulu));
kaannamerkkijono(taulu);
printf("käänetty merkkijono on %s", taulu);

    return 0;
}