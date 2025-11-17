// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
int ajastin;

printf("Aseta ajastin:");
scanf("%d", &ajastin);
time_t alku = time(NULL);

while(1){
    time_t nyt = time(NULL);
    int kulunutAika = nyt - alku;
    if (kulunutAika >= ajastin){
        printf("\nAjastin päättyi");
        break;
        }else{
            printf("Ajastin %d sekunttia jäljellä\n", ajastin - kulunutAika);
            fflush(stdout);
        }
        sleep(1);
    }

    return 0;
}