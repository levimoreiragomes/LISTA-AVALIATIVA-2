#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
