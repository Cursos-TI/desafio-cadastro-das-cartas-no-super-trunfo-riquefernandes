#include <stdio.h>

int main() {
    // Primeira carta
    char estado;
    char code[4];        // código (ex: SP1)
    char cityName[20];   // nome da cidade
    int population;      // população
    float area;          // área em km²
    float pib;           // PIB
    int NTPoints;        // número de pontos turísticos

    // Segunda carta
    char estado1;
    char code1[4];
    char cityName1[20];
    int population1;
    float area1;
    float pib1;
    int NTPoints1;

    // Entrada de dados - Carta 1
    printf("Carta 1\n");
    printf("Qual o Estado?\n");
    scanf("%c", &estado);

    printf("Qual é o código?\n");
    scanf("%s", code);

    printf("Qual é o nome da cidade?\n");
    scanf("%s", cityName);

    printf("Qual é o tamanho da população?\n");
    scanf("%d", &population);

    printf("Qual é a Área em KM²?\n");
    scanf("%f", &area);

    printf("Qual é o PIB?\n");
    scanf("%f", &pib);

    printf("Qual é o número de pontos turísticos?\n");
    scanf("%d", &NTPoints);

    // Entrada de dados - Carta 2
    printf("\nCarta 2\n");
    printf("Qual o Estado?\n");
    scanf("%c", &estado1);

    printf("Qual é o código?\n");
    scanf("%s", code1);

    printf("Qual é o nome da cidade?\n");
    scanf("%s", cityName1);

    printf("Qual é o tamanho da população?\n");
    scanf("%d", &population1);

    printf("Qual é a Área em KM²?\n");
    scanf("%f", &area1);

    printf("Qual é o PIB?\n");
    scanf("%f", &pib1);

    printf("Qual é o número de pontos turísticos?\n");
    scanf("%d", &NTPoints1);

    // Impressão das cartas
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", code);
    printf("Cidade: %s\n", cityName);
    printf("População: %d\n", population);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", NTPoints);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", cityName1);
    printf("População: %d\n", population1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", NTPoints1);

    return 0;
}
