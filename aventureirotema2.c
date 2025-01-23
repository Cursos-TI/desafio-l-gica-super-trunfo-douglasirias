#include <stdio.h>
#include <string.h> // Inclui <string.h> para uso de strcspn
#include <stdlib.h>
#include <time.h>
    //Estou continuando do mesmo arquivo do Tema 1
    /*O sistema ja permite o jogador inserir os dados da carta, e o sistema calcula automaticamente a densidade e o pib per capita
    E já estava comparando as cartas
    Vou fazer meu Jogo Super Trunfo contra o computador e contra o usuario, vai ter a opcao no menu*/
int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Variaveis da carta 1
    int pontosturisticos;
    float area, pib, densidade, pibpercapita, superpoder;
    unsigned long int populacao;
    char nome[50], codigocarta[20], estado[3];

    //Variaveis da carta 2
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    unsigned long int populacao2;
    char nome2[50], codigocarta2[20], estado2[3];

    //Variaveis de escolha
    int opcao, escolhaJogador1, escolhaJogador2, escolhaComputador;
    srand(time(0)); //especificar que o computador de resultado aleatorio

    //Menu Principal
    printf("Jogo Super Trunfo\n");
    printf("Escolha uma opção:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver as Regras do Jogo\n");
    printf("3. Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Começa o jogo aqui.\n");
        break;
        case 2:
            printf("Regras do Jogo:\n");
            printf("1. É permitido apenas um código por carta \n");
            printf("2. É permitido apenas um nome por carta\n");
            printf("3. Vence quem tiver o valor maior, exceto na densidade populacional, onde vence o menor valor. \n");
            printf("4. Cada carta tem um Super Poder, que é a soma de todos os outros atributos.\n");
            printf("5. Para se tornar o campeão, vence quem tiver a carta com maior pontuação geral \n");
        break;
        case 3:
            printf("Saindo do jogo.\n");
        break;
        default:
            printf("Opção Inválida.\n");
    }

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Primeira Carta
    // Aqui estou pedindo os dados da primeira carta
    /* Tive que colocar [0] no scanf, estava dando um erro de sinxtaxe 'format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘char (*)[3]’ [-Wformat=]'
     Entao pesquisei e tinha varias formas mas que nao aprendi, esta foi a que achei mais facil e menos impactante.
     O codigo estava executando mesmo com o erro, mas estou procurando nao deixar nenhum aviso*/

    printf("***Primeira Carta***\n");
    printf("Digite o estado da primeira carta: \n");
    scanf("%s",&estado[0]);

    printf("Digite o código da primeira carta: \n"); 
    scanf("%s", &codigocarta[0]);
    while (getchar() != '\n'); // Tive que colocar esse codigo porque estava pedindo o nome e a populaçao juntos
    
    printf("Digite o nome da cidade da primeira carta: \n");
    fgets(nome, sizeof(nome), stdin); nome[strcspn(nome, "\n")] = '\0'; // Para ler os espaços em branco, tive que pesquisar o fgets e while

    printf("Digite a população da primeira carta: \n");
    scanf("%ld", &populacao);

    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontosturisticos);

    //Calcular a Densidade Populacional e Pib per capita:

    densidade = (float)(populacao / area);
    pibpercapita = (float)(pib / populacao);

     //Super poder da carta1
    superpoder = (float)(populacao + area + pib + pibpercapita + densidade + pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("O Estado é: %s\n", estado);
    printf("O código da carta é: %s\n", codigocarta);
    printf("O nome da cidade é: %s\n", nome);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos);
    printf("A Área da Cidade é: %f km²\n", area);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib);
    printf("A População da Cidade é: %ld\n", populacao);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade);
    printf("O PIB per Capita é: %f reais\n", pibpercapita);
    printf("O super poder da carta 1 é: %f\n", superpoder);

    // Segunda Carta
    // Aqui estou pedindo os dados da segunda carta
    printf("***Segunda Carta***\n");

    printf("Digite o estado da segunda carta: \n");
    scanf("%s",&estado2[0]);

    printf("Digite o código da segunda carta: \n"); 
    scanf("%s", &codigocarta2[0]);
    
    while (getchar() != '\n'); // Tive que colocar esse codigo porque estava pedindo o nome e a populaçao juntos
    printf("Digite o nome da cidade da segunda carta: \n");
    fgets(nome2, sizeof(nome2), stdin); nome2[strcspn(nome2, "\n")] = '\0'; //Para ler os espaços em branco, tive que pesquisar o fgets e while

    printf("Digite a população da segunda carta: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Calcular a Densidade Populacional e Pib per capita:
    densidade2 = (float)(populacao2 / area2);
    pibpercapita2 = (float)(pib2 / populacao2);
    //Super poder da carta2
    superpoder2 = (float)(populacao2 + area2 + pib2 + pibpercapita2 + densidade2 + pontosturisticos2);

    printf("O Estado é: %s\n", estado2);
    printf("O código da carta é: %s\n", codigocarta2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("A Área da Cidade é: %f km²\n", area2);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib2);
    printf("A População da Cidade é: %ld\n", populacao2);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade2);
    printf("O PIB per Capita é: %f reais\n", pibpercapita2);
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

    printf("******Comparar Cartas******\n"); // Já estou colocando caso os valores sejam iguais, para mostrar que deu empate, pq estava exibindo errado quem ganhava quando o valor era igual
    // Comparar a populacao das duas caratas
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // Não coloquei essa variavel cidadeVencedor, fiz tudo com if e else
    printf("Carta 1 - Estado: %s, Código: %s, População: %ld,\n", estado, codigocarta, populacao);
    printf("Carta 2 - Estado: %s, Código: %s, População: %ld,\n", estado2, codigocarta2, populacao2);
    if (populacao > populacao2) {
    printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (populacao < populacao2) {
    printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
    printf("Resultado: Empate!\n");
    }

    // Comparar a área das duas cartas
    printf("Carta 1 - Estado: %s, Código: %s, Área: %f,\n", estado, codigocarta, area);
    printf("Carta 2 - Estado: %s, Código: %s, Área: %f,\n", estado2, codigocarta2, area2);
    if (area > area2){
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (area < area2) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    // Comparar o PIB per capita das duas cartas
    printf("Carta 1 - Estado: %s, Código: %s, PIB per Capita: %f,\n", estado, codigocarta, pibpercapita);
    printf("Carta 2 - Estado: %s, Código: %s, PIB per Capita: %f,\n", estado2, codigocarta2, pibpercapita2);
    if (pibpercapita > pibpercapita2){
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (pibpercapita < pibpercapita2) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    // Comparar o PIB das duas cartas
    printf("Carta 1 - Estado: %s, Código: %s, PIB: %f,\n", estado, codigocarta, pib);
    printf("Carta 2 - Estado: %s, Código: %s, PIB: %f,\n", estado2, codigocarta2, pib2);
    if (pib > pib2){
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (pib < pib2) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    // Comparar a densidade populacional das duas cartas
    printf("Carta 1 - Estado: %s, Código: %s, Densidade Populacional: %f,\n", estado, codigocarta, densidade);
    printf("Carta 2 - Estado: %s, Código: %s, Densidade Populacional: %f,\n", estado2, codigocarta2, densidade2);
    if (densidade < densidade2){
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (densidade < densidade2) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    
    /*No nivel novato do Tema 2 nao pediu para comparar os pontos turisticos
    Mas eu acho que fica melhor para o jogo, ja que a variavel e inteira
    Alem do super poder que foi criado anteriormente*/
    // Comparar a quantidade de pontos turisticos das duas cartas
    printf("Carta 1 - Estado: %s, Código: %s, Pontos Turisticos: %d,\n", estado, codigocarta, pontosturisticos);
    printf("Carta 2 - Estado: %s, Código: %s, Pontos Turisticos: %d,\n", estado2, codigocarta2, pontosturisticos2);
    if (pontosturisticos > pontosturisticos2){
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (pontosturisticos < pontosturisticos2) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }
    // Comparar o Super Poder das duas cartas
    printf("Carta 1 - Estado: %s, Código: %s, Super Poder: %f,\n", estado, codigocarta, superpoder);
    printf("Carta 2 - Estado: %s, Código: %s, Super Poder: %f,\n", estado2, codigocarta2, superpoder2);
    if (superpoder > superpoder2){
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (superpoder < superpoder2) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}