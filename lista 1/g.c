#include <stdio.h>


int main() {
    float valor_hora_aula, percentual_INSS;
    int numero_aulas;

    printf("Informe o valor da hora/aula: ");
    scanf("%f", &valor_hora_aula);

    printf("Informe o número de aulas: ");
    scanf("%d", &numero_aulas);

    printf("Informe a porcentagem de INSS: ");
    scanf("%f", &percentual_INSS);

    float salario_bruto = valor_hora_aula * numero_aulas;
    float salario_liquido = salario_bruto * (1 - percentual_INSS / 100);

    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
