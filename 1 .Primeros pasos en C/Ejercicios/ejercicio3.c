#include <stdio.h>

int main(){
    float radio;
    
    printf("Introduce el radio del círuclo: \n");
    scanf("%f", &radio);

    printf("El área del círculo de es de %.2f", ((radio*radio) * 3.1416));

    return 0;
}