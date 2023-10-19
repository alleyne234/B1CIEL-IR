#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Exo04_structure.h" // Permet d'importer le fichier Exo04_structure.h

int main()
{
    T_PERSONNE joueur1;

    printf("Entrez le prenom du joueur : ");
    scanf("%s", joueur1.prenom);

    printf("Entrez le nom du joueur : ");
    scanf("%s", joueur1.nom);

    joueur1.score = 0;
    printf("Entrez la lettre correspondant au niveau du joueur : ");

    do
    {
        scanf("%c", &joueur1.niveau);
    } while(joueur1.niveau == '\n');

    printf("\n%s %s\n", joueur1.prenom, joueur1.nom);
    printf("Score : %d au niveau : %c\n\n", joueur1.score, joueur1.niveau);

    return EXIT_SUCCESS;
}