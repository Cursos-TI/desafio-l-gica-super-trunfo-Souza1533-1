// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>

// Desafio Super Trunfo - Países

    //Variaveis-----------------------------------
    int pontos_turisticos, pontos_turisticos2, cep, cep2;//duas variaveis da mesma, para poder comparar cartas.
    char cidade[51],cidade2[51], pais[51], cod_carta[3], cod_carta2[3];
    float habitantes, habitantes2, area, area2, pib, pib2, pib_percapita, pib_percapita2, densidade_populacional, densidade_populacional2;
    long double soma, soma2;
    //--------------------------------------------


    void entradadedados() {
//Entrada de dados, tudo que sera pedido ao usuario, e guardado em sua respectivas variaveis.
    //primeira carta.
        printf("\n\nRegistro de novas cartas e comparaçao...\n");
        printf("\nDigite o nome da primeira cidade: ");
        scanf("%s", &cidade);

        printf("\nCodigo da primeira Carta:");
        scanf("%s", &cod_carta);

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

        //soma para comparaçao futura.
        soma = (float)pontos_turisticos + habitantes;
        soma += area;
        soma += pib;
        soma += pib_percapita;
        soma += densidade_populacional;


        //calculos.
        pib_percapita = pib / habitantes; //calculo de pib per capita
        densidade_populacional = habitantes / area; //calculo de densidade populacional
        printf("Carta cadastrada com sucesso!\n\n");
        //-------------------------------

    //segunda carta.
        printf("Registro de novas cartas e comparaçao...\n");
        printf("\nDigite o nome da segunda cidade: ");
        scanf("%s", &cidade2);

        printf("\nCodigo da segunda Carta:");
        scanf("%s", &cod_carta2);

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

        //soma para comparaçao futura.
        soma2 = (float)pontos_turisticos2 + habitantes2;
        soma2 += area2;
        soma2 += pib2;
        soma2 += pib_percapita2;
        soma2 += densidade_populacional2;
        //-------------------------------

        pib_percapita2 = pib2 / habitantes2; //calculo de pib per capita
        densidade_populacional2 = habitantes2 / area2; //calculo de densidade populacional
        printf("\n☆Comparaçao das cartas☆\n");
    };//--------------------------------------

    void carta() {
//saida de dados, que sera mostrada ao usuario.
        printf("\n   Carta 1                     Carta 2\n");
        printf("\nCidade: %s   |   Cidade: %s\n", cidade,cidade2);
        printf("Codigo da carta: %s   |   Codigo da carta: %s\n", cod_carta, cod_carta2);
        printf("Pontos Turisticos: %d    |    Pontos Turisticos: %d\n", pontos_turisticos, pontos_turisticos2);
        printf("Area: %.3f km²  |  Area: %.3f km²\n", area, area2);
        printf("PIB: %.3f reais  |   PIB: %.3f reais\n", pib, pib2);
        printf("Habitantes: %.3f  |  Habitantes: %.3f\n", habitantes, habitantes2);
        printf("CEP: %d    |   CEP: %d\n", cep, cep2);
        printf("PIB per capita: %.3f  |   PIB per capita: %.3f\n", pib_percapita, pib_percapita2);
        printf("Densidade populacional por: %.3f pessoas/km²    Densidade populacional por: %.3f pessoas/km²\n", densidade_populacional, densidade_populacional2);
        printf("================================================================\n\n");

        printf("Pontos---->  Carta 1: %llf  |  Carta2: %llf\n\n", soma, soma2);
        if (soma > soma2){
            printf("Carta 1 VENCEDORA!!\n");
        } else {
            printf("Carta 2 VENCEDORA!!\n");
        }
        //comparaçao dos atributos.
        printf("\n%s                   %s\n", cidade, cidade2);
        //habitantes
        if (habitantes > habitantes2){
            printf("\n%f Tem mais habitantes doque %f", habitantes, habitantes2);
        } else {
            printf("\n%f Tem menos habitantes doque %f", habitantes, habitantes2);
        }
        //area
        if (area > area2){
             printf("\n%f Maior em metros quadrados doque %f", area, area2);
        } else {
             printf("\n%f Menor em metros quadrados doque %f", area, area2);
        }
        //PIB
        if (pib > pib2){
            printf("\n%f Tem o PIB maior que %f", pib, pib2);
        } else {
            printf("\n%f Tem o PIB menor que %f", pib, pib2);
        }
        //Densidade populacional
        if ( densidade_populacional > densidade_populacional2){
            printf("\n%f Tem densidade popilacional maior que %f", densidade_populacional, densidade_populacional2);
        } else {
            printf("\n%f Tem densidade popilacional maior que %f", densidade_populacional, densidade_populacional2);
        }
        //PIB per capita
        if (pib_percapita > pib_percapita2){
            printf("\n%f PIB percapita maior que %f\n", pib_percapita, pib_percapita2);
        } else {
            printf("\n%f PIB percapita menor que %f\n", pib_percapita, pib_percapita2);
        }





    };//----------------------------------------


//esta registrando 4 cartas/cidades.
    void ordem() {
        entradadedados();
        carta();
        entradadedados();
        carta();
        entradadedados();
        carta();
        entradadedados();
        carta();
    }//------------------------------------------

//cada linha de estado, registra 4 cidades, com tudo, esse void chama todas das funcoes em ordem, e registra os 8 estados.
 void on() {
        
    //Estado A
        printf("Estado: A\n");
        ordem();
    //Estado B
        printf("Estado: B\n");
        ordem();
    //Estado C
        printf("Estado: C\n");
        ordem();
    //Estado D
        printf("Estado: D\n");
        ordem();
    //Estado E
        printf("Estado: E\n");
        ordem();
    //Estado F
        printf("Estado: F\n");
        ordem();
    //Estado G
        printf("Estado: G\n");
        ordem();
    //Estado H
        printf("Estado: H\n");
        ordem();
}//-----------------------------------------

//com apenas essa funçao ativando/chamando todas em ordem, dando assim o start do programa.
int main() {
    on();
    printf("☆☆☆ ☆☆ ☆  FIM  ☆ ☆☆ ☆☆☆");
//-----------------------------------------
    return 0;
}
