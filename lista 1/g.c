#include <stdio.h>


int main() {
    float valorHoraAula, percentualINSS;
    int numeroAulas;

    printf("Informe o valor da hora/aula: ");
    scanf("%f", &valorHoraAula);

    printf("Informe o número de aulas: ");
    scanf("%d", &numeroAulas);

    printf("Informe a porcentagem de INSS: ");
    scanf("%f", &percentualINSS);

    float salarioBruto = valorHoraAula * numeroAulas;
    float salarioLiquido = salarioBruto * (1 - percentualINSS / 100);

    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
