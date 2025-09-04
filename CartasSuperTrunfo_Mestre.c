#include <stdio.h>

int main(){

    // Primeira carta
    int codigodacarta;
    char siglas[10];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade1, pibpercapita1, superpoder1;

    // Segunda carta
    int codigodacarta2;               
    char siglas2[10];           
    char nomedacidade2[50];    
    int populacao2;            
    float area2;               
    float pib2;                
    int pontosturisticos2;     
    float densidade2, pibpercapita2, superpoder2;

    // Exibe título do programa na tela
    printf("SUPER TRUNFO DE PAÍSES\n\n");              

    // Instruções para o usuário
    printf("Vamos Inserir os dados das cartas do SUPER TRUNFO DE PAÍSES? \n");
    printf("As cartas trarão informações sobre CIDADES. \n");
    printf("O nome da CIDADE não poderá ter caracter especial. \n");
    printf("Os ESTADOS serão representados por suas siglas. \n");
    printf("A numeração das cartas iniciará com o número 01 e a última terá o número 08. \n\n");

    // ===== Primeira Carta =====
    printf("\nVamos cadastrar a primeira carta \n\n");
    
    printf("Insira as siglas do Estado: ");
    scanf("%s", siglas);

    printf("Insira o número da carta: ");
    scanf("%d", &codigodacarta);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade);

    printf("Insira o número de habitantes (População): ");
    scanf("%d", &populacao);

    printf("Insira o tamanho da cidade (km²): ");
    scanf("%f", &area);

    printf("Insira o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Insira a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);

    densidade1 = populacao / area;
    pibpercapita1 = pib / populacao;
    superpoder1 = (float)populacao + area + pib + (float)pontosturisticos + pibpercapita1 + (1.0f / densidade1);

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

    printf("Insira o tamanho da cidade (km²): ");
    scanf("%f", &area2);

    printf("Insira o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + (1.0f / densidade2);

    // ===== Comparação =====
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosturisticos > pontosturisticos2) ? 1 : 2, (pontosturisticos > pontosturisticos2));

    // Densidade → menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));

    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2) ? 1 : 2, (pibpercapita1 > pibpercapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));

    return 0;
}