#include <stdio.h>
#include <windows.h> // Bibliothèque contenant la fonction SetConsoleOutputCP()

int main(void)
{
    SetConsoleOutputCP(65001);

    char car;

    printf("Quel est votre caractère ?\n");
    scanf("%c", &car);
    getchar();

    if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u' || car == 'y') {
        printf("C'est une voyelle.");
    } else {
        printf("C'est une consonne.");
    }

    return 0;
}
