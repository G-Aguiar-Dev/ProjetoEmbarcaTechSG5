//Conversor de bits, bytes, kilobytes, megabytes, gigabytes, terabytes
//Autor: Guilherme Aguiar

#include <stdio.h>

int conversorBits(){
    int opcaoBase, opcaoConversao;
    float valor;
    float resultado;
    

    printf("Escolha de que unidade de medida que deseja converter:\n");  //Menu de opções de conversão - Unidade Base
    printf("1 - Bits\n");
    printf("2 - Bytes\n");
    printf("3 - Kilobytes\n");
    printf("4 - Megabytes\n");
    printf("5 - Gigabytes\n");
    printf("6 - Terabytes\n");
    scanf("%d", &opcaoBase);
    switch (opcaoBase)
    {
    case 1:
        printf("Voce escolheu Bits\n");
        printf("Digite para qual unidade deseja converter:\n");
        printf("1 - Bits\n");
        printf("2 - Bytes\n");
        printf("3 - Kilobytes\n");
        printf("4 - Megabytes\n");
        printf("5 - Gigabytes\n");
        printf("6 - Terabytes\n");
        scanf("%d", &opcaoConversao);
        scanf("%f", &valor);
        switch(opcaoConversao){
            case 1:
                resultado = valor;
                break;
            case 2:
                resultado = valor * 8;
                break;
            case 3:
                resultado = valor * 8 * 1024;
                break;
            case 4:
                resultado = valor * 8 * 1024 * 1024;
                break;
            case 5:
                resultado = valor * 8 * 1024 * 1024 * 1024;
                break;
            case 6:
                resultado = valor * 8 * 1024 * 1024 * 1024 * 1024;
                break;
            default:
                printf("Opcao invalida\n");
                break;
    }
        break;
    
    default:
        break;
    
    case 2:
        printf("Voce escolheu Bytes\n");
        printf("Digite para qual unidade deseja converter:\n");
        printf("1 - Bits\n");
        printf("2 - Bytes\n");
        printf("3 - Kilobytes\n");
        printf("4 - Megabytes\n");
        printf("5 - Gigabytes\n");
        printf("6 - Terabytes\n");
        scanf("%d", &opcaoConversao);
        scanf("%f", &valor);
        switch(opcaoConversao){
            case 1:
                resultado = valor / 8;
                break;
            case 2:
                resultado = valor;
                break;
            case 3:
                resultado = valor * 1024;
                break;
            case 4:
                resultado = valor * 1024 * 1024;
                break;
            case 5:
                resultado = valor * 1024 * 1024 * 1024;
                break;
            case 6:
                resultado = valor * 1024 * 1024 * 1024 * 1024;
                break;
            default:
                printf("Opcao invalida\n");
                break;
    }
        break;
    
    case 3:
        printf("Voce escolheu Kilobytes\n");
        printf("Digite para qual unidade deseja converter:\n");
        printf("1 - Bits\n");
        printf("2 - Bytes\n");
        printf("3 - Kilobytes\n");
        printf("4 - Megabytes\n");
        printf("5 - Gigabytes\n");
        printf("6 - Terabytes\n");
        scanf("%d", &opcaoConversao);
        scanf("%f", &valor);
        switch(opcaoConversao){
            case 1:
                resultado = valor / 8 / 1024;
                break;
            case 2:
                resultado = valor / 1024;
                break;
            case 3:
                resultado = valor;
                break;
            case 4:
                resultado = valor * 1024;
                break;
            case 5:
                resultado = valor * 1024 * 1024;
                break;
            case 6:
                resultado = valor * 1024 * 1024 * 1024;
                break;
            default:
                printf("Opcao invalida\n");
                break;
    }
        break;

    case 4:
        printf("Voce escolheu Megabytes\n");
        printf("Digite para qual unidade deseja converter:\n");
        printf("1 - Bits\n");
        printf("2 - Bytes\n");
        printf("3 - Kilobytes\n");
        printf("4 - Megabytes\n");
        printf("5 - Gigabytes\n");
        printf("6 - Terabytes\n");
        scanf("%d", &opcaoConversao);
        scanf("%f", &valor);
        switch(opcaoConversao){
            case 1:
                resultado = valor / 8 / 1024 / 1024;
                break;
            case 2:
                resultado = valor / 1024 / 1024;
                break;
            case 3:
                resultado = valor / 1024;
                break;
            case 4:
                resultado = valor;
                break;
            case 5:
                resultado = valor * 1024;
                break;
            case 6:
                resultado = valor * 1024 * 1024;
                break;
            default:
                printf("Opcao invalida\n");
                break;
    }
        break;

    case 5:
        printf("Voce escolheu Gigabytes\n");
        printf("Digite para qual unidade deseja converter:\n");
        printf("1 - Bits\n");
        printf("2 - Bytes\n");
        printf("3 - Kilobytes\n");
        printf("4 - Megabytes\n");
        printf("5 - Gigabytes\n");
        printf("6 - Terabytes\n");
        scanf("%d", &opcaoConversao);
        scanf("%f", &valor);
        switch(opcaoConversao){
            case 1:
                resultado = valor / 8 / 1024 / 1024 / 1024;
                break;
            case 2:
                resultado = valor / 1024 / 1024 / 1024;
                break;
            case 3:
                resultado = valor / 1024 / 1024;
                break;
            case 4:
                resultado = valor / 1024;
                break;
            case 5:
                resultado = valor;
                break;
            case 6:
                resultado = valor * 1024;
                break;
            default:
                printf("Opcao invalida\n");
                break;
    }
        break;

    case 6:
        printf("Voce escolheu Terabytes\n");
        printf("Digite para qual unidade deseja converter:\n");
        printf("1 - Bits\n");
        printf("2 - Bytes\n");
        printf("3 - Kilobytes\n");
        printf("4 - Megabytes\n");
        printf("5 - Gigabytes\n");
        printf("6 - Terabytes\n");
        scanf("%d", &opcaoConversao);
        scanf("%f", &valor);
        switch(opcaoConversao){
            case 1:
                resultado = valor / 8 / 1024 / 1024 / 1024 / 1024;
                break;
            case 2:
                resultado = valor / 1024 / 1024 / 1024 / 1024;
                break;
            case 3:
                resultado = valor / 1024 / 1024 / 1024;
                break;
            case 4:
                resultado = valor / 1024 / 1024;
                break;
            case 5:
                resultado = valor / 1024;
                break;
            case 6:
                resultado = valor;
                break;
            default:
                printf("Opcao invalida\n");
                break;
    }
        break;
    }
    
    printf("O valor convertido eh: %.2f\n", resultado);
    return 0;
}