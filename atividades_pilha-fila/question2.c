#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Pilha {
    int itens[MAX_SIZE];
    int topo;
};

// Inicializa uma pilha
void inicializar(struct Pilha* pilha) {
    pilha->topo = -1;
}

// Verifica se a pilha está vazia
int pilhaVazia(struct Pilha* pilha) {
    return pilha->topo == -1;
}

// Verifica se a pilha está cheia
int pilhaCheia(struct Pilha* pilha) {
    return pilha->topo == MAX_SIZE - 1;
}

// Empilha um elemento
void empilhar(struct Pilha* pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: Pilha cheia\n");
        exit(EXIT_FAILURE);
    }
    pilha->itens[++pilha->topo] = valor;
}

// Desempilha um elemento
int desempilhar(struct Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: Pilha vazia\n");
        exit(EXIT_FAILURE);
    }
    return pilha->itens[pilha->topo--];
}

// Enfileira um elemento
void entrarNaFila(struct Pilha* pilhaEntrada, int valor) {
    empilhar(pilhaEntrada, valor);
}

// Desenfileira um elemento
int sairDaFila(struct Pilha* pilhaEntrada, struct Pilha* pilhaSaida) {
    // Se a pilha de saída estiver vazia, transfira elementos da pilha de entrada para ela
    if (pilhaVazia(pilhaSaida)) {
        while (!pilhaVazia(pilhaEntrada)) {
            empilhar(pilhaSaida, desempilhar(pilhaEntrada));
        }
    }

    // Desempilha elemento da pilha de saída (o primeiro a entrar na fila)
    if (!pilhaVazia(pilhaSaida)) {
        return desempilhar(pilhaSaida);
    } else {
        printf("Erro: Fila vazia\n");
        exit(EXIT_FAILURE);
    }
}

int main() {
    struct Pilha pilhaEntrada, pilhaSaida;
    inicializar(&pilhaEntrada);
    inicializar(&pilhaSaida);

    entrarNaFila(&pilhaEntrada, 1);
    entrarNaFila(&pilhaEntrada, 2);
    entrarNaFila(&pilhaEntrada, 3);

    printf("Elemento removido da fila: %d\n", sairDaFila(&pilhaEntrada, &pilhaSaida));
    printf("Elemento removido da fila: %d\n", sairDaFila(&pilhaEntrada, &pilhaSaida));

    entrarNaFila(&pilhaEntrada, 4);

    printf("Elemento removido da fila: %d\n", sairDaFila(&pilhaEntrada, &pilhaSaida));
    printf("Elemento removido da fila: %d\n", sairDaFila(&pilhaEntrada, &pilhaSaida));

    return 0;
}
