#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d é um número par.\n", n);
    } else {
        printf("%d é um número ímpar.\n", n);
    }
    

    return 0;
}