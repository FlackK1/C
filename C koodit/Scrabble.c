// Online C compiler to run C program online
#include <stdio.h>

int main() {
char sana[31];
printf("Anna sana: ");
scanf("%30s", sana);
int i = 0;
int kokonaispisteet = 0;
while(sana[i] != '\0'){
    if (sana[i] >= 'a' && sana[i] <= 'z')
    sana[i] -= 32;
    switch(sana[i]) {
        case 'A': case 'E': case 'I': case 'O': case 'U': case 'L': case 'N': case 'R': case 'S': case 'T':
        kokonaispisteet += 1;
        break;
        case 'D': case 'G':
        kokonaispisteet += 2;
        break;
        case 'B': case 'C': case 'M': case 'P':
        kokonaispisteet += 3;
        break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
        kokonaispisteet += 4;
        break;
        case 'K':
        kokonaispisteet += 5;
        break;
        case 'J': case 'X':
        kokonaispisteet += 8;
        break;
        case 'Q': case 'Z':
        kokonaispisteet += 10;
        break;
    }

    i++;
}
    printf("sana on %s ja pisteet on %d\n", sana, kokonaispisteet);
    return 0;
}