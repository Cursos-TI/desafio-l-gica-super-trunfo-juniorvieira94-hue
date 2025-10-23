#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
 printf("Desafio Cartas Super Trunfo");
    char estado1[2], codigo_carta1[2], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float Area_km1, pib1, calc_desidade_populacional1, calc_pib_percapta1, superpoder1;

    char estado2[2], codigo_carta2[2], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float Area_km2, pib2, calc_desidade_populacional2, calc_pib_percapta2, superpoder2;
     
  

    //inicia a pegar os dados da carta 1
    printf("\nInsira os dados da carta 1\n");

    printf("Insira o Estado: ");
    scanf("%s", &estado1);

    printf("Insira o codigo da carta: ");
    scanf("%s", &codigo_carta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Insira a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Insira a Area em KM quadrado: ");
    scanf("%f", &Area_km1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);


    //inicia a pegar os dados da carta 2
    printf("\nInsira os dados da carta 2\n");

    printf("Insira o Estado: ");
    scanf("%s", &estado2);

    printf("Insira o codigo da carta: ");
    scanf("%s", &codigo_carta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Insira a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a Area em KM quadrado: ");
    scanf("%f", &Area_km2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // calculos carta 1
    calc_desidade_populacional1 =  populacao1 / Area_km1;
    calc_pib_percapta1 = pib1 / populacao1;
    superpoder1 = populacao1 + Area_km1 + pib1 + calc_pib_percapta1 + (calc_desidade_populacional1/1);

    //Mostra os dados da carta 1
    printf("\nDados da Carta 1");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo: %s", codigo_carta1);
    printf("\nNome da Cidade: %s", nome_cidade1);
    printf("\nPopulcao: %d", populacao1);
    printf("\nArea: %f", Area_km1);
    printf("\nPIB: %f", pib1);
    printf("\nNumero de pontos turisticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f", calc_desidade_populacional1);
    printf("\nPIB per Capita: %.2f", calc_pib_percapta1);
    printf("\nSuper Poder: %.2f", superpoder1);


    // calculos carta 2
    calc_desidade_populacional2 =  populacao2 / Area_km2;
    calc_pib_percapta2 = pib2 / populacao2;
    superpoder2 = populacao2 + Area_km2 + pib2 + calc_pib_percapta2 + (calc_desidade_populacional2/1);

    //Mostra os dados da carta 2
    printf("\n\nDados da Carta 2");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", codigo_carta2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulcao: %d", populacao2);
    printf("\nArea: %f", Area_km2);
    printf("\nPIB: %f", pib2);
    printf("\nNumero de pontos turisticos: %d", pontos_turisticos2);
    printf("\nDensidade Populaciona: %.2f", calc_desidade_populacional2);
    printf("\nPIB per Capita: %.2f", calc_pib_percapta2);
    printf("\nSuper Poder: %.2f", superpoder1);

    //COMPARACOES
    int compara_populacao, compara_pontos_turisticos;
    float compara_pib, compara_area, compara_densidade_populacional, compara_pib_percapita, compara_superpoder;
   
    compara_populacao=populacao1>populacao2;
    compara_area=Area_km1>Area_km2;
    compara_pib=pib1>pib2;
    compara_pontos_turisticos=pontos_turisticos1>pontos_turisticos2;
    compara_densidade_populacional=calc_desidade_populacional1>calc_desidade_populacional2;
    compara_pib_percapita=calc_pib_percapta1>calc_pib_percapta2;
    compara_superpoder=superpoder1>superpoder2;

    //mostrar comparacoes
    printf("\n\nComparações das Cartas");
    printf("\nLegenda 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence");
    printf("\nPopulcao: %d", compara_populacao);
    printf("\nArea: %f", compara_area);
    printf("\nPIB: %f", compara_pib);
    printf("\nNumero de pontos turisticos: %d", compara_pontos_turisticos);
    printf("\nDensidade Populaciona: %.2f", compara_densidade_populacional);
    printf("\nPIB per Capita: %.2f", compara_pib_percapita);
    printf("\nSuper Poder: %.2f", compara_superpoder);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("Compara Populacao\n");
    if (populacao1>populacao2){
        printf("Carta 1 tem a maior populacao\n");
    } else {
         printf("Carta 2 tem a maior populacao\n");
    }
    
    printf("Compara Area\n");
    if (Area_km1>Area_km2){
        printf("Carta 1 tem a maior Area\n");
    } else {
         printf("Carta 2 tem a maior Area\n");
    }

    printf("Compara PIB\n");
    if (pib1>pib2){
        printf("Carta 1 tem a maior PIB\n");
    } else {
         printf("Carta 2 tem a maior PIB\n");
    }
    
    printf("Compara Pontos Turisticos\n");
    if (pontos_turisticos1>pontos_turisticos2){
        printf("Carta 1 tem mais pontos turisticos\n");
    } else {
         printf("Carta 2 tem mais pontos turisticos\n");
    }
    
    printf("Compara Densidade Populacional\n");
    if (calc_desidade_populacional1>calc_desidade_populacional2){
        printf("Carta 1 tem a maior Densidade Polulacional\n");
    } else {
         printf("Carta 2 tem a maior Densidade Polulacional\n");
    }

    printf("Compara PIB Percapta\n");
    if (calc_pib_percapta1>calc_pib_percapta2){
        printf("Carta 1 tem o maior PIB Perpcapta\n");
    } else {
         printf("Carta 2 tem o maior PIB Perpcapta\n");
    }

    printf("Compara Superpoder\n");
    if (superpoder1>superpoder2){
        printf("Carta 1 tem o maior Superpoder\n");
    } else {
        printf("Carta 2 tem o maior Superpoder\n");
    }
    


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    //comparação e definindo o menu de acesso e o ganahador

    int menu;
    printf("Escolha uma opção:\n");
    printf("1. Compara a Populacao\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &menu);

      switch (menu) {
    case 1:
          if (populacao1>populacao2){
        printf("Carta 1 tem a maior populacao\n");
    } else if (populacao2>populacao1) {
         printf("Carta 2 tem a maior populacao\n");
    }else {
        printf("Aconteceu um empate\n");
    }
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Opção inválido\n");
  }
 

    return 0;
}
