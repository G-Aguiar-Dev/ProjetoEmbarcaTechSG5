#include <stdio.h>

int conversorTempo() {

double horasParaMinutos (double horas) { return horas * 60; };
double minutosParaSegundos (double minutos) { return minutos * 60; };
double segundosParaMinutos (double segundos) { return segundos / 60; };
double minutosParaHoras (double minutos) { return minutos / 60; };
double horasParaSegundos (double horas) { return horas * 3600; };
double segundosParaHoras (double segundos) { return segundos / 3600; };
double valor;
int opcao;


printf("Escolha 1 para converter horas em minutos.\n");
printf("Escolha 2 para converter minutos em segundos.\n");
printf("Escolha 3 para converter segundos em minutos.\n");
printf("Escolha 4 para converter minutos em horas.\n");
printf("Escolha 5 para converter horas em segundos.\n");
printf("Escolha 6 para converter segundos em horas.\n");
scanf("%d", &opcao);

switch(opcao) {

    case 1:
    printf("Digite o valor em horas: ");
    scanf("%lf", &valor);
    printf("%.2lf horas = %.2lf minutos\n", valor, horasParaMinutos(valor));
    break;

    case 2:
    printf("Digite o valor em minutos: ");
    scanf("%lf", &valor);
    printf("%.2lf minutos = %.2lf segundos\n", valor, minutosParaSegundos(valor));
    break;

    case 3:
    printf("Digite o valor em segundos: ");
    scanf("%lf", &valor);
    printf("%.2lf segundos = %.2lf minutos\n", valor, segundosParaMinutos(valor));
    break;

    case 4:
    printf("Digite o valor em minutos: ");
    scanf("%lf", &valor);
    printf("%.2lf minutos = %.2lf horas\n", valor, minutosParaHoras(valor));
    break;

    case 5: 
    printf("Digite o valor em horas: ");
    scanf("%lf", &valor);
    printf("%.2lf horas = %.2lf segundos\n", valor, horasParaSegundos(valor));
    break;

    case 6:
    printf("digite o valor em segundos: ");
    scanf("%lf", &valor);
    printf("%.2lf segundos = %.2lf horas\n", valor, segundosParaHoras(valor));
    break;
       
    }

    return 0;
}