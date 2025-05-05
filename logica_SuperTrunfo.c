#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    srand(time(NULL));


    // Declaração das variáveis para a carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Declaração das variáveis para a carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    int indexJogador = rand() % 3;
    int indexComputador;
    char carta_computador[90];
    char valor_jogador[80];
    int carta_jogador;

    // Cadastro da carta 1
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da carta 2
    printf("\nDigite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição dos dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
 
    //Variáveis
    
    double populacao,area, Pib, densidade, Pib_per_capita;

    // Entrada de Dados
    
    printf(" Digite a populacao total: ");
    scanf("%lf",&populacao);

    printf(" Digite a area km total: ");
    scanf("%lf",&area);

    printf(" Digite o Pib total: ");
    scanf("%lf",&Pib);

    // Cálculos
    densidade = populacao / area;
    Pib_per_capita = Pib / populacao;

    // Saída

    printf("\nDensidade populacional: %2.f hab/km\n",densidade);
    printf("PIB pe capita : R$ %2.f\n", Pib_per_capita);

    // Vencedor

    if (populacao1 > populacao2) {
        printf("Codigo 1 tem maior população.\n");
    } else{
        printf("Codigo 2 tem maior população.\n");
    }