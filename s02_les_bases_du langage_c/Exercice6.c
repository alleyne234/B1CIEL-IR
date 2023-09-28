#include <stdio.h>

void inverser(int *a, int *b) {
    int z;

    z = *a;
    *a = *b;
    *b = z;
}

int main(void) {
    int x = 10;
    int y = 20;

    printf("x : %d\ny : %d\n", x, y);
    inverser(&x, &y);
    printf("x : %d\ny : %d\n", x, y);
}
