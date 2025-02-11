#include <stdio.h>

// Variáveis globais
int comp_atrib, pontos_turisticos, pontos_turisticos2, cep, cep2; // Para comparar cartas
char cidade[51], cidade2[51], pais[51], cod_carta[3], cod_carta2[3];
float habitantes, habitantes2, area, area2, pib, pib2, pib_percapita, pib_percapita2, densidade_populacional, densidade_populacional2;
long double soma, soma2;

// Função para entrada de dados
void entradadedados() {
    // Primeira carta
    printf("\n\nRegistro de cartas\n");
    printf("\nDigite o nome da primeira cidade: ");
    scanf("%s", cidade);

    printf("\nCodigo da primeira Carta:");
    scanf("%s", cod_carta);

    printf("\nNumero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_turisticos);

    printf("\nCEP da cidade da primeira carta: ");
    scanf("%d", &cep);

    printf("\nNumero de habitantes da primeira carta: ");
    scanf("%f", &habitantes);

    printf("\nArea da cidade em quilômetros quadrados da primeira carta: ");
    scanf("%f", &area);

    printf("\nPIB da cidade da primeira carta: ");
    scanf("%f", &pib);

    // Cálculos
    pib_percapita = pib / habitantes; // Calculo de PIB per capita
    densidade_populacional = habitantes / area; // Calculo de densidade populacional
    printf("Carta cadastrada com sucesso!\n\n");

    // Segunda carta
    printf("Registro de novas cartas e comparação...\n");
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("\nCodigo da segunda Carta:");
    scanf("%s", cod_carta2);

    printf("\nNumero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCEP da cidade da segunda carta: ");
    scanf("%d", &cep2);

    printf("\nNumero de habitantes da segunda carta: ");
    scanf("%f", &habitantes2);

    printf("\nArea da cidade em quilômetros quadrados da segunda carta: ");
    scanf("%f", &area2);

    printf("\nPIB da cidade da segunda carta: ");
    scanf("%f", &pib2);

    // Cálculos
    pib_percapita2 = pib2 / habitantes2; // Calculo de PIB per capita
    densidade_populacional2 = habitantes2 / area2; // Calculo de densidade populacional
    printf("\n☆Comparação das cartas☆\n");
}

// Função de exibição das cartas
void carta() {
    printf("\n   Carta 1                     Carta 2\n");
    printf("\nCidade: %s   |   Cidade: %s\n", cidade, cidade2);
    printf("Codigo da carta: %s   |   Codigo da carta: %s\n", cod_carta, cod_carta2);
    printf("Pontos Turisticos: %d    |    Pontos Turisticos: %d\n", pontos_turisticos, pontos_turisticos2);
    printf("Area: %.3f km²  |  Area: %.3f km²\n", area, area2);
    printf("PIB: %.3f reais  |   PIB: %.3f reais\n", pib, pib2);
    printf("Habitantes: %.3f  |  Habitantes: %.3f\n", habitantes, habitantes2);
    printf("CEP: %d    |   CEP: %d\n", cep, cep2);
    printf("PIB per capita: %.3f  |   PIB per capita: %.3f\n", pib_percapita, pib_percapita2);
    printf("Densidade populacional por: %.3f pessoas/km²    Densidade populacional por: %.3f pessoas/km²\n", densidade_populacional, densidade_populacional2);
    printf("================================================================\n\n");
}

// Função de comparação dos atributos separadamente
void comparacaoAtributos() {
    printf("\nComparando os Atributos:\n");

    // Comparando Habitantes
    if (habitantes > habitantes2) {
        printf("%s tem mais habitantes do que %s\n", cidade, cidade2);
    } else if (habitantes < habitantes2) {
        printf("%s tem menos habitantes do que %s\n", cidade, cidade2);
    } else {
        printf("%s e %s têm o mesmo número de habitantes\n", cidade, cidade2);
    }

    // Comparando Área
    if (area > area2) {
        printf("%s tem maior área do que %s\n", cidade, cidade2);
    } else if (area < area2) {
        printf("%s tem menor área do que %s\n", cidade, cidade2);
    } else {
        printf("%s e %s têm a mesma área\n", cidade, cidade2);
    }

    // Comparando PIB
    if (pib > pib2) {
        printf("%s tem o PIB maior que %s\n", cidade, cidade2);
    } else if (pib < pib2) {
        printf("%s tem o PIB menor que %s\n", cidade, cidade2);
    } else {
        printf("%s e %s têm o mesmo PIB\n", cidade, cidade2);
    }

    // Comparando Densidade Populacional
    if (densidade_populacional > densidade_populacional2) {
        printf("%s tem maior densidade populacional do que %s\n", cidade, cidade2);
    } else if (densidade_populacional < densidade_populacional2) {
        printf("%s tem menor densidade populacional do que %s\n", cidade, cidade2);
    } else {
        printf("%s e %s têm a mesma densidade populacional\n", cidade, cidade2);
    }

    // Comparando PIB per Capita
    if (pib_percapita > pib_percapita2) {
        printf("%s tem PIB per capita maior que %s\n", cidade, cidade2);
    } else if (pib_percapita < pib_percapita2) {
        printf("%s tem PIB per capita menor que %s\n", cidade, cidade2);
    } else {
        printf("%s e %s têm o mesmo PIB per capita\n", cidade, cidade2);
    }
}



// Função principal de fluxo
int main() {
    printf("######=  M-E-N-U  =######\n");
    printf("\n1. Registrar Cartas\n");
    printf("2. Comparar atributos separadamente\n");
    scanf("%d", &comp_atrib);

    switch (comp_atrib) {
        case 1:
            entradadedados();
            carta();
            comparacaoAtributos();
            break;

        case 2:
            entradadedados();  // Chama a função de entrada para capturar as cartas
            printf("\n1. Comparar Habitantes");
            printf("\n2. Comparar Area");
            printf("\n3. Comparar PIB");
            printf("\n4. Comparar Densidade");
            printf("\n5. Comparar PIB per capita");
            printf("\nEscolha opçao:\n");
            scanf("%d", &comp_atrib);

                switch (comp_atrib)
                {
                    case 1:
                    // Comparando Habitantes
                        if (habitantes > habitantes2) {
                            printf("%s tem mais habitantes do que %s\n", cidade, cidade2);}
                        else if (habitantes < habitantes2) {
                            printf("%s tem menos habitantes do que %s\n", cidade, cidade2);}
                        else {
                            printf("%s e %s têm o mesmo número de habitantes\n", cidade, cidade2);} break;

                    case 2:
                    // Comparando Área
                        if (area > area2) {
                            printf("%s tem maior área do que %s\n", cidade, cidade2);}
                        else if (area < area2) {
                            printf("%s tem menor área do que %s\n", cidade, cidade2);}
                        else {
                            printf("%s e %s têm a mesma área\n", cidade, cidade2);} break;

                    case 3: 
                    //Comparando PIB
                        if (pib > pib2) {
                            printf("%s tem o PIB maior que %s\n", cidade, cidade2);}
                        else if (pib < pib2) {
                            printf("%s tem o PIB menor que %s\n", cidade, cidade2);} 
                        else {
                            printf("%s e %s têm o mesmo PIB\n", cidade, cidade2);} break;
                    
                    case 4:
                    // Comparando Densidade Populacional
                        if (densidade_populacional > densidade_populacional2) {
                            printf("%s tem maior densidade populacional do que %s\n", cidade, cidade2);}
                        else if (densidade_populacional < densidade_populacional2) {
                            printf("%s tem menor densidade populacional do que %s\n", cidade, cidade2);}
                        else {
                            printf("%s e %s têm a mesma densidade populacional\n", cidade, cidade2);} break;

                    case 5:
                    // Comparando PIB per Capita
                        if (pib_percapita > pib_percapita2) {
                            printf("%s tem PIB per capita maior que %s\n", cidade, cidade2);}
                        else if (pib_percapita < pib_percapita2) {
                            printf("%s tem PIB per capita menor que %s\n", cidade, cidade2);}
                        else {
                            printf("%s e %s têm o mesmo PIB per capita\n", cidade, cidade2);} break;

                    default: break;
                }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
