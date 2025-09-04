#include <stdio.h>

int main(){

    // Declaração das variáveis para armazenar dados da primeira carta
    int codigodacarta;
    char siglas[10];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Variáveis para cálculos da primeira carta
    float densidade1;
    float pibpercapita1;

    // Declaração das variáveis para armazenar dados da segunda carta
    int codigodacarta2;               
    char siglas2[10];           
    char nomedacidade2[50];    
    int populacao2;            
    float area2;               
    float pib2;                
    int pontosturisticos2;     

    // Variáveis para cálculos da segunda carta
    float densidade2;
    float pibpercapita2;

    // Exibe título do programa na tela
    printf("SUPER TRUNFO DE PAÍSES\n\n");              

    // Instruções para o usuário
    printf("Vamos Inserir os dados das cartas do SUPER TRUNFO DE PAÍSES? \n");
    printf("As cartas trarão informações sobre CIDADES. \n");
    printf("O nome da CIDADE não poderá ter caracter especial. \n");
    printf("Os ESTADOS serão representados por suas siglas. \n");
    printf("A numeração das cartas iniciará com o número 01 e a última terá o número 08. \n\n");

    // ===== Primeira Carta =====
    printf("Insira as siglas do Estado: ");
    scanf("%s", siglas);

    printf("Insira o número da carta: ");
    scanf("%d", &codigodacarta);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade);

    printf("Insira o número de habitantes (População): ");
    scanf("%d", &populacao);

    printf("Insira o tamanho da cidade: ");
    scanf("%f", &area);

    printf("Insira o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosturisticos);

    // Cálculos da Densidade Populacional e do PIB per Capta da primeira carta
    densidade1 = populacao / area;
    pibpercapita1 = pib / populacao;

    // ===== Segunda Carta =====
    printf("\nAgora vamos cadastrar a próxima carta \n\n");

    printf("Insira as siglas do Estado: ");
    scanf("%s", siglas2);

    printf("Insira o número da carta: ");
    scanf("%d", &codigodacarta2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade2);

    printf("Insira o número de habitantes (População): ");
    scanf("%d", &populacao2);

    printf("Insira o tamanho da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos da Densidade Populacional e do PIB per Capta da segunda carta
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // ===== Exibição =====
    printf("\nCarta %d:\nEstado: %s\n", codigodacarta, siglas);
    printf("Código: %s%02d\nCidade: %s\nPopulação: %d Hab\n", siglas, codigodacarta, nomedacidade, populacao);
    printf("Área: %.2f km²\nPIB: R$ %.2f bilhões de reais\nNúmero de Pontos turísticos: %d\n", area, pib, pontosturisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f por habitante\n\n", pibpercapita1);

    printf("Carta %d:\nEstado: %s\n", codigodacarta2, siglas2);
    printf("Código: %s%02d\nCidade: %s\nPopulação: %d Hab\n", siglas2, codigodacarta2, nomedacidade2, populacao2);
    printf("Área: %.2f km²\nPIB: R$ %.2f bilhões de reais\nNúmero de Pontos turísticos: %d\n", area2, pib2, pontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f por habitante\n", pibpercapita2);

    return 0;
}