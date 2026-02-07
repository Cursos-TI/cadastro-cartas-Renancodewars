// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    char estado, estado2; 
    char codigo[20], codigo2[20]; 
    char cidade[50], cidade2[50]; 
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, pib, area2, pib2, soma, soma2;
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
           
    printf("\nCarta 2:\nEstado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.f bilhões \nPontos turisticos: %d\n",
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
    
    //---------------------- fase 3 do desfio ---------------------------------------------------------
    
    // inverso da densidade
float invdensidade = 1.0 / densidade;
float invdensidade2 = 1.0 / densidade2;

// super poder carta 1
soma = populacao + area + pib + pontosTuristicos + pibpercapita + invdensidade;

// super poder carta 2
soma2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + invdensidade2;

printf("\nSuper Poder Carta 1: %.2f\n", soma);
printf("Super Poder Carta 2: %.2f\n\n", soma2);


// ---------------- COMPARAÇÕES ----------------

printf("Comparação de Cartas:\n");

// População
int r = populacao > populacao2;
printf("População: Carta %d venceu (%d)\n", r?1:2, r);

// Área
r = area > area2;
printf("Área: Carta %d venceu (%d)\n", r?1:2, r);

// PIB
r = pib > pib2;
printf("PIB: Carta %d venceu (%d)\n", r?1:2, r);

// Pontos turísticos
r = pontosTuristicos > pontosTuristicos2;
printf("Pontos Turísticos: Carta %d venceu (%d)\n", r?1:2, r);

// Densidade (MENOR vence)
r = densidade < densidade2;
printf("Densidade Populacional: Carta %d venceu (%d)\n", r?1:2, r);

// PIB per capita
r = pibpercapita > pibpercapita2;
printf("PIB per Capita: Carta %d venceu (%d)\n", r?1:2, r);

// Super Poder
r = soma > soma2;
printf("Super Poder: Carta %d venceu (%d)\n", r?1:2, r);
    
// a parte 3 do desafio foi utilizado IA porém nao de uma forma a burla, mas sim de utilizar ferramentas de tecnologia para agilização e codificação do codigo de forma eficiente, pratica e rapida conceitos fundamentais na programação projeto fase 1 e 2 feitos a mão sem ajuda nenhuma da IA, feito somente vendo as aulas e explicações do professor
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
