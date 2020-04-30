// Input

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float puntodec = 0; //Le decimos a la computadora que tipo de datos vamos almacenar en este espacio de memoria,
    //Despues le decimos como se llama ese espacio de memoria y por ultimo inicializamos esa variable con 0
    int num1 = 0; //Primera variable
    printf("Introduce un numero flotante: ");
    scanf("%f", &puntodec);
    printf("el numero que introduciste es: %0.2f ",puntodec);
    return 0;
}
