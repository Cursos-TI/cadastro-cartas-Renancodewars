// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    char estado, estado2; 
    char codigo[20], codigo2[20]; 
    char cidade[50], cidade2[50]; 
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, pib, area2, pib2;
    float densidade, densidade2, pibpercapita, pibpercapita2;
    
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

    printf("\nCarta 1:\nEstado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões \nPontos turisticos: %d\n", 
           estado, codigo, cidade, populacao, area, pib, pontosTuristicos);
           
    printf("\nCarta 2:\nEstado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.f \nbilhões \nPontos turisticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);       
    
    
    //desafio nivel intermediario - aventureiro = carta 01
    printf("calculos de desidade e pib carta 1\n");
    densidade = (float) (populacao / area);
    pibpercapita = (float) (pib / populacao);
    printf("densidade populacional: %.2f \npib per capita: %.2f\n", densidade, pibpercapita);
    
    //desafio nivel intermediario - aventureiro = carta 02
    printf("calculos de desidade e pib carta 2\n");
    densidade2 = (float) (populacao2 / area2);
    pibpercapita2 = (float) (pib2 / populacao2);
    printf("densidade populacional: %.2f\n", densidade2);
    printf("pib per capita: %.2f\n", pibpercapita2);
    //usei dois modelos de exibição pois fiz o priemiro depois percebi que poderia usar outro tambem então deixei os dois para ilustra que podemos fazer a mesma linha de codigo de diversas formas diferente
    

    return 0;
}