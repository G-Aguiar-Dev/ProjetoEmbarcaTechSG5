//Conversor de Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)
//Autora: Maria Eduarda Pamponet Ramalho

#include <stdio.h>

void exibirMenu() {
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalos-vapor (cv ou hp)\n");
}

int main() {
    int opcaoEntrada, opcaoSaida;
    double valorEntrada, valorConvertido;

    printf("Bem-vindo ao Conversor de Potência!\n\n");
    exibirMenu();
    printf("Digite a unidade de entrada: ");
    scanf("%d", &opcaoEntrada);

    printf("Digite o valor: ");
    scanf("%lf", &valorEntrada);

    printf("\nSelecione a unidade de saída:\n");
    exibirMenu();
    printf("Digite a unidade de saída: ");
    scanf("%d", &opcaoSaida);

}
