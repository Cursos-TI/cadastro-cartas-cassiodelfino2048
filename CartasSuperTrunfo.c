#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char nomePais[30], nomePais2[30];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int numeroPontosTuristicos, numeroPontosTuristicos2;
  double densiPopu, pibPerCapita, densiPopu2, pibPerCapita2;
  double calculo, calculo2;
  int escolha = 0;
  int escolhaComparacao = 0;
  
  // Área para entrada de dados
  printf("Digite as informações da Carta 1! \n");
  printf("Digite o nome do País: \n");
  scanf(" %[^\n]", &nomePais);
  printf("Digite a quantidade de habitantes residentes no País (População): \n");
  scanf("%d", &populacao);
  printf("Digite a area total da cidade em Km2: \n");
  scanf(" %f", &area);
  printf("Digite o PIB da cidade em bilhões de Dolares: \n");
  scanf(" %f", &pib);
  printf("Digite a quantidade de pontos turisticos da cidade: \n");
  scanf(" %d", &numeroPontosTuristicos);

  // calculando Densidade populacional e PIB per capta da Carta 1
  densiPopu = (float) populacao / area; // calcula a densidade populacional em hab/km2 da carta 1
  calculo = (pib * 1000000000);
  pibPerCapita = calculo / populacao; // Calcular o PIB per capita da carta 1

  printf("\nDigite as informações da Carta 2! \n");
  printf("Digite o nome do País: \n");
  scanf(" %[^\n]", &nomePais2);
  printf("Digite a quantidade de habitantes residentes no País (População): \n");
  scanf("%d", &populacao2);
  printf("Digite a area total da cidade em Km2: \n");
  scanf(" %f", &area2);
  printf("Digite o PIB cidade em bilhões de Dolares: \n");
  scanf(" %f", &pib2);
  printf("Digite a quantidade de pontos turisticos da cidade: \n");
  scanf(" %d", &numeroPontosTuristicos2);
  
  // calculando Densidade populacional e PIB per capta da Carta 2
  densiPopu2 = (float) populacao2 / area2; // calcula a densidade populacional em hab/km2 da carta 2
  calculo2 = pib2 * 1000000000;
  pibPerCapita2 = calculo2 / (float) populacao2; // Calcular o PIB per capita da carta 2

  // Menu para usuário escolhar Opção
  printf("\nDigita qual atributi quer comparar sendo: \n1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n");
  scanf("%d", &escolhaComparacao);

  switch (escolhaComparacao)  {
  case 1:
    printf("Você escolheu a opção: População\n");
    if (populacao == populacao2)      {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: População\nPopulação Carta 1: (%d habitantes)\nPopulação Carta 2: (%d habitantes)\nResultado: Empate!\n",nomePais, nomePais2, populacao, populacao2);
      } else if (populacao > populacao2){
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: População\nPopulação Carta 1: (%d habitantes)\nPopulação Carta 2: (%d habitantes)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, populacao, populacao2);
      } else {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: População\nPopulação Carta 1: (%d habitantes)\nPopulação Carta 2: (%d habitantes)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, populacao, populacao2);
      } 
    
    break;
  case 2:
    printf("Você escolheu a opção: Área\n");
    if (area == area2)      {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi a: Área\nÁrea Carta 1: (%.2f Km2)\nÁrea Carta 2: (%.2f Km2)\nResultado: Empate!\n",nomePais, nomePais2, area, area2);
      } else if (area > area2){
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi a: Área\nÁrea Carta 1: (%.2f Km2)\nÁrea Carta 2: (%.2f Km2)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, area, area2);
      } else {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi a: Área\nÁrea Carta 1: (%.2f Km2)\nÁrea Carta 2: (%.2f Km2)\nResultado: Carta 2 VENCEU!\n",nomePais, nomePais2, area, area2);
      } 
    break;
  case 3:
    printf("Você escolhee a opção: PIB \n");
    if (pib == pib2)      {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: PIB\nPIB Carta 1: (%.2f Bilhões de dólares)\nPIB Carta 2: (%.2f Bilhões de dólares)\nResultado: Empate!\n",nomePais, nomePais2, pib, pib2);
      } else if (pib > pib2){
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: PIB\nPIB Carta 1: (%.2f Bilhões de dólares)\nPIB Carta 2: (%.2f Bilhões de dólares)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, pib, pib2);
      } else {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: PIB\nPIB Carta 1: (%.2f Bilhões de dólares)\nPIB Carta 2: (%.2f Bilhões de dólares)\nResultado: Carta 2 VENCEU!\n",nomePais, nomePais2, pib, pib2);
      } 
    break;
    case 4:
      printf("Você escolhee a opção: Número de Pontos Turísticos \n");
      if (numeroPontosTuristicos == numeroPontosTuristicos2)      {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: Número de Pontos Turísticos\n Número de Pontos Turísticos Carta 1: (%d)\nPopulação Carta 2: (%d)\nResultado: Empate!\n",nomePais, nomePais2, numeroPontosTuristicos, numeroPontosTuristicos2);
      } else if (numeroPontosTuristicos > numeroPontosTuristicos2){
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: Número de Pontos Turísticos\n Número de Pontos Turísticos Carta 1: (%d)\nPopulação Carta 2: (%d)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, numeroPontosTuristicos, numeroPontosTuristicos2);
      } else {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: Número de Pontos Turísticos\n Número de Pontos Turísticos Carta 1: (%d)\nPopulação Carta 2: (%d)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, numeroPontosTuristicos, numeroPontosTuristicos2);
      } 
      break;
    case 5:
      printf("Você escolhee a opção: Densidade Demográfica \n");
      if (densiPopu == densiPopu2)      {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: Densidade Demográfica\nDensidade Demográfica Carta 1: (%.2lf hab/km2)\nDensidade Demográfica Carta 2: (%.2lf hab/km2)\nResultado: Empate!\n",nomePais, nomePais2, densiPopu, densiPopu2);
      } else if (densiPopu < densiPopu2){
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: Densidade Demográfica\nDensidade Demográfica Carta 1: (%.2lf hab/km2)\nDensidade Demográfica Carta 2: (%.2lf hab/km2)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, densiPopu, densiPopu2);
      } else {
        printf("País Carta 1: (%s) - Pais Carta 2: (%s)\nAtributo de Comparação foi o: Densidade Demográfica\nDensidade Demográfica Carta 1: (%.2lf hab/km2)\nDensidade Demográfica Carta 2: (%.2lf hab/km2)\nResultado: Carta 1 VENCEU!\n",nomePais, nomePais2, densiPopu, densiPopu2);
      } 
      break;
  
    default: printf("Escolha inválida!\n");
        break;
    }

return 0;
} 
