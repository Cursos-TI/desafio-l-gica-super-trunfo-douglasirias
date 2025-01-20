#include <stdio.h>
#include <string.h>

int main() {
    int pontosturisticos;
    float area, pib, densidade, pibpercapita, superpoder;
    unsigned long int populacao;
    char nome[50], codigocarta[20], estado[3];

    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    unsigned long int populacao2;
    char nome2[50], codigocarta2[20], estado2[3];

    printf("***Primeira Carta***\n");
    printf("Digite o estado da primeira carta: \n");
    fgets(estado, sizeof(estado), stdin); estado[strcspn(estado, "\n")] = '\0';
    while (getchar() != '\n');
    printf("Digite o código da primeira carta: \n");
    fgets(codigocarta, sizeof(codigocarta), stdin); codigocarta[strcspn(codigocarta, "\n")] = '\0';
    printf("Digite o nome da cidade da primeira carta: \n");
    fgets(nome, sizeof(nome), stdin); nome[strcspn(nome, "\n")] = '\0';
    printf("Digite a população da primeira carta: \n");
    scanf("%ld", &populacao);
    while (getchar() != '\n');
    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area);
    while (getchar() != '\n');
    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib);
    while (getchar() != '\n');
    printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
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

    // Limpando variáveis e buffer de entrada antes de ler a segunda carta
    memset(estado2, 0, sizeof(estado2));
    while (getchar() != '\n');
    
    printf("***Segunda Carta***\n");
    printf("Digite o estado da segunda carta: \n");
    fgets(estado2, sizeof(estado2), stdin); estado2[strcspn(estado2, "\n")] = '\0';
    while (getchar() != '\n');
    printf("Digite o código da segunda carta: \n");
    fgets(codigocarta2, sizeof(codigocarta2), stdin); codigocarta2[strcspn(codigocarta2, "\n")] = '\0';
    printf("Digite o nome da cidade da segunda carta: \n");
    fgets(nome2, sizeof(nome2), stdin); nome2[strcspn(nome2, "\n")] = '\0';
    printf("Digite a população da segunda carta: \n");
    scanf("%ld", &populacao2);
    while (getchar() != '\n');
    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);
    while (getchar() != '\n');
    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);
    while (getchar() != '\n');
    printf("Digite a quantidade de pontos turísticos da segunda carta: \n");
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
