#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    // Declaracao de variaveis
    char cod[4], nom[20];
    float pop = 0, area = 0, pibcid = 0, pibcap = 0, densi = 0;
    int ntur = 0;

    // Entrada e armazenamento dos dados
    printf("Informe o código da carta: ");
    scanf("%s", &cod);
    printf("Informe o nome da cidade: ");
    scanf("%s", &nom);
    printf("Informe a população da cidade: ");
    scanf("%f", &pop);
    printf("Informe a área da cidade: ");
    scanf("%f", &area);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibcid);
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%i", &ntur);

    // Calculo PIB per capita e densidade populacional
    pibcap = pibcid/pop;
    densi = pop/area;

    // Apresentacao dos dados da carta
    printf("\n\nCódigo da carta: %s\n", cod);
    printf("Nome da cidade: %s\n", nom);
    printf("População da cidade: %.2f\n", pop);
    printf("Área da cidade: %.2f km²\n", area);
    printf("Densidade populacional: %f pessoas/km²\n", densi);
    printf("PIB da cidade: %.2f\n", pibcid);
    printf("PIB per capita: %f reais\n", pibcap);
    printf("Número de pontos turísticos: %i\n", ntur);
    
}

