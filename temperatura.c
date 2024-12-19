#include <stdio.h>

float converterTemperatura(int medida, float temperatura){

switch (medida){
    case 1:
        /* code */
    break;
    case 2:
        /* code */
    break;
    case 3:
        /* code */
    break;
    case 4:
        /* code */
    break;
    case 5:
        /* code */
    break;
    case 6 :
        /* code */
    break;
    default:
        return 0;
    }
return temperatura;
} 
int main() {
    int parametroConversao;
    float temperatura;
    printf("Determine os parametros de conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");
    scanf("%f", &parametroConversao);
    printf("Digite a temperatura:\n");
    scanf("%f", &temperatura);

    return 0;
    

}