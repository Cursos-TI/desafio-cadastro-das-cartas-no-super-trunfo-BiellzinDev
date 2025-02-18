#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char pais[30];
    char estado_A[30], estado_B[30], estado_C[30], estado_D[30], estado_E[30], estado_F[30], estado_G[30], estado_H[30];
    char cidade_A01[40], cidade_A02[40], cidade_A03[40], cidade_A04[40];
    char cidade_B01[40], cidade_B02[40], cidade_B03[40], cidade_B04[40];
    char cidade_C01[40], cidade_C02[40], cidade_C03[40], cidade_C04[40];
    char cidade_D01[40], cidade_D02[40], cidade_D03[40], cidade_D04[40];
    char cidade_E01[40], cidade_E02[40], cidade_E03[40], cidade_E04[40];
    char cidade_F01[40], cidade_F02[40], cidade_F03[40], cidade_F04[40];
    char cidade_G01[40], cidade_G02[40], cidade_G03[40], cidade_G04[40];
    char cidade_H01[40], cidade_H02[40], cidade_H03[40], cidade_H04[40];
    float pop_A01, pop_A02, pop_A03, pop_A04;
    float pop_B01, pop_B02, pop_B03, pop_B04;
    float pop_C01, pop_C02, pop_C03, pop_C04;
    float pop_D01, pop_D02, pop_D03, pop_D04;
    float pop_E01, pop_E02, pop_E03, pop_E04;
    float pop_F01, pop_F02, pop_F03, pop_F04;
    float pop_G01, pop_G02, pop_G03, pop_G04;
    float pop_H01, pop_H02, pop_H03, pop_H04;
    float area_A01, area_A02, area_A03, area_A04;
    float area_B01, area_B02, area_B03, area_B04;
    float area_C01, area_C02, area_C03, area_C04;
    float area_D01, area_D02, area_D03, area_D04;
    float area_E01, area_E02, area_E03, area_E04;
    float area_F01, area_F02, area_F03, area_F04;
    float area_G01, area_G02, area_G03, area_G04;
    float area_H01, area_H02, area_H03, area_H04;
    float pib_A01, pib_A02, pib_A03, pib_A04;
    float pib_B01, pib_B02, pib_B03, pib_B04;
    float pib_C01, pib_C02, pib_C03, pib_C04;
    float pib_D01, pib_D02, pib_D03, pib_D04;
    float pib_E01, pib_E02, pib_E03, pib_E04;
    float pib_F01, pib_F02, pib_F03, pib_F04;
    float pib_G01, pib_G02, pib_G03, pib_G04;
    float pib_H01, pib_H02, pib_H03, pib_H04;
    int pont_A01, pont_A02, pont_A03, pont_A04;
    int pont_B01, pont_B02, pont_B03, pont_B04;
    int pont_C01, pont_C02, pont_C03, pont_C04;
    int pont_D01, pont_D02, pont_D03, pont_D04;
    int pont_E01, pont_E02, pont_E03, pont_E04;
    int pont_F01, pont_F02, pont_F03, pont_F04;
    int pont_G01, pont_G02, pont_G03, pont_G04;
    int pont_H01, pont_H02, pont_H03, pont_H04;


//Jogo Super Trunfo    
    printf("SEJA BEM VINDO AO JOGO SUPER TRUNFO!!!!!!!\n");
    printf("Para comecar digite um nome de um Pais: \n");
    scanf("%s", &pais);
    printf("O Pais escolhido foi: %s \n", pais);
    printf("Digite o nome do estado:\n");
    scanf("%s", &estado_A);

