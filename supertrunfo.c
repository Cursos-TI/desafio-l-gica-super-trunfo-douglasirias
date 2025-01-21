#include <stdio.h>
    //Estou continuando do mesmo arquivo do Tema 1
    /*O sistema ja permite o jogador inserir os dados da carta, e o sistema calcula automaticamente a densidade e o pib per capita
    E já estava comparando as cartas*/
int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Variaveis da carta 1
    int pontosturisticos;
    float area, pib, densidade, pibpercapita, superpoder;
    unsigned long int populacao;
    char nome[50], codigocarta[20], estado[4];

    //Variaveis da carta 2
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    unsigned long int populacao2;
    char nome2[50], codigocarta2[20], estado2[4];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Primeira Carta
    // Aqui estou pedindo os dados da primeira carta

    printf("***Primeira Carta***\n");
    printf("Digite o estado da primeira carta: \n");
    scanf("%s", &estado);
    printf("Digite o código da primeira carta: \n"); 
    scanf("%s", &codigocarta);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nome);
    printf("Digite a população da primeira carta: \n");
    scanf("%ld", &populacao);
    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area);
    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontosturisticos);
}