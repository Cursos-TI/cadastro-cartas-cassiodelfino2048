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
  int escolhaComparacao = 0, escolhaComparacao2 = 0;
  int resultado1, resultado2, carta1, carta2;
  
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
  printf("Digita o 1º atributo para comparação:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade Demográfica\n");
  scanf("%d", &escolhaComparacao);

  switch (escolhaComparacao)
  {
  case 1:
    printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);    
    resultado1 = populacao > populacao2 ? 1 : 0;      
    break;
  case 2:
    printf("Você escolheu o atributo Área - Carta1: %f, Carta2: %f\n", area, area2);
    resultado1 = area > area2 ? 1 : 0;      
    break;
  case 3:
    printf("Você escolheu o atributo PIB - Carta1: %f, Carta2: %f\n", pib, pib2);
    resultado1 = pib > pib2 ? 1 : 0;      
    break;
  case 4:
    printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);
    resultado1 = numeroPontosTuristicos > numeroPontosTuristicos2 ? 1 : 0;      
    break;
  case 5:
    printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);
    resultado1 = densiPopu < densiPopu2 ? 1 : 0;      
    break;
  default:
    printf("Escolha inválida!");
    break;
  }
  
  printf("Digita o 2º atributo para comparação:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade Demográfica\n");
  scanf("%d", &escolhaComparacao2);

  if (escolhaComparacao == escolhaComparacao2)
  {
    printf("Você escolheu o mesmo atributo! Comparação inválida!");
  } else {
    switch (escolhaComparacao2)
    {
    case 1:
      printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);      
      resultado2 = populacao > populacao2 ? 1 : 0;      
      break;
    case 2:
      printf("Você escolheu o atributo Área - Carta1: %f, Carta2: %f\n", area, area2);
      resultado2 = area > area2 ? 1 : 0;      
      break;
    case 3:
      printf("Você escolheu o atributo PIB - Carta1: %f, Carta2: %f\n", pib, pib2);
      resultado2 = pib > pib2? 1 : 0;      
      break;
    case 4:
      printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);
      resultado2 = numeroPontosTuristicos > numeroPontosTuristicos2 ? 1 : 0;      
      break;
    case 5:
      printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);
      resultado2 = densiPopu < densiPopu2 ? 0 : 1;      
      break;
    default:
      printf("Escolha inválida!");
      break;
    }
  }

  printf("\n\n\nCarta1 país: %s e Carta2 país: %s\n", nomePais, nomePais2);

  
  if (resultado1 && resultado2)
  { 
    switch (escolhaComparacao)
    {
      case 1:
        printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);        
        break;
      case 2:
        printf("Você escolheu o atributo Área - Carta1: %.2f, Carta2: %.2f\n", area, area2);    
        break;
      case 3:
        printf("Você escolheu o atributo PIB - Carta1: %.2f, Carta2: %.2f\n", pib, pib2);        
        break;
      case 4:
        printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);
        break;   
      case 5:
        printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);    
        break;
      default:
        printf("Escolha inválida!");
        break;
    }
    switch (escolhaComparacao2)
    {
      case 1:
        printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);          
        break;
      case 2:
        printf("Você escolheu o atributo Área - Carta1: %.2f, Carta2: %.2f\n", area, area2);            
        break;
      case 3:
        printf("Você escolheu o atributo PIB - Carta1: %.2f, Carta2: %.2f\n", pib, pib2);          
        break;
      case 4:
        printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);      
        break;
      case 5:
        printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);         
        break;
      default:
        printf("Escolha inválida!");
        break;
    }
    printf("A Carta1 tem: 2 pontos e a Carta2 tem 0 pontos\n");
    printf("Carta1 Ganhou!\n");

  } else if(resultado1 != resultado2)
    {
      switch (escolhaComparacao)
      { 
        case 1:
          printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);        
        break;
        case 2:
          printf("Você escolheu o atributo Área - Carta1: %f, Carta2: %f\n", area, area2);    
          break;
        case 3:
          printf("Você escolheu o atributo PIB - Carta1: %f, Carta2: %f\n", pib, pib2);        
          break;
        case 4:
          printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);
          break;    
        case 5:
          printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);    
        break;
        default:
          printf("Escolha inválida!");
        break;
      }

      switch (escolhaComparacao2)
      {
        case 1:
          printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);          
        break;
        case 2:
          printf("Você escolheu o atributo Área - Carta1: %.2f, Carta2: %.2f\n", area, area2);            
          break;
        case 3:
          printf("Você escolheu o atributo PIB - Carta1: %.2f, Carta2: %.2f\n", pib, pib2);          
          break;
        case 4:
          printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);      
          break;
        case 5:
          printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);         
          break;
        default:
          printf("Escolha inválida!");
          break;
        }
    printf("A Carta1 tem: 1 pontos e a Carta2 tem 1 ponto\n");        
    printf("Empate!\n");
    
  } else{
      switch (escolhaComparacao)
      {
        case 1:
          printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);        
          break;
        case 2:
          printf("Você escolheu o atributo Área - Carta1: %.2f, Carta2: %.2f\n", area, area2);    
          break;
        case 3:
          printf("Você escolheu o atributo PIB - Carta1: %.2f, Carta2: %.2f\n", pib, pib2);        
        break;
        case 4:
          printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2); 
          break;   
        case 5:
          printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);    
          break;
        default:
          printf("Escolha inválida!");
        break;
      }

      switch (escolhaComparacao2)
      {
        case 1:
          printf("Você escolheu o atributo População - Carta1: %d, Carta2: %d\n",populacao, populacao2);          
          break;
        case 2:
          printf("Você escolheu o atributo Área - Carta1: %.2f, Carta2: %.2f\n", area, area2);            
          break;
        case 3:
          printf("Você escolheu o atributo PIB - Carta1: %.2f, Carta2: %.2f\n", pib, pib2);          
          break;
        case 4:
          printf("Você escolheu o atributo Número de pontos turísticos - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);      
          break;
        case 5:
          printf("Você escolheu o atributo Densidade Demográfica - Carta1: %d, Carta2: %d\n", numeroPontosTuristicos, numeroPontosTuristicos2);         
          break;
        default:
          printf("Escolha inválida!");
          break;
      }
    printf("A Carta1 tem: 0 pontos e a Carta2 tem 1 ponto\n");
    printf("Carta2 Venceu\n");
  }

return 0;
} 
