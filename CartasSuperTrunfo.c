int main() {
    // Definindo variáveis 
    int codigo;
    char nome[20];
    double populacao;  // Corrigido: removido o acento
    double area;
    double pib;
    int pontos;

    // Perguntando os dados
    printf("Qual o código da cidade?: ");
    scanf("%d", &codigo);

    printf("Qual o nome da cidade? ");
    scanf("%s", nome);  // Corrigido: não precisa do '&' para strings

    printf("Qual a população?: ");
    scanf("%lf", &populacao);  // Corrigido: usado %lf para double

    printf("Qual a área?: ");
    scanf("%lf", &area);  // Corrigido: usado %lf para double

    printf("Qual o PIB? ");
    scanf("%lf", &pib);  // Corrigido: usado %lf para double

    printf("Quantos pontos turísticos? ");
    scanf("%d", &pontos);  // Corrigido: usado '&' para passar o endereço

    // Exibindo as respostas
    printf("\nDados da carta:\n");
    printf("Código: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.2f habitantes\n", populacao);  // Corrigido: removido o acento
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("%d pontos turísticos\n", pontos);  // Corrigido: adicionado \n no final

    return 0;
}
