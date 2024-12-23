//Conversor de temperatura
//Autor Vitor Hugo

#include <stdio.h>

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
int conversorTemperatura() {
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
    return 0;
}