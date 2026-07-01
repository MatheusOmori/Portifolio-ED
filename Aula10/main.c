//10.2
typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

//10.3
Lista* inserirFinal(Lista *l, int valor){

    Lista *novo = (Lista*) malloc(sizeof(Lista));

    novo->info = valor;

    if(l == NULL){
        novo->prox = novo;
        return novo;
    }

    Lista *p = l;

    while(p->prox != l){
        p = p->prox;
    }

    p->prox = novo;
    novo->prox = l;

    return l;
}

//10.4
void imprime(Lista *l){

    if(l == NULL){
        return;
    }

    Lista *p = l;

    do{
        printf("%d ", p->info);
        p = p->prox;
    }while(p != l);

}
