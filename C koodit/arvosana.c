#include <stdio.h>

int main() {
int arvosana;

printf("Anna arvosana 1-5: ");
scanf("%d", &arvosana);

switch (arvosana) {
case 1:
printf("huono\n");
break;
case 2:
printf("välttävä\n");
break;
case 3:
printf("hyvä\n");
break;
case 4:
printf("hyvä\n");
break;
case 5:
printf("erinomainen\n");
break;

default:
}

return 0;
}