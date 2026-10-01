# Cifra de César Avançada com Sequências Matemáticas

Este projeto foi desenvolvido para a disciplina de **Algoritmos e Pensamento Computacional** sob a orientação do Professor Francisco de Assis Cavallaro, pela Universidade Cidade de São Paulo (UNICID).

## Integrantes do Grupo
* [Lucas Morais](https://github.com/lucasmoraisstory)
* [Carolina Ayumi](https://github.com/carolinaayumi02-stack)
* [Lucas Oliveira](https://github.com/LucasoliveiraSG)
* [Vitoria Christini](https://github.com/vitoriachristini2019-oss)

## Aplicação da Taxonomia de Bloom

O desenvolvimento deste software seguiu os níveis cognitivos da Taxonomia de Bloom:
* **Lembrar & Compreender:** Revisão da tabela ASCII e o conceito tradicional da Cifra de César (Shift fixo), correlacionando o deslocamento de caracteres à álgebra modular.
* **Aplicar & Analisar:** Implementação prática em linguagem C utilizando ponteiros, estruturas de repetição, manipulação de arquivos de texto (`FILE`) e alocação dinâmica de memória para calcular a Série de Fibonacci letra a letra.
* **Avaliar & Criar:** Desenvolvimento de um sistema de criptografia em duas camadas (Cifra de César + Deslocamento Dinâmico), avaliando como o uso de sequências matemáticas elimina os padrões de frequência da cifra clássica, tornando-a mais segura.

## Funcionamento do Programa

O algoritmo recebe uma string de entrada (`Jabuticaba`) e aplica duas camadas consecutivas de ocultação:
1. **Camada 1 (Fixa):** Aplica um SHIFT constante escolhido pelo usuário a todos os caracteres (Valor utilizado: `7`).
2. **Camada 2 (Dinâmica):** Aplica um segundo deslocamento baseado nos elementos correspondentes da Série de Fibonacci para cada posição do caractere.

O resultado final é exibido em tela e automaticamente exportado para um arquivo de log chamado `resultado_criptografia.txt`.


## Como Executar o Projeto

Você pode rodar este projeto localmente em sua máquina ou diretamente no navegador.

### Opção 1: No Navegador (OnlineGDB)
1. Copie todo o conteúdo do arquivo `main.c`.
2. Acesse o [OnlineGDB](https://onlinegdb.com) e mude a linguagem no canto superior direito para **C**.
3. Cole o código e clique em **Run**.
4. Insira os dados de teste no terminal conforme solicitado.

### Opção 2: Pelo Terminal (GCC)
Se você tiver um compilador instalado localmente, execute os seguintes comandos no terminal:

```bash
# Clonar o repositório
git clone https://github.com

# Entrar na pasta do projeto
cd Cifra-de-Cesar

# Compilar o código fonte
gcc main.c -o criptografia

# Executar o programa
./criptografia
```

## Dados Utilizados no Teste de Validação
Para gerar o arquivo de log `resultado_criptografia.txt` presente neste repositório, utilizamos as seguintes entradas no sistema:
* **Palavra Secreta:** `Jabuticaba`
* **Deslocamento (SHIFT Fixo):** `7`
* **Sequência Escolhida:** `3` (Série de Fibonacci)
