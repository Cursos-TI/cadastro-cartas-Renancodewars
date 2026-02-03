// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    char estado, estado2; 
    char codigo[20], codigo2[20]; 
    char cidade[50], cidade2[50]; 
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, pib, area2, pib2;
    
    //--------------------------------------------------
    
    // Cadastro da Carta 1
   
    printf("Cadastro Carta 1\n");
    
    printf("Estado (A-Z): ");
    scanf(" %c", &estado);
    
    printf("Código (ex: A01): ");
    scanf("%s", codigo);
    
    printf("digite a cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("area (em km): ");
    scanf("%f", &area);
    
    printf("pib: ");
    scanf("%f", &pib);
    
    printf("pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
    // carta 01 finalizada
    
   // ---------------------------------------------------------
    
    // Cadastro da Carta 2
    
    printf("Cadastro Carta 2\n");
    
    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);
    
    printf("Código (ex: A01): ");
    scanf("%s", codigo2);
    
    printf("digite a cidade: ");
    scanf("%s", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("area (em km): ");
    scanf("%f", &area2);
    
    printf("pib: ");
    scanf("%f", &pib2);
    
    printf("pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 1:\nEstado: %c, Código: %s, Cidade: %s, População: %d, Área: %.2f km², PIB: %.2f bilhões, Pontos: %d\n", 
           estado, codigo, cidade, populacao, area, pib, pontosTuristicos);
           
    printf("\nCarta 1:\nEstado: %c, Código: %s, Cidade: %s, População: %d, Área: %.2f km², PIB: %.f bilhões, Pontos: %d\n", 
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);       
    
     return 0;
}