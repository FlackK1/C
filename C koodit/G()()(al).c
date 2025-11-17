#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interpret(char* command) {
char* ptr = command;
while (*ptr != '\0') {
if (*ptr == 'G') {
printf("G");
} else if (*ptr == '(' && *(ptr + 1) == ')') {
printf("o");
ptr++;
} else if (*ptr == '(' && *(ptr + 1) == 'a' && *(ptr + 2) == 'l' && *(ptr + 3) == ')') {
printf("al");
ptr += 3;
}
ptr++;
}
}

int main() {
char command[100];

printf("Syötä komento: ");
fgets(command, sizeof(command), stdin);
if (command[strlen(command) - 1] == '\n') {
command[strlen(command) - 1] = '\0';
}

interpret(command);

printf("\n");
return 0;
}