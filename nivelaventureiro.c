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
    int opcao;

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
    printf("Cartas disponíveis:\n");
    printf("1. %s\n", pais1);
    printf("2. %s\n", pais2);
    printf("\n Escolha o atributo para comparação:\n"); 
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade Demográfica \n");
    printf("0. Sair do jogo \n");
    printf("Digite sua opção: \n");
    scanf("%d", &opcao);

    if (opcao == 0) {
        printf("\n Jogo encerrado. \n");
    
    }

    printf("\n Resultado da comparação: \n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);

    // Estrutura switch para comparar diferentes atributos
    switch (opcao)
    {
    case 1:
        printf("Atributo: População\n");
        printf("%s: %d habitantes\n", pais1, populacao1);
        printf("%s: %d habitantes\n", pais2, populacao2);

        if (populacao1 > populacao2) {
            printf("Vencedor: %s (maior população)\n", pais1);
        } else if (populacao2 > populacao1) {
            printf("Vencedor: %s (maior população)\n", pais2);
        } else {
            printf("Empate! As cidades têm a mesma população.\n");
        }
        break;
   case 2:
        printf("Atributo: Área\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);
                
        if (area1 > area2) {
            printf("Vencedor: %s (maior área)\n", pais1);
        } else if (area2 > area1) {
            printf("Vencedor: %s (maior área)\n", pais2);
        } else {
            printf("Empate! As cidades têm a mesma área.\n");
        }
        break;
    case 3:
        printf("Atributo: PIB\n");
        printf("%s: R$ %.2f\n", pais1, pib1);
        printf("%s: R$ %.2f\n", pais2, pib2);
                
        if (pib1 > pib2) {
            printf("Vencedor: %s (maior PIB)\n", pais1);
        } else if (pib2 > pib1) {
            printf("Vencedor: %s (maior PIB)\n", pais2);
        } else {
            printf("Empate! As cidades têm o mesmo PIB.\n");
        }
        break;
    case 4:
        printf("Atributo: Pontos Turísticos\n");
        printf("%s: %d pontos\n", pais1, pontosTuristicos1);
        printf("%s: %d pontos\n", pais2, pontosTuristicos2);
                
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Vencedor: %s (mais pontos turísticos)\n", pais1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Vencedor: %s (mais pontos turísticos)\n", pais2);
        } else {
            printf("Empate! As cidades têm o mesmo número de pontos turísticos.\n");
        }
        break;
    case 5: // Densidade Demográfica - menor valor vence
        printf("Atributo: Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", pais1, densidade1);
        printf("%s: %.2f hab/km²\n", pais2, densidade2);
                
        if (densidade1 < densidade2) {
            printf("Vencedor: %s (menor densidade demográfica)\n", pais1);
        } else if (densidade2 < densidade1) {
            printf("Vencedor: %s (menor densidade demográfica)\n", pais2);
        } else {
            printf("Empate! As cidades têm a mesma densidade demográfica.\n");
        }
        break;
    default:
        printf("Opção inválida no menu!\n");
        break;
}
return 0;
}