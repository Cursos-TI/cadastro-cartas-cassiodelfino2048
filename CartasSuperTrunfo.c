#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[3], estado2[3];
  char codigoCarta[4], codigoCarta2[4];
  char nomeCidade[30], nomeCidade2[30];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int numeroPontosTuristicos, numeroPontosTuristicos2;
  double densiPopu, pibPerCapita, densiPopu2, pibPerCapita2;
  double calculo, calculo2;
  int escolha = 0;
  
  // Área para entrada de dados
  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado);
  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta);
  printf("\n Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade);
  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%d", &populacao);
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

  printf("\n Digite as informações da Carta 2! \n");
  printf("\n Digite o estado com apenas 1 letra, sendo da letra A até a letra H: ");
  scanf("%s", &estado2);
  printf("\n Digite o código da cidade, sendo o 1º digito a letra anteriormente seguida de 2 números entre 01 até 04: ");
  scanf("%s", &codigoCarta2);
  printf("\n Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade2);
  printf("\n Digite a quantidade de habitantes que residem da cidade: ");
  scanf("%d", &populacao2);
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

  // Menu para usuário escolhar Opção
  printf("Digita qual atributi quer comparar sendo: \n 1 - População\n 2 - Área\n 3 - PIB\n 4 - Desnidade Populacional\n 5 - PIB per Capita\n");
  scanf("%d", &escolha);

  if (escolha == 1){
    printf("Carta 1 - %s: %d\n", nomeCidade, populacao);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    if (populacao > populacao2){
      printf("Carta 1 (%s) venceu!\n", nomeCidade);
    } else{
      printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    }
  } 
  
  if (escolha == 2){
    printf("Carta 1 - %s: %.2f\n", nomeCidade, area);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
    if (area > area2){
      printf("Carta 1 (%s) venceu!\n", nomeCidade);
    } else{
      printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    }
  } 
  if (escolha == 3){
    printf("Carta 1 - %s: %.2f\n", nomeCidade, pib);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
    if (pib > pib2){
      printf("Carta 1 (%s) venceu!\n", nomeCidade);
    } else{
      printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    }
  } 
  if (escolha == 4){
    printf("Carta 1 - %s: %.2lf\n", nomeCidade, densiPopu);
    printf("Carta 2 - %s: %.2lf\n", nomeCidade2, densiPopu2);
    if (densiPopu > densiPopu2){
      printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    } else{
      printf("Carta 1 (%s) venceu!\n", nomeCidade);
    }
  } 
  if (escolha == 5){
    printf("Carta 1 - %s: %.2lf\n", nomeCidade, pibPerCapita);
    printf("Carta 2 - %s: %.2lf\n", nomeCidade2, pibPerCapita2);
    if (populacao > populacao2){
      printf("Carta 1 (%s) venceu!\n", nomeCidade);
    } else{
      printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    }
  } else {
    printf("Você digitou uma opção inválida: Por favor REMECE do INÍCIO!");
  }

return 0;
} 
