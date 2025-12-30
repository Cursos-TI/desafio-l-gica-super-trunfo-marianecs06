#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
  
    // Cartas
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;

    // Variáveis de controle de jogo
    int opcao;
    char *paisVencedor;
    float valor1, valor2;

    // Cadastro das Cartas:
   
    printf(" *** Cadastro da Carta 1 *** \n");

    printf("Nome do País: \n");
    scanf("%s", pais1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);


    printf(" *** Cadastro da Carta 2 ***\n");

    printf("Nome do País: \n");
    scanf("%s", pais2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    /*
    %d: Imprime um inteiro no formato decimal.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    // Área para os cálculos
    densidade1 = (float)populacao1 / area1;

    densidade2 = (float)populacao2 / area2;

    // Menu interativo
    printf("\n*** Menu Interativo ***\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade Demográfica \n");
    printf("Escolha o atributo para comparar: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: // População
        printf("Atributo: População\n");
        valor1 = (float)populacao1;
        valor2 = (float)populacao2;
        if (populacao1 > populacao2) {
            paisVencedor = pais1;
        } else if (populacao2 > populacao1) {
            paisVencedor = pais2;
        } else {
            paisVencedor = "Empate";
        }
        break;
    case 2:
        printf("Atributo: Área\n");
        valor1 = area1;
        valor2 = area2;
        if (area1 > area2) {
            paisVencedor = pais1;
        } else if (area2 > area1) {
            paisVencedor = pais2;
        } else {
            paisVencedor = "Empate";
        }
        break;
        case 3:
        printf("Atributo: PIB\n");
        valor1 = pib1;
        valor2 = pib2;
        if (pib1 > pib2) {
            paisVencedor = pais1;
        } else if (pib2 > pib1) {
            paisVencedor = pais2;
        } else {
            paisVencedor = "Empate";
        }
        break;
        case 4:
        printf("Atributo: Pontos Turísticos\n");
        valor1 = pontosTuristicos1;
        valor2 = pontosTuristicos2;
        if (pontosTuristicos1 > pontosTuristicos2) {
            paisVencedor = pais1;
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            paisVencedor = pais2;
        } else {
            paisVencedor = "Empate";
        }
        break;
        case 5: // Densidade (menor vence)
        printf("Atributo: Densidade Demográfica\n");
        valor1 = densidade1;
        valor2 = densidade2;
        if (densidade1 < densidade2) {
            paisVencedor = pais1;
        } else if (densidade2 < densidade1) {
            paisVencedor = pais2;
        } else {
            paisVencedor = "Empate";
        }
        break;
    default:
        printf("Opção inválida no menu!\n");
        break;

        // Exibição do resultado final
    printf("País 1 (%s): %.2f\n", pais1, valor1);
    printf("País 2 (%s): %.2f\n", pais2, valor2);
    
    if (paisVencedor == "Empate") {
        printf("Resultado: Empate!\n");
    } else {
        printf("O país vencedor é: %s\n", paisVencedor);
    }
    return 0;
    }
}