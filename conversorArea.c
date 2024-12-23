//Função Conversor de Áreas
/* 
Esta função obteḿ do usuário: a) o valor da área; b) a medida atual (cm2,m2 ou km2);
c) para qual medida deseja converter.
Com essas entradas a função faz uma comparação de strings para determinar qual cálculo
de conversão deverá ser feito. A saída mostra a área na medida atual e a área na medida
convertida.
*/


#include <stdio.h>
#include <string.h>

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