//REGRA DA PRIMEIRA CARTA A01
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_A01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_A01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_A01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_A01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_A01);
    printf("Sua carta A01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_A);
    printf("Cidade: %s \n",cidade_A01);
    printf("Populacao: %.2f \n",pop_A01);
    printf("Area: %.2f \n",area_A01);
    printf("PIB: %.2f \n",pib_A01);
    printf("Pontos Turisticos: %d \n",pont_A01);

//REGRA DA CARTA A02
    printf("Carta A02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_A02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_A02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_A02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_A02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_A02);
    printf("Sua carta A02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_A);
    printf("Cidade: %s \n",cidade_A02);
    printf("Populacao: %.2f \n",pop_A02);
    printf("Area: %.2f \n",area_A02);
    printf("PIB: %.2f \n",pib_A02);
    printf("Pontos Turisticos: %d \n",pont_A02);


//REGRA DA CARTA A03
    printf("Carta A03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_A03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_A03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_A03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_A03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_A03);
    printf("Sua carta A03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_A);
    printf("Cidade: %s \n",cidade_A03);
    printf("Populacao: %.2f \n",pop_A03);
    printf("Area: %.2f \n",area_A03);
    printf("PIB: %.2f \n",pib_A03);
    printf("Pontos Turisticos: %d \n",pont_A03);


//REGRA DACARTA A04
    printf("Carta A04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_A04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_A04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_A04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_A04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_A04);
    printf("Sua carta A04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_A);
    printf("Cidade: %s \n",cidade_A04);
    printf("Populacao: %.2f \n",pop_A04);
    printf("Area: %.2f \n",area_A04);
    printf("PIB: %.2f \n",pib_A04);
    printf("Pontos Turisticos: %d \n",pont_A04);

//Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_B);


//REGRA DA PRIMEIRA CARTA B01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_B01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_B01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_B01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_B01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_B01);
    printf("Sua carta B01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_B);
    printf("Cidade: %s \n",cidade_B01);
    printf("Populacao: %.2f \n",pop_B01);
    printf("Area: %.2f \n",area_B01);
    printf("PIB: %.2f \n",pib_B01);
    printf("Pontos Turisticos: %d \n",pont_B01);

//REGRA DA CARTA B02
    printf("Carta B02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_B02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_B02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_B02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_B02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_B02);
    printf("Sua carta B02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_B);
    printf("Cidade: %s \n",cidade_B02);
    printf("Populacao: %.2f \n",pop_B02);
    printf("Area: %.2f \n",area_B02);
    printf("PIB: %.2f \n",pib_B02);
    printf("Pontos Turisticos: %d \n",pont_B02);


//REGRA DA CARTA B03
    printf("Carta B03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_B03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_B03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_B03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_B03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_B03);
    printf("Sua carta B03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_B);
    printf("Cidade: %s \n",cidade_B03);
    printf("Populacao: %.2f \n",pop_B03);
    printf("Area: %.2f \n",area_B03);
    printf("PIB: %.2f \n",pib_B03);
    printf("Pontos Turisticos: %d \n",pont_B03);


//REGRA DACARTA B04
    printf("Carta B04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_B04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_B04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_B04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_B04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_B04);
    printf("Sua carta B04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_B);
    printf("Cidade: %s \n",cidade_B04);
    printf("Populacao: %.2f \n",pop_B04);
    printf("Area: %.2f \n",area_B04);
    printf("PIB: %.2f \n",pib_B04);
    printf("Pontos Turisticos: %d \n",pont_B04);



    
//Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_C);


//REGRA DA PRIMEIRA CARTA C01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_C01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_C01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_C01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_C01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_C01);
    printf("Sua carta C01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_C);
    printf("Cidade: %s \n",cidade_C01);
    printf("Populacao: %.2f \n",pop_C01);
    printf("Area: %.2f \n",area_C01);
    printf("PIB: %.2f \n",pib_C01);
    printf("Pontos Turisticos: %d \n",pont_C01);

    //REGRA DA CARTA C02
    printf("Carta C02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_C02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_C02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_C02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_C02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_C02);
    printf("Sua carta C02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_C);
    printf("Cidade: %s \n",cidade_C02);
    printf("Populacao: %.2f \n",pop_C02);
    printf("Area: %.2f \n",area_C02);
    printf("PIB: %.2f \n",pib_C02);
    printf("Pontos Turisticos: %d \n",pont_C02);


    //REGRA DA CARTA C03
    printf("Carta C03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_C03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_C03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_C03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_C03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_C03);
    printf("Sua carta C03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_C);
    printf("Cidade: %s \n",cidade_C03);
    printf("Populacao: %.2f \n",pop_C03);
    printf("Area: %.2f \n",area_C03);
    printf("PIB: %.2f \n",pib_C03);
    printf("Pontos Turisticos: %d \n",pont_C03);


    //REGRA DACARTA C04
    printf("Carta C04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_C04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_C04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_C04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_C04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_C04);
    printf("Sua carta C04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_C);
    printf("Cidade: %s \n",cidade_C04);
    printf("Populacao: %.2f \n",pop_C04);
    printf("Area: %.2f \n",area_C04);
    printf("PIB: %.2f \n",pib_C04);
    printf("Pontos Turisticos: %d \n",pont_C04);

//Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_D);


//REGRA DA PRIMEIRA CARTA D01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_D01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_D01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_D01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_D01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_D01);
    printf("Sua carta C01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_D);
    printf("Cidade: %s \n",cidade_D01);
    printf("Populacao: %.2f \n",pop_D01);
    printf("Area: %.2f \n",area_D01);
    printf("PIB: %.2f \n",pib_D01);
    printf("Pontos Turisticos: %d \n",pont_D01);

    //REGRA DA CARTA D02
    printf("Carta D02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_D02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_D02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_D02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_D02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_D02);
    printf("Sua carta D02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_D);
    printf("Cidade: %s \n",cidade_D02);
    printf("Populacao: %.2f \n",pop_D02);
    printf("Area: %.2f \n",area_D02);
    printf("PIB: %.2f \n",pib_D02);
    printf("Pontos Turisticos: %d \n",pont_D02);


    //REGRA DA CARTA D03
    printf("Carta D03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_D03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_D03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_D03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_D03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_D03);
    printf("Sua carta D03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_D);
    printf("Cidade: %s \n",cidade_D03);
    printf("Populacao: %.2f \n",pop_D03);
    printf("Area: %.2f \n",area_D03);
    printf("PIB: %.2f \n",pib_D03);
    printf("Pontos Turisticos: %d \n",pont_D03);


    //REGRA DACARTA D04
    printf("Carta D04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_D04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_D04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_D04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_D04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_D04);
    printf("Sua carta D04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_D);
    printf("Cidade: %s \n",cidade_D04);
    printf("Populacao: %.2f \n",pop_D04);
    printf("Area: %.2f \n",area_D04);
    printf("PIB: %.2f \n",pib_D04);
    printf("Pontos Turisticos: %d \n",pont_D04);


//Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_E);


//REGRA DA PRIMEIRA CARTA E01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_E01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_E01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_E01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_E01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_E01);
    printf("Sua carta E01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_E);
    printf("Cidade: %s \n",cidade_E01);
    printf("Populacao: %.2f \n",pop_E01);
    printf("Area: %.2f \n",area_E01);
    printf("PIB: %.2f \n",pib_E01);
    printf("Pontos Turisticos: %d \n",pont_E01);

    //REGRA DA CARTA E02
    printf("Carta E02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_E02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_E02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_E02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_E02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_E02);
    printf("Sua carta E02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_E);
    printf("Cidade: %s \n",cidade_E02);
    printf("Populacao: %.2f \n",pop_E02);
    printf("Area: %.2f \n",area_E02);
    printf("PIB: %.2f \n",pib_E02);
    printf("Pontos Turisticos: %d \n",pont_E02);


    //REGRA DA CARTA E03
    printf("Carta E03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_E03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_E03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_E03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_E03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_E03);
    printf("Sua carta E03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_E);
    printf("Cidade: %s \n",cidade_E03);
    printf("Populacao: %.2f \n",pop_E03);
    printf("Area: %.2f \n",area_E03);
    printf("PIB: %.2f \n",pib_E03);
    printf("Pontos Turisticos: %d \n",pont_E03);


    //REGRA DACARTA E04
    printf("Carta E04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_E04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_E04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_E04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_E04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_E04);
    printf("Sua carta D04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_E);
    printf("Cidade: %s \n",cidade_E04);
    printf("Populacao: %.2f \n",pop_E04);
    printf("Area: %.2f \n",area_E04);
    printf("PIB: %.2f \n",pib_E04);
    printf("Pontos Turisticos: %d \n",pont_E04);

//Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_F);


//REGRA DA PRIMEIRA CARTA F01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_F01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_F01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_F01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_F01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_F01);
    printf("Sua carta F01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_F);
    printf("Cidade: %s \n",cidade_F01);
    printf("Populacao: %.2f \n",pop_F01);
    printf("Area: %.2f \n",area_F01);
    printf("PIB: %.2f \n",pib_F01);
    printf("Pontos Turisticos: %d \n",pont_F01);

    //REGRA DA CARTA F02
    printf("Carta F02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_F02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_F02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_F02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_F02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_F02);
    printf("Sua carta F02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_F);
    printf("Cidade: %s \n",cidade_F02);
    printf("Populacao: %.2f \n",pop_F02);
    printf("Area: %.2f \n",area_F02);
    printf("PIB: %.2f \n",pib_F02);
    printf("Pontos Turisticos: %d \n",pont_F02);


    //REGRA DA CARTA F03
    printf("Carta F03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_F03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_F03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_F03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_F03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_F03);
    printf("Sua carta F03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_F);
    printf("Cidade: %s \n",cidade_F03);
    printf("Populacao: %.2f \n",pop_F03);
    printf("Area: %.2f \n",area_F03);
    printf("PIB: %.2f \n",pib_F03);
    printf("Pontos Turisticos: %d \n",pont_F03);


    //REGRA DACARTA F04
    printf("Carta F04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_F04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_F04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_F04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_F04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_F04);
    printf("Sua carta F04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_F);
    printf("Cidade: %s \n",cidade_F04);
    printf("Populacao: %.2f \n",pop_F04);
    printf("Area: %.2f \n",area_F04);
    printf("PIB: %.2f \n",pib_F04);
    printf("Pontos Turisticos: %d \n",pont_F04);


    //Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_G);


//REGRA DA PRIMEIRA CARTA G01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_G01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_G01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_G01);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_G01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_G01);
    printf("Sua carta G01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_G);
    printf("Cidade: %s \n",cidade_G01);
    printf("Populacao: %.2f \n",pop_G01);
    printf("Area: %.2f \n",area_G01);
    printf("PIB: %.2f \n",pib_G01);
    printf("Pontos Turisticos: %d \n",pont_G01);

    //REGRA DA CARTA G02
    printf("Carta G02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_G02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_G02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_G02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_G02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_G02);
    printf("Sua carta G02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_G);
    printf("Cidade: %s \n",cidade_G02);
    printf("Populacao: %.2f \n",pop_G02);
    printf("Area: %.2f \n",area_G02);
    printf("PIB: %.2f \n",pib_G02);
    printf("Pontos Turisticos: %d \n",pont_G02);


    //REGRA DA CARTA G03
    printf("Carta G03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_G03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_G03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_G03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_G03);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_G03);
    printf("Sua carta G03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_G);
    printf("Cidade: %s \n",cidade_G03);
    printf("Populacao: %.2f \n",pop_G03);
    printf("Area: %.2f \n",area_G03);
    printf("PIB: %.2f \n",pib_G03);
    printf("Pontos Turisticos: %d \n",pont_G03);


    //REGRA DACARTA G04
    printf("Carta G04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_G04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_G04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_G04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_G04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_G04);
    printf("Sua carta G04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_G);
    printf("Cidade: %s \n",cidade_G04);
    printf("Populacao: %.2f \n",pop_G04);
    printf("Area: %.2f \n",area_G04);
    printf("PIB: %.2f \n",pib_G04);
    printf("Pontos Turisticos: %d \n",pont_G04);


    //Regra para mudar para o proximo estado
    printf("Digite o nome do proximo estado \n");
    scanf("%s", &estado_H);
    
    
    //REGRA DA PRIMEIRA CARTA H01
    printf("Digite o nome da proxima cidade: \n");
    scanf(" %s", &cidade_H01);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_H01);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_H01);
    scanf(" %f", &pib_H01);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_H01);
    printf("Sua carta H01 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_H);
    printf("Cidade: %s \n",cidade_H01);
    printf("Populacao: %.2f \n",pop_H01);
    printf("Area: %.2f \n",area_H01);
    printf("PIB: %.2f \n",pib_H01);
    printf("Pontos Turisticos: %d \n",pont_H01);
    
    //REGRA DA CARTA H02
    printf("Carta H02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_H02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_H02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_H02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_H02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_H02);
    printf("Sua carta H02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_H);
    printf("Cidade: %s \n",cidade_H02);
    printf("Populacao: %.2f \n",pop_H02);
    printf("Area: %.2f \n",area_H02);
    printf("PIB: %.2f \n",pib_H02);
    printf("Pontos Turisticos: %d \n",pont_H02);
    
    
    //REGRA DA CARTA H03
    printf("Carta H03 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_H03);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_H03);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_H03);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_H03);
    scanf(" %d", &pont_H03);
    printf("Sua carta H03 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_H);
    printf("Cidade: %s \n",cidade_H03);
    printf("Populacao: %.2f \n",pop_H03);
    printf("Area: %.2f \n",area_H03);
    printf("PIB: %.2f \n",pib_H03);
    printf("Pontos Turisticos: %d \n",pont_H03);
    printf("Digite o PIB da cidade: \n");
    
    
    //REGRA DACARTA H04
    printf("Carta H04 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_H04);
    printf("Digite a Populacao da cidade: \n");
    scanf("%f", &pop_H04);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_H04);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_H04);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_H04);
    printf("Sua carta H04 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_H);
    printf("Cidade: %s \n",cidade_H04);
    printf("Populacao: %.2f \n",pop_H04);
    printf("Area: %.2f \n",area_H04);
    printf("PIB: %.2f \n",pib_H04);
    printf("Pontos Turisticos: %d \n",pont_H04);
    printf("Digite o numero de pontos turisticos: \n");

    return 0;











    return 0;
}
