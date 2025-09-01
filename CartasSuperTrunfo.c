#include <stdio.h>
#include <string.h>



int main(){       // Função principal do programa, onde a execução começa

    // Declaração das variáveis para armazenar dados da primeira carta
    int codigodacarta;
    char siglas[10];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Declaração das variáveis para armazenar dados da segunda carta
    int codigodacarta2;               
    char siglas2[10];           
    char nomedacidade2[50];    
    int populacao2;            
    float area2;               
    float pib2;                
    int pontosturisticos2;     

    // Exibe título do programa na tela
    printf("SUPER TRUNFO DE PAÍSES\n");
    // Linha em branco para espaçamento
    printf("\n");              

    // Instruções para o usuário sobre o que será inserido
    printf("Vamos Inserir os dados das cartas do SUPER TRUNFO DE PAÍSES? \n");
    printf("As cartas trarão informações sobre CIDADES. \n");
    printf("Os nomes das CIDADES não poderão ter caracteres especiais. \n");
    printf("Os ESTADOS serão representados por suas siglas. \n");
    printf("A numeração das cartas iniciará com o número 01 e a última terá o número 08. \n");
    // Linha em branco para espaçamento
    printf("\n");

    // Solicita a sigla do Estado da primeira carta
    printf("Insira as siglas do Estado: ");
    // Lê a string (siglas do estado) para 'siglas'
    scanf("%s", siglas);

    // Solicita o número da primeira carta
    printf("Insira o número da carta: ");
    scanf("%d", &codigodacarta);      // Lê inteiro para 'codigodacarta'

    // Solicita o nome da cidade da primeira carta
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade); // Lê string para 'nomedacidade' (sem espaços)

    // Solicita a população da cidade da primeira carta
    printf("Insira o número de habitantes (População): ");
    scanf("%d", &populacao);   // Lê inteiro para 'populacao'

    // Solicita a área da cidade da primeira carta
    printf("Insira o tamanho da cidade: ");
    scanf("%f", &area);        // Lê float para 'area'

    // Solicita o PIB da cidade da primeira carta
    printf("Insira o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib);         // Lê float para 'pib'

    // Solicita o número de pontos turísticos da primeira carta
    printf("Insira a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosturisticos); // Lê inteiro para 'pontosturisticos'

    // Espaçamento visual no console
    printf("\n");
    printf("\n");

    // Mensagem informando que a próxima carta será cadastrada
    printf("Agora vamos cadastrar a próxima carta \n");
    printf("\n");

    // Solicita a sigla do Estado da segunda carta
    printf("Insira a siglas do Estado: ");
    // Lê string para 'siglas2'
    scanf("%s", siglas2);

    // Solicita o número da segunda carta
    printf("Insira o número da carta: ");
    // Lê inteiro para 'codigodacarta2'
    scanf("%d", &codigodacarta2);

    // Solicita o nome da cidade da segunda carta
    printf("Insira o nome da cidade: ");
    // Lê string para 'nomedacidade2' (sem espaços)
    scanf(" %[^\n]", nomedacidade2);

    // Solicita a população da cidade da segunda carta
    printf("Insira o número de habitantes (População): ");
    // Lê inteiro para 'populacao2'
    scanf("%d", &populacao2);

    // Solicita a área da cidade da segunda carta
    printf("Insira o tamanho da cidade: ");
    // Lê float para 'area2'
    scanf("%f", &area2);

    // Solicita o PIB da cidade da segunda carta
    printf("Insira o PIB (Produto Interno Bruto) da cidade: ");
    // Lê float para 'pib2'
    scanf("%f", &pib2);

    // Solicita o número de pontos turísticos da segunda carta
    printf("Insira a quantidade de Pontos Turísticos da cidade: ");
    // Lê inteiro para 'pontosturisticos2'
    scanf("%d", &pontosturisticos2);
   
    // Espaçamento visual
    printf("\n");

    //Exibe os dados da primeira carta formatados na tela
    printf("Carta %d:\n" "Estado: %s\n", codigodacarta, siglas);
    printf("Código: %s%02d\n" "Cidade: %s\n" "População: %d Hab\n" 
           "Área: %.2f km²\n" "PIB: R$ %.3f bilhões de reais\n" 
           "Número de Pontos turísticos: %d\n", 
           siglas, codigodacarta, nomedacidade, populacao, area, pib, pontosturisticos);

    // Espaçamento visual
    printf("\n");

    //Exibe os dados da segunda carta formatados na tela
    printf("Carta %d:\n" "Estado: %s\n", codigodacarta2, siglas2);
    printf("Código: %s%02d\n" "Cidade: %s\n" "População: %d Hab\n" 
           "Área: %.2f km²\n" "PIB: R$ %.3f bilhões de reais\n" 
           "Número de Pontos turísticos: %d\n", 
           siglas2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontosturisticos2);
    
    // Espaçamento visual
    printf("\n");
    
    // Indica que o programa terminou corretamente
    return 0;
}