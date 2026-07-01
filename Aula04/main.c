//4.2
#include <stdio.h>

int main() {

    int numero = 15;
    int *p = &numero;

    printf("Valor: %d\n", numero);
    printf("Endereco: %p\n", &numero);

    return 0;
}

//4.3
#include <stdio.h>

int main() {

    int valor = 20;
    int *p = &valor;

    *p = 50;

    printf("%d\n", valor);

    return 0;
}

//4.4
#include <stdio.h>

void dobrar(int *x){
    *x *= 2;
}

int main(){

    int numero = 10;

    dobrar(&numero);

    printf("%d", numero);

    return 0;
}
