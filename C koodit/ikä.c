// Online C compiler to run C program online
#include <stdio.h>

int main() {
int N;

printf("Anna ikäsi: ");
scanf("%d", &N);

if (N < 18)
printf("%d on lapsi", N);

else if (N < 100)
printf("%d on aikuinen", N);


    return 0;
}