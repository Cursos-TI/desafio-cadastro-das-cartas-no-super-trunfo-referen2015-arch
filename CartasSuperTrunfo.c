#include <stdio.h>

int main(){

    // Declaração das variáveis para armazenar dados da primeira carta
    int codigodacarta;
    char siglas[10];
    char nomedacidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Declaração das variáveis para armazenar dados da segunda carta
    int codigodacarta2;               
    char siglas2[10];           
    char nomedacidade2[50];    
    unsigned long int populacao2;
    float area2;               
    float pib2;                
    int pontosturisticos2;     

    // Exibe título do programa na tela
    printf("SUPER TRUNFO DE PAÍSES\n");
    printf("\n");              

    // Instruções para o usuário
    printf("Vamos Inserir os dados das cartas do SUPER TRUNFO DE PAÍSES? \n");
    printf("As cartas trarão informações sobre CIDADES. \n");
    printf("O nome da CIDADE não poderá ter caracter especial. \n");
    printf("Os ESTADOS serão representados por suas siglas. \n");
    printf("A numeração das cartas iniciará com o número 01 e a última terá o número 08. \n");
    printf("\n");

    // Primeira carta
    printf("Insira as siglas do Estado: ");
    scanf("%s", siglas);

    printf("Insira o número da carta: ");
    scanf("%d", &codigodacarta);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade);

    printf("Insira o número de habitantes (População): ");
    scanf("%lu", &populacao);

    printf("Insira o tamanho da cidade: ");
    scanf("%f", &area);

    printf("Insira o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosturisticos);

    printf("\n\n");

    printf("Agora vamos cadastrar a próxima carta \n\n");

    // Segunda carta
    printf("Insira as siglas do Estado: ");
    scanf("%s", siglas2);

    printf("Insira o número da carta: ");
    scanf("%d", &codigodacarta2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade2);

    printf("Insira o número de habitantes (População): ");
    scanf("%lu", &populacao2);
    printf("Insira o tamanho da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Comparações
    printf("Comparação de Cartas:\n\n");

    if (populacao > populacao2)   
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");

    if (area > area2)   
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");

    if (pib > pib2)   
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    if (pontosturisticos > pontosturisticos2)   
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");

    if (populacao / area < populacao2 / area2)   
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    if (pib / populacao > pib2 / populacao2)   
        printf("PIB per capta: Carta 1 venceu (1)\n");
    else
        printf("PIB per capta: Carta 2 venceu (0)\n");

    if (populacao + area + pib + pontosturisticos + populacao / area + pib / populacao >
        populacao2 + area2 + pib2 + pontosturisticos2 + populacao2 / area2 + pib2 / populacao2)   
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}