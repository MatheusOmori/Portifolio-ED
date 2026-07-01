//11.2
typedef struct lista{

    int info;
    struct lista *ant;
    struct lista *prox;

}Lista;
//11.3
Lista* inserirInicio(Lista *l, int valor){

    Lista *novo = criarNo(valor);

    novo->prox = l;

    if(l != NULL){
        l->ant = novo;
    }

    return novo;
}

//11.4
Lista* inserirFinal(Lista *l, int valor){

    Lista *novo = criarNo(valor);

    if(l == NULL){
        return novo;
    }

    Lista *p = l;

    while(p->prox != NULL){
        p = p->prox;
    }

    p->prox = novo;
    novo->ant = p;

    return l;
}
