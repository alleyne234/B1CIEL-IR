#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Entrer un nombre : ");
    scanf("%d", &nombre);
    getchar();

    int est_pair = nombre % 2;

    if (est_pair == 0) {
        printf("1"); // Nombre pair
    } else {
        printf("0"); // Nombre impaire
    }

    return 0;
}
