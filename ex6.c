#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Inserir números. Para sair, digite 0.\n");
    while (1) {
        printf("Número: ");
        scanf("%d", &n);

        if (n == 0) {
            break; 
        }
        s += n;
    }
    printf("A soma é: %d\n", s);
    return 0;
}
