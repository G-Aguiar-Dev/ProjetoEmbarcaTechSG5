#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conversores.h"

int main() {
    int escolha;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. CONVERSOR AREA\n");
        printf("2. CONVERSOR BITS\n");
        printf("3. CONVERSOR MASSA\n");
        printf("4. CONVERSOR POTENCIA\n");
        printf("5. CONVERSOR TEMPERATURA\n");
        printf("6. CONVERSOR TEMPO\n");
        printf("7. CONVERSOR VELOCIDADE\n");
        printf("0. Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nVoce selecionou o conversor 1.\n");
                conversorArea();
                break;
            case 2:
                printf("\nVoce selecionou o conversor 2.\n");
                conversorBits();
                break;
            case 3:
                printf("\nVoce selecionou o conversor 3.\n");
                conversorMassa();
                break;
            case 4:
                printf("\nVoce selecionou o conversor 4.\n");
                conversorPotencia();
                break;
            case 5:
                printf("\nVoce selecionou o conversor 5.\n");
                conversorTemperatura();
                break;
            case 6:
                printf("\nVoce selecionou o conversor 6.\n");
                conversorTempo();
                break;
            case 7:
                printf("\nVoce selecionou o conversor 7.\n");
                conversorVelocidade();
                break;
            case 0:
                printf("\nSaindo do programa. Ate mais!\n");
                break;
            default:
                printf("\nOpcao invalida. Por favor, tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}
