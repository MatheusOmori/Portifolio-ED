//8.2
Lista* busca(Lista *l, int valor){

    Lista *p;

    for(p = l; p != NULL; p = p->prox){

        if(p->info == valor){
            return p;
        }

    }

    return NULL;
}

//8.3
Lista* removeUltimo(Lista *l){

    if(l == NULL)
        return NULL;

    Lista *p = l;

    while(p->prox->prox != NULL){
        p = p->prox;
    }

    free(p->prox);

    p->prox = NULL;

    return l;
}

//8.4
void libera(Lista *l){

    Lista *p = l;

    while(p != NULL){

        Lista *aux = p->prox;

        free(p);

        p = aux;
    }

}
