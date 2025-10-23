#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct livro {
    int codigo;
    char titulo[30];
    char autor[30];
    char estilo[30];
    float preco;
};

int main() {
    struct livro vetor_livros[50];
    int i, quantidade_livros = 0, opcao, flag;
    char autor_busca[30];
    char estilo_busca[30];
    char titulo_busca[30];
    float media_precos;
    
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
                printf("Código do livro: %d\n", quantidade_livros + 1);
                vetor_livros[quantidade_livros].codigo = quantidade_livros + 1;
                printf("Informe o nome do livro: ");
                scanf("%s", vetor_livros[quantidade_livros].titulo);
                printf("Informe o autor do livro: ");
                scanf("%s", vetor_livros[quantidade_livros].autor);
                printf("Informe o estilo do livro: ");
                scanf("%s", vetor_livros[quantidade_livros].estilo);
                printf("Informe o preço do livro: ");
                scanf("%f", &vetor_livros[quantidade_livros].preco);
                quantidade_livros++;
                break;
                
            case 2:
                system("clear");
                printf("--- Todos os livros da livraria ---\n");
                for (i = 0; i < quantidade_livros; i++) {
                    printf("Código: %d\n", vetor_livros[i].codigo);
                    printf("Título: %s\n", vetor_livros[i].titulo);
                    printf("Autor: %s\n", vetor_livros[i].autor);
                    printf("Estilo: %s\n", vetor_livros[i].estilo);
                    printf("Preço: %.2f\n", vetor_livros[i].preco);
                    printf("--------------------------------------\n");
                }
                scanf("%d", &flag);
                break;
                
            case 3:
                system("clear");
                printf("Digite o nome do autor: ");
                scanf("%s", autor_busca);
                int resultado_busca_autor = 1;
                for (i = 0; i < quantidade_livros; i++) {
                    resultado_busca_autor = strcmp(vetor_livros[i].autor, autor_busca);
                    if (resultado_busca_autor == 0) {
                        flag = 1;
                        printf("Código: %d\n", vetor_livros[i].codigo);
                        printf("Título: %s\n", vetor_livros[i].titulo);
                        printf("Autor: %s\n", vetor_livros[i].autor);
                        printf("Estilo: %s\n", vetor_livros[i].estilo);
                        printf("Preço: %.2f\n", vetor_livros[i].preco);
                        printf("----------------------------------\n");
                    } else {
                        flag = 0;
                    }
                }
                scanf("%d", &flag);
                break;
                
            case 4:
                system("clear");
                printf("Digite o nome do título: ");
                scanf("%s", titulo_busca);
                int resultado_busca_titulo = 1;
                for (i = 0; i < quantidade_livros; i++) {
                    resultado_busca_titulo = strcmp(vetor_livros[i].titulo, titulo_busca);
                    if (resultado_busca_titulo == 0) {
                        flag = 1;
                        printf("Código: %d\n", vetor_livros[i].codigo);
                        printf("Título: %s\n", vetor_livros[i].titulo);
                        printf("Autor: %s\n", vetor_livros[i].autor);
                        printf("Estilo: %s\n", vetor_livros[i].estilo);
                        printf("Preço: %.2f\n", vetor_livros[i].preco);
                        printf("----------------------------------\n");
                    } else {
                        flag = 0;
                    }
                }
                scanf("%d", &flag);
                break;
                
            case 5:
                system("clear");
                printf("Digite o nome do estilo: ");
                scanf("%s", estilo_busca);
                int resultado_busca_estilo = 1;
                for (i = 0; i < quantidade_livros; i++) {
                    resultado_busca_estilo = strcmp(vetor_livros[i].estilo, estilo_busca);
                    if (resultado_busca_estilo == 0) {
                        flag = 1;
                        printf("Código: %d\n", vetor_livros[i].codigo);
                        printf("Título: %s\n", vetor_livros[i].titulo);
                        printf("Autor: %s\n", vetor_livros[i].autor);
                        printf("Estilo: %s\n", vetor_livros[i].estilo);
                        printf("Preço: %.2f\n", vetor_livros[i].preco);
                        printf("----------------------------------\n");
                    } else {
                        flag = 0;
                    }
                }
                scanf("%d", &flag);
                break;
                
            case 6:
                system ("clear");
                printf("-----------------------------------\n");
                printf("|---Média dos preços dos livros---|\n");
                printf("-----------------------------------\n");
                int preco_total = 0;
                for (i = 0; i < quantidade_livros; i++) {
                    preco_total += vetor_livros[i].preco;
                }
                media_precos = (float)preco_total / quantidade_livros;
                printf("%.2f Reais", media_precos);
                scanf("%d", &flag);
                break;
        }
    } while (opcao != 9);

    return 0;
}