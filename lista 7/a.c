#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct livraria {
    int codigo;
    char titulo[30];
    char autor[30];
    char estilo[30];
    float preco;
};

int main() {
    struct livraria vetLivros[50];
    int i, qtdLivros = 0, opcao, flag;
    char searchAutor[30];
    char searchEstilo[30];
    char searchTitulo [30];
    float media;
    do {
        system("clear");
        printf("------------------------\n");
        printf("------- Livraria -------\n");
        printf("------------------------\n");
        printf("---- Menu de opções ----\n");
        printf("1 - Incluir livro na biblioteca\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Procure um livro pelo autor\n");
        printf("4 - Procure um livro pelo título\n");
        printf("5 - Procure um livro pelo estilo\n");
        printf("6 - Média dos preços dos livros da livraria\n");
        printf("9 - Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                system("clear");
                printf("Código do livro: %d\n", qtdLivros + 1);
                vetLivros[qtdLivros].codigo = qtdLivros + 1;
                printf("Informe o nome do livro: ");
                scanf("%s", vetLivros[qtdLivros].titulo);
                printf("Informe o autor do livro: ");
                scanf("%s", vetLivros[qtdLivros].autor);
                printf("Informe o estilo do livro: ");
                scanf("%s", vetLivros[qtdLivros].estilo);
                printf("Informe o preço do livro: ");
                scanf("%f", &vetLivros[qtdLivros].preco);
                qtdLivros++;
                break;
            case 2:
                system("clear");
                printf("--- Todos os livros da livraria ---\n");
                for (i = 0;i < qtdLivros; i++) {
                    printf("Código: %d\n", vetLivros[i].codigo);
                    printf("Título: %s\n", vetLivros[i].titulo);
                    printf("Autor: %s\n", vetLivros[i].autor);
                    printf("Estilo: %s\n", vetLivros[i].estilo);
                    printf("Preço: %.2f\n", vetLivros[i].preco);
                    printf("--------------------------------------\n");
                }
                scanf("%d", &flag);
                break;
            case 3:
                system("clear");
                printf("Digite o nome do autor: ");
                scanf("%s", &searchAutor);
                int v=1;
                for(i=0;i<qtdLivros;i++){
                    v = strcmp(vetLivros[i].autor, searchAutor);
                    if(v==0){
                        flag=1;
                        printf("Código: %d\n", vetLivros[i].codigo);
                        printf("Título: %s\n", vetLivros[i].titulo);
                        printf("Autor: %s\n", vetLivros[i].autor);
                        printf("Estilo: %s\n", vetLivros[i].estilo);
                        printf("Preço: %.2f\n", vetLivros[i].preco);
                        printf("----------------------------------\n");
                    } else {
                        flag=0;
                    }
                }
                scanf("%d", &flag);
                break;
            case 4:
                system("clear");
                printf("Digite o nome do título: ");
                scanf("%s", &searchTitulo);
                int b=1;
                for(i=0;i<qtdLivros;i++){
                    b = strcmp(vetLivros[i].titulo, searchTitulo);
                    if(b==0){
                        flag=1;
                        printf("Código: %d\n", vetLivros[i].codigo);
                        printf("Título: %s\n", vetLivros[i].titulo);
                        printf("Autor: %s\n", vetLivros[i].autor);
                        printf("Estilo: %s\n", vetLivros[i].estilo);
                        printf("Preço: %.2f\n", vetLivros[i].preco);
                        printf("----------------------------------\n");
                    } else {
                        flag=0;
                    }
                }
                scanf("%d", &flag);
                break;
            case 5:
                system("clear");
                printf("Digite o nome do estilo: ");
                scanf("%s", &searchEstilo);
                int l=1;
                for(i=0;i<qtdLivros;i++){
                    l = strcmp(vetLivros[i].estilo, searchEstilo);
                    if(l==0){
                        flag=1;
                        printf("Código: %d\n", vetLivros[i].codigo);
                        printf("Título: %s\n", vetLivros[i].titulo);
                        printf("Autor: %s\n", vetLivros[i].autor);
                        printf("Estilo: %s\n", vetLivros[i].estilo);
                        printf("Preço: %.2f\n", vetLivros[i].preco);
                        printf("----------------------------------\n");
                    } else {
                        flag=0;
                    }
                }
                scanf("%d", &flag);
                break;
            case 6:
                system ("clear");
                printf("-----------------------------------\n");
                printf("|---Média dos preços dos livros---|\n");
                printf("-----------------------------------\n");
                int precoTotal=0;
                for(i=0;i<qtdLivros;i++){
                    precoTotal+=vetLivros[i].preco;
                }
                media=precoTotal/qtdLivros;
                printf("%.2f Reais", media);
                scanf("%d", flag);
                break;
        }
    } while (opcao != 9);

    return 0;
}
