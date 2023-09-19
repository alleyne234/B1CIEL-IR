#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    char prenom[20] = "Alex";
    char nom[20] = "Wauquier";
    int age = 19;
    char lycee[20] = "Baggio";

    printf("- Prénom : %s\n", prenom);
    printf("- Nom : %s\n", nom);
    printf("- Âge : %d\n", age);
    printf("- Lycée : %s\n", lycee);

    return 0;
}