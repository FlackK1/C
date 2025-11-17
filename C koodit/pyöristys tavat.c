// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
double luku;

printf("Anna liukuluku: ");
scanf("%lf", &luku);

printf("floor(%f) = %f\n", luku, floor(luku));
printf("ceil(%f) = %f\n", luku, ceil(luku));
printf("round(%f) = %f\n", luku, round(luku));
printf("trunc(%f) = %f\n", luku, trunc(luku));

printf("lähin kymmenesosa %.lf\n", round(luku * 10) / 10);
printf("lähin sadasosa %.2f\n", round(luku * 100) / 100);
printf("lähin tuhannesosa %.3f\n", round(luku * 1000) / 1000);
    return 0;
}