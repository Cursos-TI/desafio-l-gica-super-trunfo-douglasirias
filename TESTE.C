#include <stdio.h>

int main() {
    // Variáveis da carta 1
    int pontosturisticos;
    float area, pib, densidade, pibpercapita, superpoder;
    unsigned long int populacao;
    char nome[50], codigocarta[20], estado[3];

    // Variáveis da carta 2
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    unsigned long int populacao2;
    char nome2[50], codigocarta2[20], estado2[3];

    // Primeira Carta
    printf("***Primeira Carta***\n");
    printf("Digite o estado da primeira carta: ");
    scanf("%s", estado);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigocarta);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nome);
    printf("Digite a população da primeira carta: ");
    scanf("%ld", &populacao);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &area);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosturisticos);

    densidade = populacao / area;
    pibpercapita = pib / populacao;

    printf("O Estado é: %s\n", estado);
    printf("O código da carta é: %s\n", codigocarta);
    printf("O nome da cidade é: %s\n", nome);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos);
    printf("A Área da Cidade é: %f km²\n", area);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib);
    printf("A População da Cidade é: %ld\n", populacao);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade);
    printf("O PIB per Capita é: %f reais\n", pibpercapita);

    superpoder = populacao + area + pib + pibpercapita + densidade + pontosturisticos;
    printf("O super poder da carta 1 é: %f\n", superpoder);

    // Segunda Carta
    printf("***Segunda Carta***\n");
    printf("Digite o estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nome2);
    printf("Digite a população da segunda carta: ");
    scanf("%ld", &populacao2);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("O Estado é: %s\n", estado2);
    printf("O código da carta é: %s\n", codigocarta2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("A Área da Cidade é: %f km²\n", area2);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib2);
    printf("A População da Cidade é: %ld\n", populacao2);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade2);
    printf("O PIB per Capita é: %f reais\n", pibpercapita2);

    superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + densidade2 + pontosturisticos2;
    printf("O super poder da carta 2 é: %f\n", superpoder2);

    // Comparação de Cartas
    printf("Comparação de Cartas\n");
    printf("Carta 1 - Estado: %s Código: %s População: %ld\n", estado, codigocarta, populacao);
    printf("Carta 2 - Estado: %s Código: %s População: %ld\n", estado2, codigocarta2, populacao2);

    return 0;
}
