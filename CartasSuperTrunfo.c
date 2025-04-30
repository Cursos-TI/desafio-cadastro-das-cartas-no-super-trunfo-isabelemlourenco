#include <stdio.h>

int main()
{
    char estado, codigo[5], estado2, codigo2[5]; // a variável codigo é sobre o codigo da carta
    int  turisticos, turisticos2;
    float populacao, populacao2, area, pib, area2, pib2, densidade, densidade2, pibcapita, pibcapita2;
    char cidade[50], cidade2[50];
    int escolha, escolha2, soma1 = 0, soma2 = 0, resultado;

    // ENTRADA E LEITURA DE DADOS
    printf("\n");

    printf("Olá, vamos iniciar o cadastro da CARTA 1 carta:\n");

    printf("\n");

    printf("Digite o estado com uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado);

    getchar(); // limpa o enter

    printf("Digite o código da carta, para isso digite a letra escolhida seguida de um número de 01 a 04: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("----------------------------------------------------------------------\n");

    printf("Agora vamos iniciar o cadastro da CARTA 2 carta:\n");

    printf("\n");

    printf("Digite o estado com uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);

    getchar(); // LIMPA O ENTER

    printf("Digite o código da carta, para isso digite a letra escolhida seguida de um número de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &turisticos2);

    // cálculo de densidade
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    // cálculo PIB per capita
    pibcapita = pib / populacao;
    pibcapita2 = pib2 / populacao2;

    printf("\n");
    printf("/////////////////////////VAMOS JOGAR//////////////////////////////////////\n");
    printf("Selecione o primeiro atributo para comparar digitando apenas o número correspondente: \n");
    printf("1 = População\n");
    printf("2 = Area\n");
    printf("3 = PIB\n");
    printf("4 = Pontos turisticos\n");
    printf("5 = Densidade\n");
    printf("6 = PIB per capita\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("--> COMPARAÇÃO DE POPULAÇÃO (maior população vence) <--\n");
        if (populacao > populacao2)
        {
            printf("- Carta 1 - População: %.2f\n- Carta 2 - População: %.2f\n", populacao, populacao2);
            printf("CARTA 1 VENCEU \n");
            soma1 = soma1 + 1;
        }
        else if (populacao2 > populacao)
        {
            printf("- Carta 1 - População: %.2f\n- Carta 2 - População: %.2f\n", populacao, populacao2);
            printf("CARTA 2 VENCEU \n");
            soma2 = soma2 + 1;
        }
        else
        {
            printf("Empate \n");
        }
        break;
    case 2:
        printf("--> COMPARAÇÃO DE ÁREA (maior área vence) <--\n");
        if (area > area2)
        {
            printf("- Carta 1 - Área: %.2fkm²\n- Carta 2 - Área: %.2f km²\n", area, area2);
            printf("CARTA 1 VENCEU \n");
            soma1 = soma1 + 1;
        }
        else if (area2 > area)
        {
            printf("- Carta 1 - Área: %.2f\n- Carta 2 - Área: %.2f km²\n", area, area2);
            printf("CARTA 2 VENCEU \n");
            soma2 = soma2 + 1;
        }
        else
        {
            printf("Empate \n");
        }
        break;
    case 3:
        printf("--> COMPARAÇÃO DE PIB (maior pib vence) <--\n");
        if (pib > pib2)
        {
            printf("- Carta 1 - PIB: %.2f\n- Carta 2 - PIB: %.2f\n", pib, pib2);
            printf("CARTA 1 VENCEU \n");
            soma1 = soma1 + 1;
        }
        else if (pib2 > pib)
        {
            printf("- Carta 1 - PIB: %.2f\n- Carta 2 - PIB: %.2f\n", pib, pib2);
            printf("CARTA 2 VENCEU \n");
            soma2 = soma2 + 1;
        }
        else
        {
            printf("Empate \n");
        }
        break;
    case 4:
        printf("--> COMPARAÇÃO DE Pontos Turisticos (maior número de pontos turisticos vence) <--\n");
        if (turisticos > turisticos2)
        {
            printf("- Carta 1 - Pontos Turisticos: %d\n- Carta 2 - Pontos Turisticos: %d\n", turisticos, turisticos2);
            printf("CARTA 1 VENCEU \n");
            soma1 = soma1 + 1;
        }
        else if (turisticos2 > turisticos)
        {
            printf("- Carta 1 - Pontos Turisticos: %d\n- Carta 2 - Pontos Turisticos: %d\n", turisticos, turisticos2);
            printf("CARTA 2 VENCEU \n");
            soma2 = soma2 + 1;
        }
        else
        {
            printf("Empate \n");
        }
        break;
    case 5:
        printf("--> COMPARAÇÃO DE DENSIDADE (menor densidade vence) <--\n");
        if (densidade < densidade2)
        {
            printf("- Carta 1 - Densidade: %.2f\n- Carta 2 - Densidade: %.2f\n", densidade, densidade2);
            printf("CARTA 1 VENCEU \n");
            soma1 = soma1 + 1;
        }
        else if (densidade2 < densidade)
        {
            printf("- Carta 1 - Densidade: %.2f\n- Carta 2 - Densidade: %.2f\n", densidade, densidade2);
            printf("CARTA 2 VENCEU \n");
            soma2 = soma2 + 1;
        }
        else
        {
            printf("Empate \n");
        }
        break;
    case 6:
        printf("--> COMPARAÇÃO DE PIB per capita (maior pib vence) <--\n");
        if (pibcapita > pibcapita2)
        {
            printf("- Carta 1 - PIB per capita: %.2f\n- Carta 2 - PIB per capita: %.2f\n", pibcapita, pibcapita2);
            printf("CARTA 1 VENCEU \n");
            soma1 = soma1 + 1;
        }
        else if (pibcapita2 > pibcapita)
        {
            printf("- Carta 1 - PIB per capita: %.2f\n- Carta 2 - PIB per capita: %.2f\n", pibcapita, pibcapita2);
            printf("CARTA 2 VENCEU \n");
            soma2 = soma2 + 1;
        }
        else
        {
            printf("Empate \n");
        }
        break;
        default:    
            printf("Algum erro");
            return 0;
   
    }
    
    printf("\n");
    printf("/////////////////////////VAMOS JOGAR//////////////////////////////////////\n");
    printf("Selecione o segundo atributo para comparar: \n");
    printf("1 = População\n");
    printf("2 = Area\n");
    printf("3 = PIB\n");
    printf("4 = Pontos turisticos\n");
    printf("5 = Densidade\n");
    printf("6 = PIB per capita\n");
    scanf("%d", &escolha2);

    if (escolha == escolha2)
    {
        printf("Você escolheu a mesma opção");
    }
    else
    {
        switch (escolha2)
        {
        case 1:
            printf("--> COMPARAÇÃO DE POPULAÇÃO (maior população vence) <--\n");
            if (populacao > populacao2)
            {
                printf("- Carta 1 - População: %.2f\n- Carta 2 - População: %.2f\n", populacao, populacao2);
                printf("CARTA 1 VENCEU \n");
                soma1 = soma1 + 1;
            }
            else if (populacao2 > populacao)
            {
                printf("- Carta 1 - População: %.2f\n- Carta 2 - População: %.2f\n", populacao, populacao2);
                printf("CARTA 2 VENCEU \n");
                soma2 = soma2 + 1;
            }
            else
            {
                printf("Empate \n");
            }
            break;
        case 2:
            printf("--> COMPARAÇÃO DE ÁREA (maior área vence) <--\n");
            if (area > area2)
            {
                printf("- Carta 1 - Área: %.2fkm²\n- Carta 2 - Área: %.2f km²\n", area, area2);
                printf("CARTA 1 VENCEU \n");
                soma1 = soma1 + 1;
            }
            else if (area2 > area)
            {
                printf("- Carta 1 - Área: %.2f\n- Carta 2 - Área: %.2f km²\n", area, area2);
                printf("CARTA 2 VENCEU \n");
                soma2 = soma2 + 1;
            }
            else
            {
                printf("Empate \n");
            }
            break;
        case 3:
            printf("--> COMPARAÇÃO DE PIB (maior pib vence) <--\n");
            if (pib > pib2)
            {
                printf("- Carta 1 - PIB: %.2f\n- Carta 2 - PIB: %.2f\n", pib, pib2);
                printf("CARTA 1 VENCEU \n");
                soma1 = soma1 + 1;
            }
            else if (pib2 > pib)
            {
                printf("- Carta 1 - PIB: %.2f\n- Carta 2 - PIB: %.2f\n", pib, pib2);
                printf("CARTA 2 VENCEU \n");
                soma2 = soma2 + 1;
            }
            else
            {
                printf("Empate \n");
            }
            break;
        case 4:
            printf("--> COMPARAÇÃO DE Pontos Turisticos (maior número de pontos turisticos vence) <--\n");
            if (turisticos > turisticos2)
            {
                printf("- Carta 1 - Pontos Turisticos: %d\n- Carta 2 - Pontos Turisticos: %d\n", turisticos, turisticos2);
                printf("CARTA 1 VENCEU \n");
                soma1 = soma1 + 1;
            }
            else if (turisticos2 > turisticos)
            {
                printf("- Carta 1 - Pontos Turisticos: %d\n- Carta 2 - Pontos Turisticos: %d\n", turisticos, turisticos2);
                printf("CARTA 2 VENCEU \n");
                soma2 = soma2 + 1;
            }
            else
            {
                printf("Empate \n");
            }
            break;
        case 5:
            printf("--> COMPARAÇÃO DE DENSIDADE (menor densidade vence) <--\n");
            if (densidade < densidade2)
            {
                printf("- Carta 1 - Densidade: %.2f\n- Carta 2 - Densidade: %.2f\n", densidade, densidade2);
                printf("CARTA 1 VENCEU \n");
                soma1 = soma1 + 1;
            }
            else if (densidade2 < densidade)
            {
                printf("- Carta 1 - Densidade: %.2f\n- Carta 2 - Densidade: %.2f\n", densidade, densidade2);
                printf("CARTA 2 VENCEU \n");
                soma2 = soma2 + 1;
            }
            else
            {
                printf("Empate \n");
            }
            break;
        case 6:
            printf("--> COMPARAÇÃO DE PIB per capita (maior pib vence) <--\n");
            if (pibcapita > pibcapita2)
            {
                printf("- Carta 1 - PIB per capita: %.2f\n- Carta 2 - PIB per capita: %.2f\n", pibcapita, pibcapita2);
                printf("CARTA 1 VENCEU \n");
                soma1 = soma1 + 1;
            }
            else if (pibcapita2 > pibcapita)
            {
                printf("- Carta 1 - PIB per capita: %.2f\n- Carta 2 - PIB per capita: %.2f\n", pibcapita, pibcapita2);
                printf("CARTA 2 VENCEU \n");
                soma2 = soma2 + 1;
            }
            else
            {
                printf("Empate \n");
            }
            break;
        default:
            break;
        }

        printf("//////////////////////////////////////////////////////////////////\n");

        printf("\n");

        printf("---------------REVISANDO OS DADOS-------------------------\n");

        printf("Carta 1 \nEstado: %c \nCódigo: %s \nNome da cidade: %s\nPopulação: %.2f \nÁrea: %.2f km² \nPIB: %.2f \nPontos turisticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, turisticos, densidade, pibcapita);
        printf("...................................................................................\n");
        printf("Carta 2 \nEstado: %c \nCódigo: %s \nNome da cidade: %s\nPopulação: %.2f \nÁrea: %.2f km² \nPIB: %.2f \nPontos turisticos: %d\nDensidade: %.2f\nPIB per capita: %.2f", estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, pibcapita2);

        printf("\n");

        printf("...............................RESULTADO.......................................\n");

        printf("\n");

        printf("1 = População\n");
        printf("2 = Area\n");
        printf("3 = PIB\n");
        printf("4 = Pontos turisticos\n");
        printf("5 = Densidade\n");
        printf("6 = PIB per capita\n");
        printf("\n");
        printf("O primeiro atributo ESCOLHIDO foi: %d\n", escolha);
        printf("O segundo atributo ESCOLHIDO foi: %d\n", escolha2);

        printf("\n");

        printf("->Carta 1 - Cidade: %s - Soma  de pontos primeira carta: %d\n->Carta 2 - Cidade: %s - Soma de pontos segunda carta: %d\n", cidade, soma1, cidade2, soma2);

        printf("\n");
        printf("\n");

        resultado = soma1 > soma2 ? 1 : 0;

        switch (resultado)
        {
        case 1:
            if (resultado==1)
            {
                printf("carta 1 venceu!\n");
            }
            break;
        case 2:
            if (resultado==0){
                printf("carta 2 venceu!\n");
            }    
            break;
        default:
            printf("EMPATE\n");
        
        }
        printf("\n");

        printf("...............................FIM.......................................\n");

        return 0;
    }
}