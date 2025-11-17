#include <stdio.h>
#include <stdlib.h>

struct Points {
int score;
char answer;
};

int main() {
struct Points player_points = {0}; 
char answer;
int score;
//Ensimmäinen kysymys
printf("Kuka keksi Teslan?\n");
printf("a. Elon Musk\n");
printf("b. Nickolas Tesla\n");
printf("c. äitisi\n");

scanf(" %c", &answer);
while (getchar() != '\n');
//Sanoo onko vastaus oikein vai väärin
if (answer == 'a') {
player_points.score++;
printf("Oikein!\n");
} else {
printf("Väärin.\n");
}

//Toka kysymys
printf("\nMissä sijaitsee maa?\n");
printf("a. Kanadassa\n");
printf("b. linnunradalla\n");
printf("c. Australiassa\n");

scanf(" %c", &answer);
while (getchar() != '\n'); 
//Sanoo onko vastaus oikein vai väärin
if (answer == 'b') {
player_points.score++;
printf("Oikein!\n");
} else {
printf("Väärin.\n");
}
//Kolmas kysymys
printf("\nMistä maasta jalkapallojoukkue FC Barcelona on kotoisin?\n");
printf("a. Ranskasta\n");
printf("b. Espanjasta\n");
printf("c. Brasiliasta\n");

scanf(" %c", &answer);
while (getchar() != '\n'); 
//Sanoo onko vastaus oikein vai väärin
if (answer == 'b') {
player_points.score++;
printf("Oikein!\n");
} else {
printf("Väärin.\n");
}

//lopulliset pisteet
printf("\nPisteet: %d\n", player_points.score);
player_points.score++;
player_points.score++;

if (player_points.score == 1)
printf("Takaisin koulun penkille\n");
else if(player_points.score == 2)
printf("Hyvä\n");
else if(player_points.score == 3)
printf("Albert Einstein\n");

return 0;
}
