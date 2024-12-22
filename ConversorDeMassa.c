//Conversor de Massa(Grama, Quilograma, Tonelada)
//Responsável: Abel José Rocha Barros Bezerra 

#include <stdio.h>

int conversorDeMassa(){
    
    int op;
    double converter, resultado1, resultado2;
    
    printf("Escolha a unidade de medida que deseja converter:\n");
    printf("1 - Grama\n");
    printf("2 - Quilograma\n");
    printf("3 - Tonelada\n");
    scanf("%d", &op);

    printf("Digite o valor a ser convertido\n");
    scanf("%lf", &converter);

    switch(op){

    case 1: 
    resultado1 = converter / 1000; // g -> kg
    resultado2 = converter / 1000000; // g -> T
    printf("O resultado convertido de grama para quilograma e tonelada eh:\n");
    printf("| %.2lfg = %.2lfKg = %.2lfT | \n", converter, resultado1, resultado2);
        break;

    case 2:
    resultado1 = converter * 1000; // kg -> g
    resultado2 = converter / 1000; // kg -> T
    printf("O resultado convertido de quilograma para grama e tonelada eh:\n");
    printf("| %.2lfKg = %.2lfg = %.2lfT | \n", converter, resultado1, resultado2);
        break;

    case 3:
    resultado1 = converter * 1000; // T -> kg
    resultado2 = converter * 1000000; // T -> g
    printf("O resultado convertido de tonelada para quilograma e grama eh:\n");
    printf("| %.2lfT = %.2lfKg = %.2lfg | \n", converter, resultado1, resultado2);
        break;

    default:
    printf("Opcao invalida\n");
        break;
    }
    return 0;
}


