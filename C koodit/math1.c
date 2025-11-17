// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
float principle, rate, time, CI;

printf("Anna pääoman määrä:");
scanf("%f",&principle);
printf("Anna korkoprosentti:");
scanf("%f", &rate);
printf("sijoitusajan pituus vuosina:");
scanf("%f", &time);

CI = principle* (pow((1 + rate / 100), time));
 printf("Tuleva arvo: %f", CI);

    return 0;
}