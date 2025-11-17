// Online C compiler to run C program online
#include <stdio.h>

int main() {
double kmt;
double kulutus;
double hinta;
double budjetti;


printf("Anna matkan pituus kilometreinä: ");
scanf("%1f", &km);
printf("\nAnna kulutur litroina per 100 km: ");
scanf("%1f", &kulutus);
printf("\nAnna bensas litrahinta: ");
scanf("%1f", &hinta);
printf("Anna matkan pituus kilometreissä: ");
scanf("%1f", &km);

double matka_hinta = (km/100) * kulutus * hinta;
if (matka_hinta <= budjetti) {
    printf("Pystyt toteuttamaan matkan ja rahaa jää %1f", budjetti- matka_hinta);
}
else {
    printf("Rahaa tarvitsee matkaan lisää %1f\n, matka_hinta - budjetti");
}

    return 0;
}