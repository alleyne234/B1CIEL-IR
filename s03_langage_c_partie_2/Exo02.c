#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Echanger(int *_min, int *_max)
{
    int aux;

    aux = *_min;
    *_min = *_max;
    *_max = aux;
}

int main(void)
{
    SetConsoleOutputCP(65001);

    int first_number;
    int second_number;

    printf("Saisir deux nombres :\n");
    scanf("%d", &first_number);
    scanf("%d", &second_number);

    if (first_number > second_number) {
        Echanger(&first_number, &second_number);
    }

    printf("%d est inférieur ou égal à %d", first_number, second_number);

    return 0;
}