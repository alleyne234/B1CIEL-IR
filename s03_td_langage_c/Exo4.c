#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    int first_number;
    int second_number;

    printf("Quel est votre premier entier ?\n");
    scanf("%d", &first_number);
    getchar();

    printf("Quel est votre deuxième entier ?\n");
    scanf("%d", &second_number);
    getchar();

    if (first_number < second_number) {
        printf("%d\n", first_number);
        printf("%d\n", second_number);
    } else {
        printf("%d\n", second_number);
        printf("%d\n", first_number);
    }

    return 0;
}
