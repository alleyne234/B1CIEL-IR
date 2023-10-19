#include <stdio.h>
#include <stdlib.h>
#define NB_VAL 5

int main(void)
{
    int ligne;
    int colonne;

    for (ligne = 0; ligne < NB_VAL; ligne++) {
        for (colonne = 0; colonne < NB_VAL; colonne++) {
            printf("X ");
        }
        printf("\n");
    }

    return 0;
}
