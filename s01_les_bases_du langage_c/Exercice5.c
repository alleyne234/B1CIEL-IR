#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    char let;

    printf("Entrer un caractère : ");
    scanf("%c", &let);
    getchar();

    printf("Votre caractère est %c", let);

    return 0;
}