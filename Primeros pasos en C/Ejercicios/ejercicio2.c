#include <stdio.h>

// Celsius a Fahrenheit:

int main(){
    float temp_celsius;

    printf("Introduce la temperatura en Celsius: \n");
    scanf("%f", &temp_celsius);

    printf("%.2f Celsius son %.2f Fahrenheit!", temp_celsius, ((temp_celsius * 1.8) + 32));

    return 0;
} 