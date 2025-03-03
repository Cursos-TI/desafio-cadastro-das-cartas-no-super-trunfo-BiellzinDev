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
    char estado_A[30];
    char cidade_A01[40], cidade_B02[40];
    unsigned long int pop_A01,pop_B02 ;
    int area_A01, area_B02;
    int pib_A01,pib_B02 ;
    int pont_A01,pont_B02 ;
    int dp_A01,dp_B02 ;
    int pc_A01,pc_B02 ;
    int pop,area, pib, pont, dp, pc,super, super1, super2;

//Jogo Super Trunfo    
    printf("SEJA BEM VINDO AO JOGO SUPER TRUNFO!!!!!!!\n");                 //MENSAGEM DE BOAS VINDAS
    printf("Para comecar digite um nome de um Pais: \n");                   //MENSAGEM PARA DIGITAR O PAIS 
    scanf("%s", &pais);                                                     //INIPUT DO PAIS
    printf("O Pais escolhido foi: %s \n", pais);                            //MENSAGEM COM O PAIS ESCLHIDO
    printf("Digite o nome do estado:\n");                                   //MENSAGEM PARA DIGITAR O ESTADO
    scanf("%s", &estado_A);                                                 //INPUT ESTADO

//REGRA DA PRIMEIRA CARTA A01
    printf("Digite o nome da proxima cidade: \n");                          //MENSAGEM PARA DIGITAR A CIDADE
    scanf("%s", &cidade_A01);                                               //INPUT CIDADE
    printf("Digite a Populacao da cidade: \n");                             //MENSAGEM PARA DIGITAR A POPULAÇÃO
    scanf("%u", &pop_A01);                                                  //INPUT POPULAÇÃO
    printf("Digite a area da cidade:\n");                                   //MENSAGEM AREA DA CIDADE
    scanf("%d", &area_A01);                                                 //INPUT AREA DA CIDADE
    printf("Digite o PIB da cidade: \n");                                   //MENSAGEM PIB CIDADE
    scanf(" %d", &pib_A01);                                                 //INPUT PIB
    printf("Digite o numero de pontos turisticos: \n");                     //PONTOS TURISTICOS
    scanf(" %d", &pont_A01);                                                //INPUT PONTOS TURISTICOS
    dp_A01 = pop_A01 / area_A01;                                            //CALCULO DENSIDADE POPULACIONAL A01
    pc_A01 = pib_A01 / pop_A01;                                             //CALCULO PIB PER CAPITA A01
    printf("Sua carta A01 tem as seguintes informacoes:\n");                //INFORMAÇÕES DA CARTA
    printf("Pais: %s \n",pais);                                             //IMPRIMIR PAIS
    printf("Estado: %s \n",estado_A);                                       //IMPRIMIR ESTADO
    printf("Cidade: %s \n",cidade_A01);                                     //IMPRIMIR CIDADE
    printf("Populacao: %d \n",pop_A01);                                     //IMPRIMIR POPULAÇÃO
    printf("Area: %d km²\n ",area_A01);                                     //IMPRIMIR AREA EM KM2
    printf("PIB: %d bilhões de reais\n",pib_A01);                           //IMPRIME PIB
    printf("Pontos Turisticos: %d \n",pont_A01);                            //IMPRIME PONTOS TURISTICOS
    printf("Densidade Populacional: %d hab/km²\n",dp_A01);                  //IMPRIME DENSIDADE POPULACIONAL
    printf("PIB per Capita: %d reais\n",pc_A01);                            //IMPRIME O PIB PER CAPITA

//REGRA DA CARTA B02
    printf("Carta B02 \n");
    printf("Digite o nome da proxima cidade: \n");
    scanf("%s", &cidade_B02);
    printf("Digite a Populacao da cidade: \n");
    scanf("%u", &pop_B02);
    printf("Digite a area da cidade:\n");
    scanf("%f", &area_B02);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_B02);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pont_B02);
    dp_B02 = pop_B02 / area_B02;
    pc_B02 = pib_B02 / pop_B02;
    printf("Sua carta B02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_A);
    printf("Cidade: %s \n",cidade_B02);
    printf("Populacao: %d \n",pop_B02);
    printf("Area: %d \n",area_B02);
    printf("PIB: %d \n",pib_B02);
    printf("Pontos Turisticos: %d \n",pont_B02);
    printf("Densidade Populacional: %d \n",dp_B02);
    printf("PIB per Capita: %d \n",pc_B02);

    //PARTE FINAL DE COMPARAÇÃO DE CARTAS SEM UTILIZAÇÃO DE IF
    printf("COMPARACAO DE CARTAS: \n"); 
    printf("Populacao: Carta 1 venceu (%d) \n",pop, pop = pop_A01 > pop_B02 ); 
    printf("Area: Carta 1 venceu (%d) \n", area, area = area_A01 > area_B02);
    printf("PIB: Carta 1 venceu (%d) \n",pib, pib = pib_A01 > pib_B02);
    printf("Pontos Turisticos: Carta 1 venceu (%d) \n",pont, pont = pont_A01 > pont_B02);
    printf("Densidade Populacional: Carta 2 venceu (%d)", dp, dp = dp_A01 < dp_B02);
    printf("PIB per capita: Carta 1 venceu (%d) \n",pc, pc = pc_A01 > pc_B02);
    super1 = pop_A01 + area_A01 + pib_A01 + pont_A01  + pc_A01 + dp;
    super2 = pop_B02 + area_B02 + pib_B02 + pont_B02  + pc_B02 + dp;
    super = super1 > super2;
    printf("Super Poder: Carta 1 venceu (%d) \n", super );


    return 0;











    return 0;
}
