#include <stdio.h>

int main (){

    // Definição das variáveis para armazenar as propriedades das cidades
  
    // Cartas
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;

    // Variáveis para o jogo
    int opcao1, opcao2;
    float soma1, soma2;

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
    %s: Imprime uma cadeia (string) de caracteres.
    */

    // Área para os cálculos
    densidade1 = (float)populacao1 / area1;

    densidade2 = (float)populacao2 / area2;

    // Menu interativo
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção (1-5): ");
    scanf("%d", &opcao1);

    // Validação da primeira opção
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida! O programa será encerrado.\n");
    }

    printf("Escolha o segundo atributo:\n");
    printf("Opções disponíveis:\n");
    
    // Mostra as opções disponíveis (excluindo a primeira escolha)
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demográfica\n");

    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // Validação da segunda opção
    if (opcao2 == opcao1) {
        printf("Você escolheu o mesmo atributo! O programa será encerrado.\n");
    }

     if (opcao2 < 1 || opcao2 > 5) {
        printf("Opção inválida! O programa será encerrado.\n");
     }

     printf("\n Resultado da rodada\n");

    // Inicializa as somas
    soma1 = 0;
    soma2 = 0;
    
    // Primeiro atributo
    printf("\n--- Primeiro atributo ---\n");
    switch(opcao1) {
        case 1:
            printf("POPULAÇÃO:\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            
            // Operador ternário para determinar o vencedor do primeiro atributo
            printf("Vencedor: %s\n", 
                   (populacao1 > populacao2) ? pais1 : 
                   (populacao2 > populacao1) ? pais2 : "Empate!");
            
            soma1 += populacao1;
            soma2 += populacao2;
            break;
            
        case 2:
            printf("ÁREA:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            
            printf("Vencedor: %s\n", 
                   (area1 > area2) ? pais1 : 
                   (area2 > area1) ? pais2 : "Empate!");
            
            soma1 += area1;
            soma2 += area2;
            break;
            
        case 3:
            printf("PIB:\n");
            printf("%s: R$ %.2f\n", pais1, pib1);
            printf("%s: R$ %.2f\n", pais2, pib2);
            
            printf("Vencedor: %s\n", 
                   (pib1 > pib2) ? pais1 : 
                   (pib2 > pib1) ? pais2 : "Empate!");
            
            soma1 += pib1;
            soma2 += pib2;
            break;
            
        case 4:
            printf("PONTOS TURÍSTICOS:\n");
            printf("%s: %d pontos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos\n", pais2, pontosTuristicos2);
            
            printf("Vencedor: %s\n", 
                   (pontosTuristicos1 > pontosTuristicos2) ? pais1 : 
                   (pontosTuristicos2 > pontosTuristicos1) ? pais2 : "Empate!");
            
            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;
            break;
            
        case 5: 
            printf("DENSIDADE DEMOGRÁFICA:\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            
            // Para densidade, MENOR valor vence (regra especial)
            printf("Vencedor: %s\n", 
                   (densidade1 < densidade2) ? pais1 : 
                   (densidade2 < densidade1) ? pais2 : "Empate!");
            
            // Para densidade, usamos o inverso (1/densidade) para manter a lógica
            soma1 += (1.0 / densidade1) * 1000;
            soma2 += (1.0 / densidade2) * 1000;
            break;
    }

     // Segundo atributo
    printf("\n--- Segundo atributo ---\n");
    switch(opcao2) {
        case 1:
            printf("POPULAÇÃO:\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            
            printf("Vencedor: %s\n", 
                   (populacao1 > populacao2) ? pais1 : 
                   (populacao2 > populacao1) ? pais2 : "Empate!");
            
            soma1 += populacao1;
            soma2 += populacao2;
            break;
            
        case 2:
            printf("ÁREA:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            
            printf("Vencedor: %s\n", 
                   (area1 > area2) ? pais1 : 
                   (area2 > area1) ? pais2 : "Empate!");
            
            soma1 += area1;
            soma2 += area2;
            break;
            
        case 3:
            printf("PIB:\n");
            printf("%s: R$ %.2f\n", pais1, pib1);
            printf("%s: R$ %.2f\n", pais2, pib2);
            
            printf("Vencedor: %s\n", 
                   (pib1 > pib2) ? pais1 : 
                   (pib2 > pib1) ? pais2: "Empate!");
            
            soma1 += pib1;
            soma2 += pib2;
            break;
            
        case 4:
            printf("PONTOS TURÍSTICOS:\n");
            printf("%s: %d pontos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos\n", pais2, pontosTuristicos2);
            
            printf("Vencedor: %s\n", 
                   (pontosTuristicos1 > pontosTuristicos2) ? pais1 : 
                   (pontosTuristicos2 > pontosTuristicos1) ? pais2 : "Empate!");
            
            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;
            break;
            
        case 5:
            printf("DENSIDADE DEMOGRÁFICA:\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            
            // Para densidade, MENOR valor vence (regra especial)
            printf("Vencedor: %s\n", 
                   (densidade1 < densidade2) ? pais1 : 
                   (densidade2 < densidade1) ? pais2 : "Empate!");
            
            // Para densidade, usamos o inverso (1/densidade) para manter a lógica
            soma1 += (1.0 / densidade1) * 1000;
            soma2 += (1.0 / densidade2) * 1000;
            break;
    }
     // Resultado final - soma dos atributos
    printf("\n Resultado Final \n");
    
    printf("\n Soma dos atributos:\n");
    printf("%s: %.2f pontos\n", pais1, soma1);
    printf("%s: %.2f pontos\n", pais2, soma2);
    
    printf("\n Vencedor da rodada \n");
    
    if (soma1 > soma2) {
        printf("%s Venceu!\n", pais1);
        printf("(Maior soma de atributos: %.2f > %.2f)\n", soma1, soma2);
    } else if (soma2 > soma1) {
        printf("%s Venceu!\n", pais2);
        printf("(Maior soma de atributos: %.2f > %.2f)\n", soma2, soma1);
    } else {
        printf("Empate!\n");
        printf("(Ambas as cidades têm a mesma soma: %.2f)\n", soma1);
    }
    
    printf("\n============================================\n");
    printf("        FIM DO SUPER TRUNFO     \n");
    printf("============================================\n");

    return 0;
}