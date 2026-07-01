//6.2
#include <stdio.h>

int main(){

    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d",&numeros[i]);
        soma += numeros[i];
    }

    printf("Soma = %d", soma);

    return 0;
}

//6.3
#include <stdio.h>

int main(){

    int numeros[3] = {10,20,30};

    for(int i = 0; i < 3; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}

//6.4
#include <stdio.h>

int main(){

    int matriz[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    return 0;
}
