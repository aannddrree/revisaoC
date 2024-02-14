#include <stdio.h>
int main() {
    char op;
    double n1, n2, resultado;
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite o primeiro número: ");
    scanf("%lf", &n1);
    printf("Digite o segundo número: ");
    scanf("%lf", &n2);
    switch (op) {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n1;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                resultado = n1 / n1;
            } else {
                printf("Erro! Divisão por zero!\n");
                return 1; 
            }
            break;
        default:
            printf("Operação inválida.\n");
            return 1; 
    }
    printf("Resultado: %.2lf\n", resultado);
    return 0;
}
