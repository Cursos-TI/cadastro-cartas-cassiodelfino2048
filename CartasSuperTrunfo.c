#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2];
  char codigoCarta[4];
  char nomeCidade[30];
  int populacao;
  float area;
  float pib;
  int numeroPontosTuristicos;


  // Área para entrada de dados
  printf("Digite o estado com apenas 1 letra, sendo da letra A até a letra H: \n");
  scanf("%s", &estado);

  printf("Digite o código da cidade, sendo o primeiro digito a letra do estado informada anteriormente seguida de 2 números entre 01 até 04: \n");
  scanf("%s", &codigoCarta);

  printf("Digite o nome da cidade\n");
  scanf("%s", &nomeCidade);

  printf("Digite a quantidade de habitantes que residem da cidade:\n");
  scanf("%d", &populacao);

  printf("Digite a area total da cidade em Km: \n");
  scanf(" %f", &area);

  printf("Digite o PIB cidade em bilhões de Dolares: \n");
  scanf(" %f", &pib);

  printf("Digite a quantidade de pontos turisticos da cidade\n");
  scanf(" %d", &numeroPontosTuristicos);


  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Area da cidade: %.2f Km2\n", area);
  printf("PIB: %.2f Bilhões de Reais\n", nomeCidade);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);

  printf("Obrigado!\n");

return 0;
} 
