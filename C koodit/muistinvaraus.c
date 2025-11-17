#include <stdio.h>
#include <stdlib.h>

int main() {
int size;

printf("Syota positiivinen kokonaisluku: ");
scanf("%d", &size);
if (size <= 0) {
printf("virhe: syota positiivinen kokonaisluku.\n");
return 1;
}

int *array = (int*)malloc(size * sizeof(int));
if (array == NULL) {
printf("Muistinvaraus epaonnistui.\n");
return 1;
}

printf("syota %d kokonaislukua:\n", size);
for (int i = 0; i < size; ++i) {
scanf("%d", &array[i]);
}

printf("Taulukon arvot:\n");
for (int i = 0; i < size; ++i) {
printf("%d ", array[i]);
}

printf("\n");
free(array);
return 0;
}