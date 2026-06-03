#include <stdio.h>

// Multiplicação por somas consecutivas
int multiplicar(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

// Divisão por subtrações consecutivas
int dividir(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        return 0; 
    }
    int resultado = 0;
    while (a >= b) {
        a -= b;
        resultado++;
    }
    return resultado;
}
printf("Criado por Derick ferreira Correa");
