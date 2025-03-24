#include <stdio.h>
int main(){

// Váriaveis Separadas


    char Estado1 [10], Codigo1[10], Nome_da_Cidade1[100];              
    char Estado2[10], Codigo2[10], Nome_da_Cidade2 [100];

    int Populacao1, Populacao2;  
    int Pontos_Turisticos1, Pontos_Turisticos2;

    float Area1, Pib1, Area2, Pib2;
    float PopuArea1, PopuArea2;
    float pibper1, pibper2;

    float superpoder1; 
    float superpoder2;

    superpoder1 = Area1 + Pib1 + pibper1 + Pontos_Turisticos1 + (PopuArea1 * -1);

    superpoder2 = Area2 + Pib2 + pibper2 + Pontos_Turisticos2 + (PopuArea2 * -1);

   

    //PopuArea1 e 2 = densidade populacional
    //Pibper1 e 2 = pib per capta






    //carta 1
                     // Desativei as linhas de código do pib e da população, no sava diz que é pra fazer mas nas instruções falam q é so no proximo nivel, mas eu fiz.
                    

    printf("Carta 1 \n\n");            
    printf("Digite o Estado: ");
    scanf("%s", Estado1);

    printf("Digite o Código: ");
    scanf("%s",Codigo1);
                                                 
    printf("Digite o Nome da Cidade: ");
    scanf("%s",Nome_da_Cidade1);

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
    scanf("%s", Estado2);

    printf("Digite o Código: ");
    scanf("%s",Codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s",Nome_da_Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o Pib: ");
    scanf("%f", &Pib2) ;

    printf("Digite o Numero de Pontos Turísticos: ");
    scanf("%d", &Pontos_Turisticos2 );




////////////////////////////////////////////////////////////////////////////



//PopuArea1 e 2 = densidade populacional
    //Pibper1 e 2 = pib per capta

    

   PopuArea1 = Populacao1 / Area1;
   PopuArea2 = Populacao2 / Area2;

   pibper1 = Pib1  * 1000000000 / (float)Populacao1;
   pibper2 = Pib2  * 1000000000 / (float)Populacao2;

  



    printf("\n\nCarta 1 \n\n");

    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f" " km²\n" ,Area1);
    printf("PIB: %.2f Bilhões de Reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/Km² \n", PopuArea1);
    printf("PIB per Capita: %.2f Reais \n", pibper1);

    
    







                                                                                     //%.nf limitando casas decimais
                                                                                    
    printf("Carta 2 \n\n");

    printf("Estado: %s\n", Estado2); 
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f" " km²\n" ,Area2);
    printf("PIB: %.2f Bilhões de Reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/Km² \n", PopuArea2);
    printf("PIB per capita: %.2f Reais\n", pibper2);

    printf("\n\nComparação das Cartas: \n");
    printf("População: %d Ganhou\n", Populacao1 > Populacao2);
    printf("Área: %d Ganhou\n", Area1 > Area2);
    printf("PIB: %d Gannhou\n", Pib1 > Pib2);
    printf("Pontos Turísticos: %d Ganhou\n", Pontos_Turisticos1 > Pontos_Turisticos2);
    printf("Densidade Populacional: %d Ganhou\n", PopuArea1 > PopuArea2);
    printf("PIB per Capita: %d Ganhou\n", pibper1 > Pib2);
    printf("Super Poder: %d Ganhou\n", superpoder1 > superpoder2);
    

    return 0;


}