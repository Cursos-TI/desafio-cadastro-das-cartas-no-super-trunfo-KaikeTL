#include <stdio.h>
int main(){

// Váriaveis Separadas


    char Estado1 [10], Codigo1[10], Nome_da_Cidade1[100], Estado2[10], Codigo2[10], Nome_da_Cidade2 [100];
    int Populacao1, Pontos_Turisticos1, Populacao2, Pontos_Turisticos2;
    float Area1, Pib1, Area2, Pib2;

    //carta 1

    printf("Carta 1 \n\n");            
    printf("Digite o Estado: ");
    scanf("%s", &Estado1);

    printf("Digite o Código: ");
    scanf("%s",&Codigo1);
                                                 
    printf("Digite o Nome da Cidade: ");
    scanf("%s",&Nome_da_Cidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o Pib: ");
    scanf("%f", &Pib1);

    printf("Digite o Numero de Pontos Turísticos: " );
    scanf("%d", &Pontos_Turisticos1);


    //carta 2

    printf("\nCarta 2 \n\n");
    printf("Digite o Estado: ");
    scanf("%s", &Estado2);

    printf("Digite o Código: ");
    scanf("%s",&Codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s",&Nome_da_Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o Pib: ");
    scanf("%f", &Pib2) ;

    printf("Digite o Numero de Pontos Turísticos: ");
    scanf("%d", &Pontos_Turisticos2 );


    printf("\n\nCarta 1 \n\n");

    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %d" " km²\n" ,Area1);
    printf("PIB: %.5f\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n\n", Pontos_Turisticos1);


    printf("Carta 2 \n\n");

    printf("Estado: %s\n", Estado2); 
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %d" " km²\n" ,Area2);
    printf("PIB: %.5f\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);

    return 0;





    



























}