#include <stdio.h>
//desafio super trunfo - novato
int main() {
    // Variáveis
    char estado; 
    char cidade[20];
    char codigo[20]; // Código da cidade (Ex: A01, A02...)
    int populacao, NPT; // NPT = Número de pontos turísticos
    float pib, area; 

    // CARTA 1 --

    printf("Insira os dados das suas cartas!\n");
    printf("\nCarta 1\n");

    // Coleta de informações
    printf("Qual o estado informado em sua carta?\n");
    scanf(" %c", &estado);

    printf("Informe a cidade referente à sua carta:\n");
    scanf("%s", cidade);

    printf("Insira o código da sua cidade (Ex: A01, A02, B01, B02...):\n");
    scanf("%s", codigo);

    printf("Informe a população referente à sua carta:\n");
    scanf("%d", &populacao);

    printf("Quantos pontos turísticos sua carta possui?\n");
    scanf("%d", &NPT);

    printf("Qual a área informada em sua carta?\n");
    scanf("%f", &area);

    printf("Qual o PIB informado em sua carta?\n");
    scanf("%f", &pib);

    printf("\nCarta 1:\n-------------------------------------\n");

    // Informações coletadas
    // Apresentação de dados: carta 1
    printf(" Estado: %c\n Cidade: %s\n Código: %s\n População: %d\n Número de pontos turísticos: %d\n Área: %.2f km²\n PIB: %.2f\n", 
           estado, cidade, codigo, populacao, NPT, area, pib);

    // CARTA 2 -- 

    printf("Insira os dados da carta 2\n");
    printf("\nCarta 2\n");

    // Coleta de informações
    printf("\nQual o estado informado em sua carta?\n");
    scanf(" %c", &estado);

    printf("Informe a cidade referente à sua carta:\n");
    scanf("%s", cidade);

    printf("Insira o código da sua cidade (Ex: A01, A02, B01, B02):\n");
    scanf("%s", codigo);

    printf("Informe a população referente à sua carta:\n");
    scanf("%d", &populacao);

    printf("Quantos pontos turísticos sua carta possui?\n");
    scanf("%d", &NPT);

    printf("Qual a área informada em sua carta?\n");
    scanf("%f", &area);

    printf("Qual o PIB informado em sua carta?\n");
    scanf("%f", &pib);

    // Informações coletadas
    // Apresentação de dados: carta 2
    printf("\nCarta 2:\n-------------------------------------\n");
    printf("Estado: %c\n Cidade: %s\n Código: %s\n População: %d\n Número de pontos turísticos: %d\n Área: %.2f km²\n PIB: %.2f\n",
           estado, cidade, codigo, populacao, NPT, area, pib);

    return 0;
}