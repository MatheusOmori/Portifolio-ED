//7.2
typedef struct lista{

    int info;
    struct lista *prox;

}Lista;

//7.3
Lista* insere(Lista *l, int valor){

    Lista *novo = (Lista*) malloc(sizeof(Lista));

    novo->info = valor;
    novo->prox = l;

    return novo;
}

//7.4
void imprime(Lista *l){

    Lista *p;

    for(p = l; p != NULL; p = p->prox){
        printf("%d ", p->info);
    }

}
