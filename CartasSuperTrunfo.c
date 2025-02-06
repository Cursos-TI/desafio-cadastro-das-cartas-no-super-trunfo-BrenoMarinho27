#include <stdio.h>

int main() {
    // Definindo variáveis 
    int codigo;
    char nome[20];
    double populacao;
    double area;
    double pib;
    int pontos;

    // Perguntando os dados
    printf("Qual o código da cidade?: ");
    scanf("%d", &codigo);

    printf("Qual o nome da cidade? ");
    scanf("%s", nome);

    printf("Qual a população?: ");
    scanf("%f", &populacao);  // 

    printf("Qual a área?: ");
    scanf("%f", &area);  

    printf("Qual o PIB? ");
    scanf("%f", &pib);  

    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontos); 

    //Calculando o pib per capita e a densidade populacional

    double pib_per_capita = pib / populacao;
    double densidade = populacao / area;

    // Exibindo as respostas
    printf("\nDados da carta:\n");
    printf("Código: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %f habitantes\n", populacao);  // Corrigido: removido o acento
    printf("Área: %f Km²\n", area);
    printf("PIB: %f bilhões\n", pib);
    printf("Pontos turísticos:%d\n", pontos);  

//Exibindo resultado dos cálculos

    printf("O per capita da cidade é: %.2f\n", pib_per_capita);
    printf(" A densidade da cidade é: %.2f\n", densidade);

    return 0;
}
