#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função para gerar a sequência matemática escolhida
void gerar_sequencia(int tipo, int tamanho, int *seq, int razao) {
    if (tipo == 1) { // Progressão Aritmética (PA)
        int a1 = 1;
        for (int i = 0; i < tamanho; i++) {
            seq[i] = a1 + i * razao;
        }
    } 
    else if (tipo == 2) { // Progressão Geométrica (PG)
        int a1 = 1;
        for (int i = 0; i < tamanho; i++) {
            if (i == 0) seq[i] = a1;
            else seq[i] = seq[i-1] * razao;
        }
    } 
    else if (tipo == 3) { // Fibonacci
        if (tamanho > 0) seq[0] = 1;
        if (tamanho > 1) seq[1] = 1;
        for (int i = 2; i < tamanho; i++) {
            seq[i] = seq[i-1] + seq[i-2];
        }
    }
}

// Função principal de criptografia
void criptografar(char *palavra, int shift, int tipo_seq, int razao, char *resultado) {
    int tam = strlen(palavra);
    int *seq = (int *)malloc(tam * sizeof(int));
    
    // Gerar a sequência dinâmica com base no tamanho da palavra
    gerar_sequencia(tipo_seq, tam, seq, razao);
    
    for (int i = 0; i < tam; i++) {
        char letra = tolower(palavra[i]);
        
        if (letra >= 'a' && letra <= 'z') {
            // Camada 1 (Shift Fixo) + Camada 2 (Sequência Dinâmica)
            int deslocamento_total = shift + seq[i];
            
            // Aplica o deslocamento dentro do alfabeto (26 letras)
            char nova_letra = ((letra - 'a') + deslocamento_total) % 26 + 'a';
            resultado[i] = nova_letra;
        } else {
            resultado[i] = letra; // Mantém caracteres que não sejam letras
        }
    }
    resultado[tam] = '\0'; // Finaliza a string
    
    free(seq); // Libera a memória alocada dinamicamente
}

int main() {
    char palavra[16];
    int shift;
    int tipo_seq;
    int razao = 1;
    char palavra_cripto[16];
    
    printf("=== SISTEMA DE CRIPTOGRAFIA AVANÇADA ===\n");
    
    // 1. Entrada da palavra
    printf("Digite uma palavra secreta (ate 15 letras, sem acentos): ");
    scanf("%15s", palavra);
    
    // 2. Entrada do SHIFT fixo
    printf("Digite o valor do SHIFT fixo (ex: 3): ");
    scanf("%d", &shift);
    
    // 3. Escolha da sequência matemática
    printf("\nEscolha a sequencia matematica para a Camada 2:\n");
    printf("[1] Progressao Aritmetica (PA)\n");
    printf("[2] Progressao Geometrica (PG)\n");
    printf("[3] Serie de Fibonacci\n");
    printf("Opcao: ");
    scanf("%d", &tipo_seq);
    
    if (tipo_seq == 1 || tipo_seq == 2) {
        printf("Digite a razao da progressao: ");
        scanf("%d", &razao);
    }
    
    // Processamento
    criptografar(palavra, shift, tipo_seq, razao, palavra_cripto);
    
    // Exibição do Resultado na tela
    printf("\n--- RESULTADO ---\n");
    printf("Palavra Original: %s\n", palavra);
    printf("Palavra Criptografada: %s\n", palavra_cripto);
    
    // 4. Gravação no arquivo txt (resultado_criptografia.txt)
    FILE *arquivo = fopen("resultado_criptografia.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir/gerar o arquivo de log.\n");
        return 1;
    }
    
    fprintf(arquivo, "Palavra codificada: %s | SHIFT: %d | Tipo: %d | Letras: %lu\n", 
            palavra_cripto, shift, tipo_seq, strlen(palavra));
    fclose(arquivo);
    
    printf("\nArquivo 'resultado_criptografia.txt' gerado com sucesso!\n");
    return 0;
}
