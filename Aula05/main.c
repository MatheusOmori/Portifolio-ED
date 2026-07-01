//5.2
typedef struct{
    char nome[50];
    int idade;
    float nota;
}Aluno;

//5.3
Aluno turma[3];

turma[0].nota = 8.5;

//5.4
typedef struct{
    char rua[50];
    int numero;
}Endereco;

typedef struct{
    char nome[50];
    Endereco end;
}Pessoa;
