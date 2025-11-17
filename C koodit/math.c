#include <stdio.h>
#include <math.h>

int main() {
float x;
float y;
float z; 

printf("Anna yhden sivun pituus:");
scanf("%f",&x );
printf("Anna toisen sivun pituus:");
scanf("%f", &y);

z = pow(x, 2) + pow(y, 2);

printf("%.1f^2 + %.1f^2 = %.2f\n", x, y, z);

return 0;
}