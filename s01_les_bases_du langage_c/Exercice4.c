#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    char prenom[20] = "Alex";
    int tableau[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("1ère valeur du tableau : %d\n", tableau[0]);
    printf("2ème valeur du tableau : %d\n", tableau[1]);
    printf("3ème valeur du tableau : %d\n", tableau[3]);
    printf("4ème valeur du tableau : %d\n", tableau[2]);
    printf("5ème valeur du tableau : %d\n", tableau[4]);
    printf("6ème valeur du tableau : %d\n", tableau[5]);
    printf("7ème valeur du tableau : %d\n", tableau[6]);
    printf("8ème valeur du tableau : %d\n", tableau[7]);
    printf("9ème valeur du tableau : %d\n", tableau[8]);
    printf("10ème valeur du tableau : %d\n\n", tableau[9]);

    printf("Code ASCII de %c est : %d\n", prenom[0], prenom[0]);
    printf("Code ASCII de %c est : %d\n", prenom[1], prenom[1]);
    printf("Code ASCII de %c est : %d\n", prenom[2], prenom[2]);
    printf("Code ASCII de %c est : %d\n", prenom[3], prenom[3]);

    return 0;
}