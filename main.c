#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversorArea();
void conversorBits();
void conversorMassa();
void conversorPotencia();
void conversorTemperatura();
void conversorTempo();
void conversorVelocidade();

int main() {
    int escolha;

    while (escolha == 0) {
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
    }

    return 0;
}

void conversorArea() {
    float valor, resultado;
    char medida_atual[10], medida_convertida[10];   //para guardar as strings (cm2,m2,km2)
    float fator_conversao = 1.0;                    //declara e inicia a variável                 

    
    //Interface com o usuário
    printf("=== Conversor de Áreas ===\n");
    printf("Unidades disponíveis: cm2, m2, km2\n");
    
    printf("Digite o valor da área: ");
    scanf("%f", &valor);
    printf("Digite a unidade atual (cm2, m2, km2): ");
    scanf("%s", medida_atual);
    printf("Digite a unidade para conversão (cm2, m2, km2): ");
    scanf("%s", medida_convertida);

    // Determina o fator de conversão
    if (strcmp(medida_atual, "cm2") == 0 && strcmp(medida_convertida, "m2") == 0) {
        fator_conversao = 0.0001;
    } else if (strcmp(medida_atual, "cm2") == 0 && strcmp(medida_convertida, "km2") == 0) {
        fator_conversao = 0.00000001;
    } else if (strcmp(medida_atual, "m2") == 0 && strcmp(medida_convertida, "cm2") == 0) {
        fator_conversao = 10000.0;
    } else if (strcmp(medida_atual, "m2") == 0 && strcmp(medida_convertida, "km2") == 0) {
        fator_conversao = 0.000001;
    } else if (strcmp(medida_atual, "km2") == 0 && strcmp(medida_convertida, "cm2") == 0) {
        fator_conversao = 10000000000.0;
    } else if (strcmp(medida_atual, "km2") == 0 && strcmp(medida_convertida, "m2") == 0) {
        fator_conversao = 1000000.0;
    } else if (strcmp(medida_atual, medida_convertida) == 0) {
        fator_conversao = 1.0; // Sem conversão necessária
    } else {
        printf("Unidades inválidas ou não suportadas!\n");
        return;
    }

    // Calcula o resultado
    resultado = valor * fator_conversao;

    // Exibe o resultado
    printf("\n=== Resultado da Conversão ===\n");
    printf("%.2f %s equivalem a %.8f %s\n", valor, medida_atual, resultado, medida_convertida);
}

void conversorBits(){
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
}

void conversorMassa(){
    
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

}

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
            printf("Opção de entrada inválida!\n");
            return;
    }

    printf("\nResultado: %.2lf\n", valorConvertido);
}

float converterTemperatura(int medida, float temperatura){

switch (medida){
    case 1: //Celsius para Fahrenheit
        temperatura = (temperatura * 9/5) + 32;
    break;
    case 2: //Celsius para Kelvin
       temperatura = temperatura + 273.15;
    break;
    case 3: //Fahrenheit para Celsius
        temperatura = (temperatura - 32) * 5/9;
    break;
    case 4: //Fahrenheit para Kelvin
        temperatura = (temperatura - 32) * 5/9 + 273.15;
    break;
    case 5: //Kelvin para Celsius
        temperatura = temperatura - 273.15;
    break;
    case 6 : //Kelvin para Fahrenheit
        temperatura = (temperatura - 273.15) * 9/5 + 32;
    break;
    default:
        return 0;
    }
return temperatura;
}

void conversorTemperatura() {
    int parametroConversao;
    float temperatura, resultado;
    printf("Determine os parametros de conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");
    scanf("%d", &parametroConversao);
    printf("Digite a temperatura:\n");
    scanf("%f", &temperatura);

    resultado = converterTemperatura(parametroConversao, temperatura);
    if (resultado >= 0){
        printf("A temperatura convertida e: %.2f\n", resultado);
    }else{
        printf("parametro de conversao invalido.\n");
    }
}

double horasParaMinutos (double horas) { return horas * 60; }
double minutosParaSegundos (double minutos) { return minutos * 60; }
double segundosParaMinutos (double segundos) { return segundos / 60; }
double minutosParaHoras (double minutos) { return minutos / 60; }
double horasParaSegundos (double horas) { return horas * 3600; }
double segundosParaHoras (double segundos) { return segundos / 3600; }

void conversorTempo() {

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
}

void converterMsParaKmH(); //Função para converter m/s para km/h
void converterKmhParaMs();  //Função para converter km/h para m/s
void converterMsParaMph(); //Função para converter m/s para mph
void converterKmhParaMph(); //Função para converter km/h para mph
void converterMphParaMs(); //Função para converter mph para m/s
void converterMphParaKmH(); //Função para converter mph para km/h

