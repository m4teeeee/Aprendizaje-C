#include <stdio.h>

// Solución 1:

int main(){
    int num1; int num2; // Se declaran de que tipo deon las variables, 'int' de 'enteros' y seguido el nombre que queremos que tengan.

    printf("Ingrese el primer número por favor: \n"); // <---- Se muestra por pantalla el mensaje.
    scanf("%d", &num1); // Usamos la función scanf() para pedirle al usuario que ingrese un dato, aclaramos que tiene que ser de tipo 'int' con el "%d",
                        // Y que vamos a guardar el dato en la dirección de memoria de num1 con el '&'. 

    printf("Ingrese el segundo número por favor:\n"); // Pedimos segundo número.
    scanf("%d", &num2);

    printf("El resultado de la suma de los números introducidos es: %d", (num1 + num2));

    return 0;
}