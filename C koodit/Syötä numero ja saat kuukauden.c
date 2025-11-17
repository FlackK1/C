// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
int var;
    printf("Syötä numero 1-4 väliltä");
scanf("%d", &var);
  switch (var) {
      
case 1:
printf("kevät");
break;
case 2:
printf("kesä");
break;
case 3:
printf("syksy");
break;
case 4:
printf("talvi");
break;
default:
printf("virheellinen komento");
break;
 }
    return 0;
}