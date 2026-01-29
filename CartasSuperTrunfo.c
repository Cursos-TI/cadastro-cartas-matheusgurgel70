#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int p_turisticos, p_turisticos2;

  // Área para entrada de dados

  // CARTA 1
    printf("------- CARTA 1 -------\n");
    printf("Insira o estado: ");
    scanf(" %c", &estado);
    printf("Insira o código: ");
    scanf("%s", &codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade);
    printf("Insira a população: ");
    scanf("%d", &populacao);
    printf("Insira a área(km²): ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &p_turisticos);



    // CARTA 2
    printf("------- CARTA 2 -------\n");
    printf("Insira o estado: ");
    scanf(" %c", &estado2);
    printf("Insira o código: ");
    scanf("%s", &codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Insira a população: ");
    scanf("%d", &populacao2);
    printf("Insira a área(km²): ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &p_turisticos2);

  // Área para exibição dos dados da cidade
  // EXIBIÇÃO DAS CARTAS
    printf("\n\n\nCarta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos turísticos: %d\n\n", p_turisticos);
    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n\n", p_turisticos2);


return 0;
}
