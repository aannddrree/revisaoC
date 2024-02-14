#include <locale.h> 
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("teste andré");
    return 0;
}