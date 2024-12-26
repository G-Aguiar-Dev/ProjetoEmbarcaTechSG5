#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conversores.h"

void exibirMenu() {
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalos-vapor (cv)\n");
}

double converterDeWatts(int opcaoSaida, double valor) {
    switch (opcaoSaida) {
        case 2: // Watts para Quilowatts
            return valor / 1000;
        case 3: // Watts para Cavalos-vapor
            return valor / 735.5;
        default:
            return valor;
    }
}

double converterDeQuilowatts(int opcaoSaida, double valor) {
    switch (opcaoSaida) {
        case 1: // Quilowatts para Watts
            return valor * 1000;
        case 3: // Quilowatts para Cavalos-vapor
            return valor * 1000 / 735.5;
        default:
            return valor;
    }
}

double converterDeCavalosVapor(int opcaoSaida, double valor) {
    switch (opcaoSaida) {
        case 1: // Cavalos-vapor para Watts
            return valor * 735.5;
        case 2: // Cavalos-vapor para Quilowatts
            return valor * 735.5 / 1000;
        default:
            return valor;
    }
}

void conversorPotencia() {
    int opcaoEntrada, opcaoSaida;
    double valorEntrada, valorConvertido;

    printf("Bem-vindo ao Conversor de Potencia!\n\n");
    exibirMenu();
    printf("Digite a unidade de entrada: ");
    scanf("%d", &opcaoEntrada);
    if (opcaoEntrada < 1 || opcaoEntrada > 3)
    {
        printf("Opção de entrada invalida!\n");
        return;
    }
    

    printf("Digite o valor: ");
    scanf("%lf", &valorEntrada);

    printf("\nSelecione a unidade de saida:\n");
    exibirMenu();
    printf("Digite a unidade de saida: ");
    scanf("%d", &opcaoSaida);

    switch (opcaoEntrada) {
        case 1:
            valorConvertido = converterDeWatts(opcaoSaida, valorEntrada);
            break;
        case 2:
            valorConvertido = converterDeQuilowatts(opcaoSaida, valorEntrada);
            break;
        case 3:
            valorConvertido = converterDeCavalosVapor(opcaoSaida, valorEntrada);
            break;
        default:
            printf("Opção de entrada invalida!\n");
            return;
    }

    printf("\nResultado: %.2lf\n", valorConvertido);
}
