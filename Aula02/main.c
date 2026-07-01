//2.2
#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Numero par.\n");
    }else{
        printf("Numero impar.\n");
    }

    return 0;
}

//2.3
#include <stdio.h>

int main(){

    float nota;

    printf("Digite a nota: ");
    scanf("%f",&nota);

    if(nota >= 7){
        printf("Aprovado\n");
    }else if(nota >=5){
        printf("Recuperacao\n");
    }else{
        printf("Reprovado\n");
    }

    return 0;
}
//2.4
#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade >=18 && idade <=65){
        printf("Dentro da faixa permitida.\n");
    }else{
        printf("Fora da faixa permitida.\n");
    }

    return 0;
}
