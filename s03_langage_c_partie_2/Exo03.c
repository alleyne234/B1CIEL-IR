#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    char var1;
    int var2;
    float var3;
    char var4[10];

    printf("Veuillez saisir un caractère : ");
    scanf("%c", &var1);

    printf("Veuillez saisir une valeur entière : ");
    scanf("%d", &var2);

    printf("Veuillez saisir une valeur réelle : ");
    scanf("%f", &var3);

    printf("Veuillez saisir une chaîne de caractères : ");
    scanf("%s", &var4);

    printf("var1 : %c - var2 : %d - var3 : %.2f - La chaîne de caractères : %s", var1, var2, var3, var4);

    return 0;
}
