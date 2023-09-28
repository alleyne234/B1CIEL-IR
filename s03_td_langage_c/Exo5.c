#include <stdio.h>

int main(void)
{
    int first_number;
    int second_number;
    int third_number;

    printf("Entrer trois entiers :\n");
    scanf("%d", &first_number);
    getchar();
    scanf("%d", &second_number);
    getchar();
    scanf("%d", &third_number);
    getchar();

    if(first_number > second_number && first_number > third_number) {
        printf("La plus grande valeur est %d.", first_number);
    } else {
        if(second_number > third_number) {
        printf("La plus grande valeur est %d.", second_number);
        } else {
        printf("La plus grande valeur est %d.", third_number);
        }
    }
    
    return 0;
}
