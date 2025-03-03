#include <stdio.h>
int main(){
    char pais[30];
    char estado_A[60];
    char cidade_A01[40], cidade_B02[40];
    unsigned long int pop_A01,pop_B02 ;
    float area_A01, area_B02;
    float pib_A01,pib_B02 ;
    int pont_A01,pont_B02 ;
    int dp_A01,dp_B02 ;
    int pc_A01,pc_B02 ;
    int opcao;

//Jogo Super Trunfo    
    printf("SEJA BEM VINDO AO JOGO SUPER TRUNFO!!!!!!!\n");                 //MENSAGEM DE BOAS VINDAS
    printf("Para comecar digite um nome de um Pais: \n");                   //MENSAGEM PARA DIGITAR O PAIS 
    scanf("%s", &pais);                                                     //INIPUT DO PAIS
    printf("O Pais escolhido foi: %s \n", pais);                            //MENSAGEM COM O PAIS ESCLHIDO
    printf("Digite o nome do estado:\n");                                   //MENSAGEM PARA DIGITAR O ESTADO
    scanf("%s", &estado_A ) ;                                                 //INPUT ESTADO

//REGRA DA PRIMEIRA CARTA A01
    printf("Digite o nome da proxima cidade: \n");                          //MENSAGEM PARA DIGITAR A CIDADE
    scanf("%s", &cidade_A01);                                               //INPUT CIDADE
    printf("Digite a Populacao da cidade: \n");                             //MENSAGEM PARA DIGITAR A POPULAÇÃO
    scanf("%u", &pop_A01);                                                  //INPUT POPULAÇÃO
    printf("Digite a area da cidade:\n");                                   //MENSAGEM AREA DA CIDADE
    scanf("%f", &area_A01);                                                 //INPUT AREA DA CIDADE
    printf("Digite o PIB da cidade: \n");                                   //MENSAGEM PIB CIDADE
    scanf(" %f", &pib_A01);                                                 //INPUT PIB
    printf("Digite o numero de pontos turisticos: \n");                     //PONTOS TURISTICOS
    scanf(" %d", &pont_A01);                                                //INPUT PONTOS TURISTICOS
    dp_A01 = (float) pop_A01 / area_A01;                                            //CALCULO DENSIDADE POPULACIONAL A01
    pc_A01 = pib_A01 / pop_A01;                                             //CALCULO PIB PER CAPITA A01
    printf("Sua carta A01 tem as seguintes informacoes:\n");                //INFORMAÇÕES DA CARTA
    printf("Pais: %s \n",pais);                                             //IMPRIMIR PAIS
    printf("Estado: %s \n",estado_A);                                       //IMPRIMIR ESTADO
    printf("Cidade: %s \n",cidade_A01);                                     //IMPRIMIR CIDADE
    printf("Populacao: %u \n",pop_A01);                                     //IMPRIMIR POPULAÇÃO
    printf("Area: %.2f km²\n ",area_A01);                                     //IMPRIMIR AREA EM KM2
    printf("PIB: %.2f bilhões de reais\n",pib_A01);                           //IMPRIME PIB
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
    dp_B02 = (float) pop_B02 / area_B02;
    pc_B02 = pib_B02 / pop_B02;
    printf("Sua carta B02 tem as seguintes informacoes:\n");
    printf("Pais: %s \n",pais);
    printf("Estado: %s \n",estado_A);
    printf("Cidade: %s \n",cidade_B02);
    printf("Populacao: %u \n",pop_B02);
    printf("Area: %.2f \n",area_B02);
    printf("PIB: %.2f \n",pib_B02);
    printf("Pontos Turisticos: %d \n",pont_B02);
    printf("Densidade Populacional: %d \n",dp_B02);
    printf("PIB per Capita: %d \n",pc_B02);

    
    //COMPARAÇÃO DE CARTAS UTILIZANDO SWITCH
    printf("COMPARACAO DE CARTAS, ESCOLHA A OPCAO DESEJADA!! \n");
    printf("1. Populacao. \n");
    printf("2. Area. \n");
    printf("3. PIB. \n");
    printf("4. Numero de Pontos Turisticos. \n");
    printf("5. Densidade Populacional. \n");
    printf("Sua Escolha:");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Pais carta A01: %s  ---- Pais carta B02: %s \n", pais,pais);
        printf("Atributo escolhido para comparacao: POPULACAO \n");
        printf("Carta A01 - POPULACAO: %u: \n", pop_A01);
        printf("Carta B02 - POPULACAO: %u: \n", pop_B02);
        if (pop_A01 > pop_B02)
        {
            printf("Resultado: Carta A01 venceu!");
        }
        else if (pop_A01 == pop_B02){
            printf("EMPATE!");
        }
        else{
            printf("Resultado: Carta A02 venceu!");
        }
        break;
    case 2:
        printf("Pais carta A01: %s  ---- Pais carta B02: %s \n", pais,pais);
        printf("Atributo escolhido para comparacao: AREA \n");
        printf("Carta A01 - AREA: %.2f: \n", area_A01);
        printf("Carta A01 - AREA: %.2f: \n", area_B02);
        if (area_A01 > area_B02)
        {
            printf("Resultado: Carta A01 venceu!");
        }
        else if (area_A01 == area_B02){
            printf("EMPATE!");
        }
        else{
            printf("Resultado: Carta A02 venceu!");
        }
        break;
    case 3:
        printf("Pais carta A01: %s  ---- Pais carta B02: %s \n", pais,pais);
        printf("Atributo escolhido para comparacao: PIB \n");
        printf("Carta A01 - PIB: %.2f: \n", pib_A01);
        printf("Carta A01 - PIB: %.2f: \n", pib_B02);
        if (pib_A01 > pib_B02)
        {
            printf("Resultado: Carta A01 venceu!");
        }
        else if (pib_A01 == pib_B02){
            printf("EMPATE!");
        }
        else{
            printf("Resultado: Carta A02 venceu!");
        }
        break;
    case 4:
        printf("Pais carta A01: %s  ---- Pais carta B02: %s \n", pais,pais);
        printf("Atributo escolhido para comparacao: NUMERO DE PONTOS TURISTICOS \n");
        printf("Carta A01 - PONTOS TURISTICOS: %d: \n", pont_A01);
        printf("Carta A01 - PONTOS TURISTICOS: %d: \n", pont_B02);
        if (pont_A01 > pont_B02)
        {
            printf("Resultado: Carta A01 venceu!");
        }
        else if (pont_A01 == pont_B02){
            printf("EMPATE!");
        }
        else{
            printf("Resultado: Carta A02 venceu!");
        }
        break;
    case 5:
        printf("Pais carta A01: %s  ---- Pais carta B02: %s \n", pais,pais);
        printf("Atributo escolhido para comparacao: DENSIDADE POPULACIONAL \n");
        printf("Carta A01 - DENSIDADE POPULACIONAL: %d: \n", pont_A01);
        printf("Carta A01 - DENSIDADE POPULACIONAL: %d: \n", pont_B02);
        if (dp_A01 < dp_B02)
        {
            printf("Resultado: Carta A01 venceu!");
        }
        else if(dp_A01 == dp_B02){
            printf("EMPATE!");
        }
        else{
            printf("Resultado: Carta A02 venceu!");
        }
        break;
    
    default:
        printf("Opcao Invalida!");
        break;
    }


    return 0;
}