void conversorVelocidade(){
    int opcao; //Variável que armazena a escolha do usuário no menu

    //Laço para manter o menu ativo até que o usuário saia ou escolha uma opção válida
    do{
    //Exibe o menu principal do programa
    printf("==== Conversor de Velocidade ====\n");
    printf("1 - Converter de m/s para km/h\n"); //Opção 1: Converter de m/s para km/h
    printf("2 - Converter de m/s para mph\n");  //Opção 2: Converter de m/s para mph
    printf("3 - Converter de km/h para m/s\n"); //Opção 3: Converter de km/h para m/s
    printf("4 - Converter de km/h para mph\n"); //Opção 4: Converter de km/h para mph
    printf("5 - Converter de mph para m/s\n");  //Opção 5: Converter de mph para m/s
    printf("6 - Converter de mph para km/h\n"); //Opção 6: Converter de mph para km/h
    printf("7 - Sair\n"); //Opção 7: Sair do programa
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao); //Lê a opção escolhida pelo usuário

    //Estrutura switch para determinar a ação de acordo com a opção escolhida
    switch(opcao){
        case 1: 
            //Chama a função para converter de m/s para km/h
            converterMsParaKmH();
            break;
        case 2: 
            //Chama a função para converter de m/s para mph
            converterMsParaMph();
            break;
        case 3:
            //Chama a função para converter de km/h para m/s
            converterKmhParaMs();
            break;
        case 4:
            //Chama a função para converter de km/h para mph
            converterKmhParaMph();
            break;
        case 5:
            //Chama a função para converter de mph para m/s
            converterMphParaMs();
            break;
        case 6:
            //Chama a função para converter de mph para km/h
            converterMphParaKmH();
            break;
        case 7: 
            //Mensagem de saída e encerramento do programa
            printf("Saindo...\n");
            break;
        default: 
            //Caso o usuário insira uma opção inválida
            printf("Opcao invalida!\n\n");

    }
    }while(opcao!=7);   //Repete até o usuário escolher a opção 7 (Sair)
}

//Função para converter de metros por segundo (m/s) para quilômetros por hora (km/h)
void converterMsParaKmH(){
    float ms, kmh; //Variáveis para armazenar a velocidade em m/s e km/h

    //Solicita ao usuário a velocidade em m/s
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms); //Lê o valor de m/s fornecido pelo usuário

    //Conversão de m/s para km/h (1 m/s = 3.6 km/h)
    kmh = ms * 3.6; 

    //Exibe o resultado da conversão
    printf("Velocidade em km/h: %.2f\n\n", kmh); //Mostra o resultado com 2 casas decimais
}

//Função para converter de quilômetros por hora (km/h) para metros por segundo (m/s)
void converterKmhParaMs(){
    float kmh, ms; //Variáveis para armazenar a velocidade em km/h e m/s

    //Solicita ao usuário a velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh); //Lê o valor de km/h fornecido pelo usuário

    //Conversão de km/h para m/s (1 km/h = 1 / 3.6 m/s)
    ms = kmh / 3.6;

    //Exibe o resultado da conversão
    printf("Velocidade em m/s: %.2f\n\n", ms); //Mostra o resultado com 2 casas decimais
}

//Função para converter de metros por segundo (m/s) para milhas por hora (mph)
void converterMsParaMph(){
    float ms, mph; //Variáveis para armazenar a velocidade em m/s e mph

    //Solicita ao usuário a velocidade em m/s
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms); //Lê o valor de m/s fornecido pelo usuário

    //Conversão de m/s para mph (1 m/s = 2.237 mph)
    mph = ms * 2.237;

    //Exibe o resultado da conversão
    printf("Velocidade em mph: %.2f\n\n", mph); //Mostra o resultado com 2 casas decimais
}

//Função para converter de quilômetros por hora (km/h) para milhas por hora (mph)
void converterKmhParaMph(){
    float kmh, mph; //Variáveis para armazenar a velocidade em km/h e mph

    //Solicita ao usuário a velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh); //Lê o valor de km/h fornecido pelo usuário

    //Conversão de km/h para mph (1 km/h = 1 / 1.609 mph)
    mph = kmh / 1.609;

    //Exibe o resultado da conversão
    printf("Velocidade em mph: %.2f\n\n", mph); //Mostra o resultado com 2 casas decimais
}

//Função para converter de milhas por hora (mph) para metros por segundo (m/s)
void converterMphParaMs(){
    float mph, ms; //Variáveis para armazenar a velocidade em mph e m/s

    //Solicita ao usuário a velocidade em mph
    printf("Digite a velocidade em mph: ");
    scanf("%f", &mph); //Lê o valor de mph fornecido pelo usuário

    //Conversão de mph para m/s (1 mph = 0.44704 m/s)
    ms = mph * 0.44704;

    //Exibe o resultado da conversão
    printf("Velocidade em m/s: %.2f\n\n", ms); //Mostra o resultado com 2 casas decimais
}

//Função para converter de milhas por hora (mph) para quilômetros por hora (km/h)
void converterMphParaKmH(){
    float mph, kmh; //Variáveis para armazenar a velocidade em mph e km/h

    //Solicita ao usuário a velocidade em mph
    printf("Digite a velocidade em mph: ");
    scanf("%f", &mph); //Lê o valor de mph fornecido pelo usuário

    //Conversão de mph para km/h (1 mph = 1.60934 km/h)
    kmh = mph * 1.60934;

    //Exibe o resultado da conversão
    printf("Velocidade em km/h: %.2f\n\n", kmh); //Mostra o resultado com 2 casas decimais
}