#include <stdio.h>
#include <stdio.h>

int main() {
    // Carta 1 
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1); 

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);
   
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade1); 

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: "); 
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2); 

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo2);
   
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade2); 

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2); 

    printf("Informe o número de pontos turísticos: "); 
    scanf("%d", &pontosTuristicos2);

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional  %.2f  hab/km² \n", populacao1 / area1);
    printf("PIB per Capita: %.2f reais\n ", pib1 / populacao1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional  %.2f  hab/km² \n", populacao2 / area2);
    printf("PIB per Capita: %.2f reais\n ", pib2 / populacao2);
    
    
return 0;
}
