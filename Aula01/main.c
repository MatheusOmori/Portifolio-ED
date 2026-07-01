//1.2
#include <stdio.h>

int main() {
    int idade = 25;
    float media = 7.5;
    char resposta = 'S';

    return 0;
}

//1.3
#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;

    int inteiro = a / b;
    float real = 5.0 / 2.0;

    a += 5;
    a++;

    return 0;
}

//1.4
#include <stdio.h>

int main() {

    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}
