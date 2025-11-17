#include <stdio.h>

int main() {
    char sanat[5][31];
    int pisteet[5] = {0};
    int i, j, kokonaispisteet = 0;

    for (i = 0; i < 5; i++) {
        printf("Anna sana %d: ", i + 1);
        scanf("%30s", sanat[i]);
        j = 0;
    
        while (sanat[i][j] != '\0') {
            if (sanat[i][j] >= 'a' && sanat[i][j] <= 'z')
                sanat[i][j] -= 32;
            switch (sanat[i][j]) {
                case 'A': case 'E': case 'I': case 'O': case 'U': case 'N': case 'R': case 'S': case 'T':
                    pisteet[i] += 1;
                    break;
                case 'D': case 'G':
                    pisteet[i] += 2;
                    break;
                case 'B': case 'C': case 'M': case 'P':
                    pisteet[i] += 3;
                    break;
                case 'F': case 'H': case 'V': case 'W': case 'Y':
                    pisteet[i] += 4;
                    break;
                case 'K':
                    pisteet[i] += 5;
                    break;
                case 'J': case 'X':
                    pisteet[i] += 8;
                    break;
                case 'Q': case 'Z':
                    pisteet[i] += 10;
                    break;
                default:
                    printf("Kirjainta ei ollut listassa!\n");
            }
            j++;
        }
        kokonaispisteet += pisteet[i];
    }

    printf("Kierrosten yhteispisteet ovat: %d\n", kokonaispisteet);

    return 0;
}