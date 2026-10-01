# Cifra de César Avançada com Sequências Matemáticas

Este projeto foi desenvolvido para a disciplina de **Algoritmos e Pensamento Computacional** sob a orientação do Professor Francisco de Assis Cavallaro (UNICID).

## 👥 Integrantes do Grupo
* [Lucas Morais](https://github.com)


## 🧠 Aplicação da Taxonomia de Bloom

O desenvolvimento deste software seguiu os níveis cognitivos da Taxonomia de Bloom:
* **Lembrar & Compreender:** Revisão da tabela ASCII e o conceito tradicional da Cifra de César (Shift fixo), correlacionando o deslocamento de caracteres à álgebra modular.
* **Aplicar & Analisar:** Implementação prática em linguagem C utilizando ponteiros, estruturas de repetição, manipulação de arquivos de texto (`FILE`) e alocação dinâmica de memória para calcular a Série de Fibonacci letra a letra.
* **Avaliar & Criar:** Desenvolvimento de um sistema de criptografia em duas camadas (Cifra de César + Deslocamento Dinâmico), avaliando como o uso de sequências matemáticas elimina os padrões de frequência da cifra clássica, tornando-a mais segura.

## 🛠️ Funcionamento do Programa

O algoritmo recebe uma string de entrada (`Jabuticaba`) e aplica duas camadas consecutivas de ocultação:
1. **Camada 1 (Fixa):** Aplica um SHIFT constante escolhido pelo usuário a todos os caracteres (Valor utilizado: `7`).
2. **Camada 2 (Dinâmica):** Aplica um segundo deslocamento baseado nos elementos correspondentes da Série de Fibonacci para cada posição do caractere.

O resultado final é exibido em tela e automaticamente exportado para um arquivo de log chamado `resultado_criptografia.txt`.
