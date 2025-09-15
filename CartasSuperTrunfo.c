#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2], estado2[2];
  char codigoCarta[4], codigoCarta2[4];
  char nomeCidade[30], nomeCidade2[30];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int numeroPontosTuristicos, numeroPontosTuristicos2;


  // Área para entrada de dados
  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado);

  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta);

  printf("\n Digite o nome da cidade: ");
  scanf("%s", &nomeCidade);

  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%d", &populacao);

  printf("\n Digite a area total da cidade em Km2: ");
  scanf(" %f", &area);

  printf("\n Digite o PIB cidade em bilhões de Dolares: ");
  scanf(" %f", &pib);

  printf("\n Digite a quantidade de pontos turisticos da cidade: ");
  scanf(" %d", &numeroPontosTuristicos);



  printf("\n Digite as informações da Carta 2! \n");

  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado2);

  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta2);

  printf("\n Digite o nome da cidade: ");
  scanf("%s", &nomeCidade2);

  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%d", &populacao2);

  printf("\n Digite a area total da cidade em Km2: ");
  scanf(" %f", &area2);

  printf("\n Digite o PIB cidade em bilhões de Dolares: ");
  scanf(" %f", &pib2);

  printf("\n Digite a quantidade de pontos turisticos da cidade: ");
  scanf(" %d", &numeroPontosTuristicos2);


  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Area da cidade: %.2f Km2\n", area);
  printf("PIB: %.2f Bilhões de Reais\n", nomeCidade);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);

  
  // Área para exibição dos dados da cidade
  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Area da cidade: %.2f Km2\n", area2);
  printf("PIB: %.2f Bilhões de Reais\n", nomeCidade2);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos2);

return 0;
} 
