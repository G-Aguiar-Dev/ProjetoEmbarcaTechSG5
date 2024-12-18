#include <stdio.h> //Biblioteca padrão de entrada e saída em C

//Declaração das funções que serão usadas no programa
void converterMsParaKmH(); //Função para converter m/s para km/h
void converterKmhParaMs();  //Função para converter km/h para m/s
void converterMsParaMph(); //Função para converter m/s para mph
void converterKmhParaMph(); //Função para converter km/h para mph
void converterMphParaMs(); //Função para converter mph para m/s
void converterMphParaKmH(); //Função para converter mph para km/h

int main(){
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
            return 0; // Encerra o programa com sucesso
        default: 
            //Caso o usuário insira uma opção inválida
            printf("Opcao invalida!\n\n");

    }
    }while(opcao!=7);   //Repete até o usuário escolher a opção 7 (Sair)

    return 0; //Retorno padrão da função main indicando execução bem-sucedida
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