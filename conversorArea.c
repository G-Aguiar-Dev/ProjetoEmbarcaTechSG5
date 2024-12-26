#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conversores.h"

void conversorArea() {
    float valor, resultado1,resultado2;
    int opcao;                //declaração das variáveis             

    
    //Interface com o usuário
    printf("==== Conversor de Áreas ====\n\n");
    printf("Unidades disponiveis: cm2, m2, km2\n");
    
    printf("Digite a opção com a unidade de área atual\n\n");
    printf("1 - cm2\n");
    printf("2 - m2\n");
    printf("3 - km2\n");
    scanf("%d", &opcao);

    switch(opcao) {
		case 1:	//atual é cm2
		printf("Digite o valor da área\n");
		scanf("%f",&valor);
		resultado1 = valor * 0.0001;		//cm2 -> m2
		resultado2 = valor * 0.0000000001;	// cm2 -> km2
		printf("Os resultados da conversão para m2 e km2 são:\n");
		printf("%.2f cm2 = %.4f m2 = %.10f km2\n",valor,resultado1,resultado2);
		break;

		case 2:	//atual é m2
		printf("Digite o valor da área\n");
		scanf("%f",&valor);
		resultado1 = valor * 10000;		//m2 -> cm2
		resultado2 = valor * 0.000001;	//m2 -> km2
		printf("Os resultados da conversão para cm2 e km2 são:\n");
		printf("%.2f m2 = %.2f cm2 = %.6f km2\n",valor,resultado1,resultado2);
		break;

		case 3:	//atual é km2
		printf("Digite o valor da área\n");
		scanf("%f",&valor);
		resultado1 = valor * 10000000000;	//km2 -> cm2
		resultado2 = valor * 1000000;		//km2 -> m2
		printf("Os resultados da conversão para cm2 e m2 são:\n");
		printf("%.2f km2 = %.2f cm2 = %.2f m2\n",valor,resultado1,resultado2);
		break;

		default: 
		//usuário idigitou uma opção inválida
		printf("Opcao inválida!\n\n");
		}
	}
    