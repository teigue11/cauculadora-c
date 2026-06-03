#include <stdio.h>
#include <assert.h>

// Declaração das funções a serem testadas
float multiplicar(float a, float b);
float dividir(float a, float b);

void test_multiplicar() {
    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(-2, 4) == -8);
    assert(multiplicar(5, 0) == 0);
    printf("Testes de multiplicação passaram!\n");
}

void test_dividir() {
    assert(dividir(6, 2) == 3);
    assert(dividir(5, 2) == 2.5);
    // O teste para divisão por zero retorna 0 conforme a implementação
    assert(dividir(5, 0) == 0); 
    printf("Testes de divisão passaram!\n");
}

int main() {
    printf("Iniciando testes...\n");
    test_multiplicar();
    test_dividir();
    printf("Todos os testes passaram com sucesso!\n");
    return 0;
} 
printf("Criado por Derick ferreira Correa");
