#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2], estado2[2];
  char codigoCarta[4], codigoCarta2[4];
  char nomeCidade[30], nomeCidade2[30];
  unsigned int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int numeroPontosTuristicos, numeroPontosTuristicos2;
  double densiPopu, pibPerCapita, densiPopu2, pibPerCapita2;
  double calculo, calculo2;
  double superPoder1, superPoder2;
  int resultadoPopu, resultadoArea, resultadoPib, resultadoPontosTur, resultadoDensi, resultadoPibper, resultadoSuper;


  // Área para entrada de dados
  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado);

  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta);

  printf("\n Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade);

  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%u", &populacao);

  printf("\n Digite a area total da cidade em Km2: ");
  scanf(" %f", &area);

  printf("\n Digite o PIB da cidade em bilhões de Dolares: ");
  scanf(" %f", &pib);

  printf("\n Digite a quantidade de pontos turisticos da cidade: ");
  scanf(" %d", &numeroPontosTuristicos);

  // calculando Densidade populacional e PIB per capta da Carta 1
  densiPopu = (float) populacao / area; // calcula a densidade populacional em hab/km2 da carta 1
  calculo = (pib * 1000000000);
  pibPerCapita = calculo / populacao; // Calcular o PIB per capita da carta 1

  // Calculando Super Poder Carta 2
  superPoder1 = populacao + area + pib + numeroPontosTuristicos + pibPerCapita + (1/densiPopu);


  printf("\n Digite as informações da Carta 2! \n");

  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado2);

  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta2);

  printf("\n Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade2);

  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%u", &populacao2);

  printf("\n Digite a area total da cidade em Km2: ");
  scanf(" %f", &area2);

  printf("\n Digite o PIB cidade em bilhões de Dolares: ");
  scanf(" %f", &pib2);

  printf("\n Digite a quantidade de pontos turisticos da cidade: ");
  scanf(" %d", &numeroPontosTuristicos2);
  
  // calculando Densidade populacional e PIB per capta da Carta 2
  densiPopu2 = (float) populacao2 / area2; // calcula a densidade populacional em hab/km2 da carta 2
  calculo2 = pib2 * 1000000000;
  pibPerCapita2 = calculo2 / (float) populacao2; // Calcular o PIB per capita da carta 2

  // Calculando Super Poder Carta 2
  superPoder2 = populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + (1/densiPopu2);

  // Calculo de quem venceu
  resultadoPopu = populacao > populacao2;
  resultadoArea = area > area2;
  resultadoPib = pib > pib2;
  resultadoPontosTur = numeroPontosTuristicos> numeroPontosTuristicos2;
  resultadoDensi = densiPopu < densiPopu2;
  resultadoPibper = pibPerCapita > pibPerCapita2;
  resultadoSuper = superPoder1 > superPoder2;

  //Comparando as cartas
  printf("Comaprando as Cartas");
  printf("População: Carta 1 venceu (%d)\n", resultadoPopu);
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontosTur);
  printf("Desidade Populacional: Carta 1 venceu (%d)\n", resultadoDensi);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibper); 
  printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuper);



  /*
  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %u\n", populacao);
  printf("Area da cidade: %.2f Km2\n", area);
  printf("PIB: %.2f Bilhões de Reais\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
  printf("Densidade Populacional: %.2lf hab/Km2\n", densiPopu);
  
  printf("PIB per Capita: %.2lf reais\n", pibPerCapita);
  printf("Super Porde 1: %.2lf\n", superPoder1);

  
  // Área para exibição dos dados da cidade
  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %u\n", populacao2);
  printf("Area da cidade: %.2f Km2\n", area2);
  printf("PIB: %.2f Bilhões de Reais\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos2);
  printf("Densidade Populacional: %.2lf hab/Km2\n", densiPopu2);
  
  printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);
  printf("Super Porde 1: %.2lf\n", superPoder2);
  */

return 0;
} 
