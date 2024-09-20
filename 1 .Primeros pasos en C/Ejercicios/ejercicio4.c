#include <stdio.h>

int main(){
    float num1, num2, num3;

    printf("Ingrese a continuación los 3 números a promediar por favor: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    printf("El promedio de esos 3 número es de %.3f", (num1 + num2 + num3) / 3);

    return 0;
}