#include <stdio.h>

int main(){
    char estado, codigo[5], estado2, codigo2[5]; //a variável codigo é sobre o codigo da carta
    int populacao, turisticos, populacao2, turisticos2;
    float area, pib, area2, pib2;
    char cidade[50], cidade2[50];

    printf("Olá, vamos iniciar o cadastro da CARTA 1 carta!\n");

    printf("Digite o estado com uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta, para isso digite a letra escolhida seguida de um número de 01 a 04: \n");
    scanf(" %s", codigo);
    
    
    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", cidade);
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("----------------------------------------------------------------------\n");

    printf("Olá, vamos iniciar o cadastro da CARTA 2 carta!\n");

    printf("Digite o estado com uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta, para isso digite a letra escolhida seguida de um número de 01 a 04: \n");
    scanf("%s", codigo2);
    getchar();
    
    
    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", cidade2);
    
   printf("Digite a população da cidade: \n");
   scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &turisticos2);


    printf("----------------------------------------\n");

    printf("Carta 1 \nEstado: %c \nCódigo: %s \nNome da cidade: %s\nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f \nPontos turisticos: %d\n", estado, codigo, cidade, populacao, area, pib, turisticos);
    printf("=====================================================================\n");
    printf("Carta 2 \nEstado: %c \nCódigo: %s \nNome da cidade: %s\nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f \nPontos turisticos: %d\n", estado2, codigo2, cidade2,area2, populacao2, area2, pib2, turisticos2);
    
    printf("=====================================================================\n");
    printf("-> ANALISANDO A CATEGORIA POPULAÇÃO: \n");
    if(populacao > populacao2){
        printf("Carta 1 venceu! \n");
    }else{
        printf("Carta 2 venceu! \n");
    }

    printf("-> ANALISANDO A CATEGORIA ÁREA: \n");
    if(area > area2){
        printf("Carta 1 venceu! \n");
    }else{
        printf("Carta 2 venceu! \n");
    }

    printf("-> ANALISANDO A CATEGORIA PIB: \n");
    if(pib > pib2){
        printf("Carta 1 venceu! \n");
    }else{
        printf("Carta 2 venceu! \n");
    }

    printf("-> ANALISANDO A CATEGORIA PONTOS TURISTICOS: \n");
    if(turisticos > turisticos2){
        printf("Carta 1 venceu! \n");
    }else{
        printf("Carta 2 venceu! \n");
    }

}
