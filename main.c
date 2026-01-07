#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 10
#define LIMITE_ESTOQUE 50

struct Produto {
    int codigo;
    float valor;
    char nome[50];
    int quantidade;
    int limite; // sempre será 50
    char classificacao[10]; // "alto", "baixo" ou "limite"
};

int main() {
    struct Produto lista[MAX_PRODUTOS];
    int i;

    int contAlto = 0, contBaixo = 0, contLimite = 0;

    printf("Cadastro de 10 produtos:\n\n");

    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &lista[i].codigo);

        printf("Nome: ");
        scanf("%s", lista[i].nome);

        printf("Valor: ");
        scanf("%f", &lista[i].valor);

        do {
            printf("Quantidade (0 a 50): ");
            scanf("%d", &lista[i].quantidade);
        } while (lista[i].quantidade < 0 || lista[i].quantidade > LIMITE_ESTOQUE);

        lista[i].limite = LIMITE_ESTOQUE;

        // Classificação
        if (lista[i].quantidade == LIMITE_ESTOQUE) {
            strcpy(lista[i].classificacao, "limite");
            contLimite++;
        }
        else if (lista[i].quantidade > 35) {
            strcpy(lista[i].classificacao, "alto");
            contAlto++;
        } 
        else {
            strcpy(lista[i].classificacao, "baixo");
            contBaixo++;
        }

        printf("\n");
    }

    // Impressão dos dados
    printf("\n===========================================\n");
    printf("LISTA DE PRODUTOS CADASTRADOS\n");
    printf("===========================================\n");

    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Codigo: %d\n", lista[i].codigo);
        printf("Nome: %s\n", lista[i].nome);
        printf("Valor: %.2f\n", lista[i].valor);
        printf("Quantidade: %d\n", lista[i].quantidade);
        printf("Limite: %d\n", lista[i].limite);
        printf("Classificacao: %s\n", lista[i].classificacao);
    }

    printf("\n===========================================\n");
    printf("RESUMO DE ESTOQUE:\n");
    printf("Alto: %d produtos\n", contAlto);
    printf("Baixo: %d produtos\n", contBaixo);
    printf("No limite (50 unidades): %d produtos\n", contLimite);
    printf("===========================================\n");

    return 0;
}

