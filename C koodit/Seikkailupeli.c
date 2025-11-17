// Online C compiler to run C program online
#include <stdio.h>

int main() {
char option1, option2, option3, option4;

printf("Heräät pimeästä linnasta. Minne haluat mennä?\n");
printf("a. kirjasto\n");
printf("b. kellari\n");
printf("c. puutarha\n");

scanf("%c", &option1);

if (option1 == 'a.') {
    printf("Päädyt kirjastoon. Mitä haluat tehdä?\n");
    printf("a. vedä vivusta\n");
    printf("b. vedä kirja hyllystä\n");
    
    scanf("%c", &option2);
    
    if (option2 == 'a') {
        printf("Vedät vivusta, joka avaa salaisen tien alas ja }suoraan ulos. Pääsit pois linnasta\n");
       } else if (option2 == 'b') {
        printf("Vedit kirjasta, joka avasi sala käytävän. Joudut kirjahyllyn taakse jumiin, hävisit pelin\n");
       } else {
            printf("Game over :(\n");
       }
          }  else if (option1 == 'b') {
                printf("Menet portaita alas kellariin.\n Mitä haluat tehdä?\n");
                printf("a. mene piiloon\n");
                printf("b. älä mene piiloon\n");
                
                scanf("%c", option3);
                
                if (option3 == 'a') {
                    printf("Menit kaappiin piiloon, jolloin musta varjo ilmestyi ja katosi saman tien pois.\n Jäit kellariin jumiin ja hävisit pelin\n");
                   } else if (option3 == 'b') {
                    printf("Musta varjo ilmestyi eteesi ja päätti saattaa sinut ulos linnasta.\n Pääsit ulos linnasta ja sait ystävän\n");
                   } else {
                    printf("\nGame over :(\n");
                    }
                   } else if (option1 == 'c') {
                        printf("Löydät itsesi puutarhasta.\n Mitä haluat tehdä?\n");
                        printf("a. kiipeä aidan yli.\n");
                        printf("b. etsi toinen uloskäynti.\n");
                        scanf("%c", &option4);
                        
                        if (option4 == 'a') {
                            printf("Löydät tarpeeksi vahvuutta ja kiipesit portin yli.\n Pääsit pois linnasta.");
                           } else if (option4 == 'b') {
                                printf("Kävelet suoraan myrkky kasvien luokse ja kuolet hitaasti. Hävisit pelin\n");
                           }
                               } else{
                                printf("Game over");
                            }

    return 0;
}