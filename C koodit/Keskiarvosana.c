// Online C compiler to run C program online
#include <stdio.h>

int main() {
char nimi[50];
int kurssien_maara;
double summa = 0;

printf("Anna nimesi: ");
scanf("%s", nimi);

printf("Terve, %s!\n", nimi);
printf("Montako kurssia olet suorittanut?");
scanf("%d", &kurssien_maara);

for (i = 0; i < kurssien_maara; i++) {
    char kurssien_nimi[50];
    int arvosana;
    
    printf("Anna %d ja kurssin nimi: ", i + 1);
    scanf("%s", kurssien_nimi);
    
    printf("Anna %s kurssin arvosana: ", kurssien_nimi);
    scanf("%d", &arvosana);
    
    summa += arvosana;
    
    double keskiarvo = summa / kurssien_maara;
    printf("Kurssien keskiarvo on: %.2f\n", keskiarvo);
}
    return 0;
}