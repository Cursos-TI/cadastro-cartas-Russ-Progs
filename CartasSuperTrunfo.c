#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char cod_carta1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_tur1;
    float densidadepop1;
    float pibpercap1;

    char estado2;
    char cod_carta2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_tur2;
    float densidadepop2;
    float pibpercap2;

  // Área para entrada de dados
    printf("Carta 1\n");
    printf("Digite as seguintes informações.\n");
    printf("Estado: \n");
    scanf("%c", &estado1);
    printf("Código da carta: \n");
    scanf("%s", &cod_carta1);
    printf("Cidade: \n");
    scanf("%s", &cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_tur1);
    
    densidadepop1 = (float)populacao1 / area1;
    pibpercap1 = (float)pib1 / populacao1;

    printf("Carta 2\n");
    printf("Digite as seguintes informações.\n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("Código da carta: \n");
    scanf("%s", &cod_carta2);
    printf("Cidade: \n");
    scanf("%s", &cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_tur2);
    
    densidadepop2 = (float)populacao2 / area2;
    pibpercap2 = (float)pib2 / populacao2;

  // Área para exibição dos dados da cidade
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_tur1);
    printf("A Densidade Populacional é: %.2f\n", densidadepop1);
    printf("O PIB per Capta é: %.2f\n", pibpercap1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_tur2);
    printf("A Densidade Populacional é: %.2f\n", densidadepop2);
    printf("O PIB per Capta é: %.2f\n", pibpercap2);

return 0;
} 
