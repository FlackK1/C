// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct Henkilo {
char nimi[50];
int ikä;
float pituus;  
};

int main() {
struct Henkilo henkilo;

strcpy(henkilo.nimi, "Matti Meikäläinen");
henkilo.ikä = 30;
henkilo.pituus = 175.5;
    
printf("henkilön tiedot:\n");
printf("nimi: %s\n", henkilo.nimi);
printf("ikä: %d\n", henkilo.ikä);
printf("pituus: %.1f\n", henkilo.pituus);

return 0;
}