//16.2
typedef struct no{
    int info;
    struct no *prox;
}No;

typedef struct{
    No *inicio;
    No *fim;
}Fila;

//16.3
void enqueue(Fila *f, int valor){

    No *novo = (No*) malloc(sizeof(No));

    novo->info = valor;
    novo->prox = NULL;

    if(f->fim == NULL){
        f->inicio = novo;
        f->fim = novo;
    }else{
        f->fim->prox = novo;
        f->fim = novo;
    }

}

//16.4
int dequeue(Fila *f){

    if(f->inicio == NULL){
        return -1;
    }

    No *aux = f->inicio;
    int valor = aux->info;

    f->inicio = aux->prox;

    if(f->inicio == NULL){
        f->fim = NULL;
    }

    free(aux);

    return valor;
}
