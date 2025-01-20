#include <stdio.h>
#include <string.h> //Tive que incluir pois estava apresentando o resultado de duas variaveis junto
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Variaveis da carta 1
    int pontosturisticos;
    float area, pib, densidade, pibpercapita, superpoder;
    unsigned long int populacao;
    char nome[50], codigocarta[20], estado[2];

    //Variaveis da carta 2
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    unsigned long int populacao2;
    char nome2[50], codigocarta2[20], estado2[2];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Primeira Carta
    // Aqui estou pedindo os dados da primeira carta
    // Tive que optar por while e fgets porque estava pedindo duas variaveis de uma so vez
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Calcular a Densidade Populacional e Pib per capita:

    densidade = (float)(populacao / area);
    pibpercapita = (float)(pib / populacao);

    printf("O Estado é: %s\n", estado);
    printf("O código da carta é: %s\n", codigocarta);
    printf("O nome da cidade é: %s\n", nome);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos);
    printf("A Área da Cidade é: %f km²\n", area);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib);
    printf("A População da Cidade é: %ld\n", populacao);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade);
    printf("O PIB per Capita é: %f reais\n", pibpercapita);

    //Super poder da carta1
    superpoder = (float)(populacao + area + pib + pibpercapita + densidade + pontosturisticos);
    printf("O super poder da carta 1 é: %f\n", superpoder);

    //Segunda Carta
    // Aqui estou pedindo os dados da segunda carta
    // Tive que usar novamente o while e fgets
    printf("***Segunda Carta***\n");
    printf("Digite o estadoda segunda carta: \n");
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Calcular a Densidade Populacional e Pib per capita:
    densidade = (float)(populacao2 / area2);
    pibpercapita = (float)(pib2 / populacao2);

    printf("O Estado é: %s\n", estado2);
    printf("O código da carta é: %s\n", codigocarta2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("A Área da Cidade é: %f km²\n", area2);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib2);
    printf("A População da Cidade é: %ld\n", populacao2);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade2);
    printf("O PIB per Capita é: %f reais\n", pibpercapita2);

    //Super poder da carta2
    superpoder2 = (float)(populacao2 + area2 + pib2 + pibpercapita2 + densidade2 + pontosturisticos2);
    printf("O super poder da carta 2 é: %f\n", superpoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
     /*Comparar os valores das cartas, populacao, area, pib, pib per capita, 
    densidade populacional invertida, pontos turisticos*/
    if (populacao > populacao2){
        printf("Cidade 1 tem mais população.\n");
    }else{
        printf("Cidade 2 tem mais população.\n");
    }

    if (area > area2){
        print("Cidade 1 tem mais área por km².\n");
    }else{
        printf("Cidade 2 tem mais área por km².\n");
    }

    if (pibpercapita > pibpercapita2){
        print("Cidade 1 tem o maior pib per capita.\n");
    }else{
        printf("Cidade 2 tem o maior pib per capita.\n");
    }
    
    if (pib > pib2){
        print("Cidade 1 tem o maior PIB.\n");
    }else{
        printf("Cidade 2 tem o maior PIB.\n");
    }
    
    if (densidade < densidade2){
        print("Cidade 1 tem a menor densidade populacional.\n");
    }else{
        printf("Cidade 2 tem a menor densidade populacional.\n");
    }

    /*No nivel novato do Tema 2 nao pediu para comparar os pontos turisticos
    Mas eu acho que fica melhor para o jogo, ja que a variavel e inteira
    Alem do super poder que foi criado anteriormente*/
    if (pontosturisticos < pontosturisticos2){
        print("Cidade 1 tem mais pontos turisticos.\n");
    }else{
        printf("Cidade 2 tem mais pontos turisticos.\n");
    }

    if (superpoder < superpoder2){
        print("Cidade 1 tem o super poder mais elevado.\n");
    }else{
        printf("Cidade 2 tem o super poder mais elevado.\n");
    }
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
