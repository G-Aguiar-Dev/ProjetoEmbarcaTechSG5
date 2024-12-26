#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conversores.h"

void conversorMassa(){
    
    int op;
    double converter, resultado1, resultado2;

    printf("Escolha a unidade de medida que deseja converter:\n");
    printf("1 - Grama\n");
    printf("2 - Quilograma\n");
    printf("3 - Tonelada\n");
    scanf("%d", &op);

    
    switch(op){

    case 1: 
    printf("Digite o valor a ser convertido\n");
    scanf("%lf", &converter);
    resultado1 = converter / 1000; // g -> kg
    resultado2 = converter / 1000000; // g -> T
    printf("O resultado convertido de grama para quilograma e tonelada eh:\n");
    printf("| %.2lfg = %.2lfKg = %.2lfT | \n", converter, resultado1, resultado2);
        break;

    case 2:
    printf("Digite o valor a ser convertido\n");
    scanf("%lf", &converter);
    resultado1 = converter * 1000; // kg -> g
    resultado2 = converter / 1000; // kg -> T
    printf("O resultado convertido de quilograma para grama e tonelada eh:\n");
    printf("| %.2lfKg = %.2lfg = %.2lfT | \n", converter, resultado1, resultado2);
        break;

    case 3:
    printf("Digite o valor a ser convertido\n");
    scanf("%lf", &converter);
    resultado1 = converter * 1000; // T -> kg
    resultado2 = converter * 1000000; // T -> g
    printf("O resultado convertido de tonelada para quilograma e grama eh:\n");
    printf("| %.2lfT = %.2lfKg = %.2lfg | \n", converter, resultado1, resultado2);
        break;

    default: 
    //Caso o usuário insira uma opção inválida
    printf("Opcao invalida!\n\n");
    }
}
