//17.2
#define MAX 100

typedef struct{

    int dados[MAX];
    int inicio;
    int fim;

}Fila;

//17.3
void enqueue(Fila *f, int valor){

    f->dados[f->fim] = valor;
    f->fim++;

}

//17.4
int dequeue(Fila *f){

    int valor = f->dados[f->inicio];

    f->inicio++;

    return valor;
}
