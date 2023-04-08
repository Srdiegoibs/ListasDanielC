//    Crie uma função novo_inteiro() que declara e inicializa um inteiro DENTRO DA
//FUNÇÃO e retorna o endereço para esse inteiro. Imprima o valor do inteiro e o
//    endereço. Isso é um código válido? O compilador exibe avisos? Essa é uma operação
//    segura?
#include <stdio.h>
#include <stdlib.h>

int *novo_inteiro() {
    int novo = 0;  // declaração e inicialização do inteiro dentro da função
    printf("Endereço do inteiro dentro da função: %p\n", &novo); // imprime o endereço de memória do inteiro
    return &novo; // retorna o endereço do inteiro
}

int main() {
    int* endereco_inteiro = novo_inteiro(); // chama a função e armazena o endereço do inteiro retornado
    printf("Endereço do inteiro fora da função: %p\n", endereco_inteiro); // imprime o endereço de memória do inteiro fora da função
  return 0;
}

// O maior problema é que a variável "novo" é uma variável local da função "novo_inteiro()", 
// o que significa que sua vida útil está limitada ao escopo da função. Quando a função retorna 
// o endereço de memória da variável "novo", ela está retornando um ponteiro para uma variável 
// que não existe mais após a execução da função. Isso pode levar a comportamentos indefinidos 
// do programa, como acessar memória não alocada ou sobrescrever outras variáveis.

// O compilador pode exibir avisos de que a função está retornando o endereço de uma variável 
// local, o que é um comportamento não definido em C. Dependendo do compilador e das opções 
// de compilação, esses avisos podem não ser exibidos.

// Para tornar essa operação segura, a variável "novo" precisa ser alocada dinamicamente na 
// memória usando a função "malloc()". Dessa forma, o espaço na memória persistirá mesmo 
// após a saída da função. No entanto, é importante lembrar que o espaço alocado precisa 
// ser liberado usando a função "free()" quando não for mais necessário.