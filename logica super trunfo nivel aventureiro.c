#include <stdio.h>
int main () {
       int escolha;
       char estado1 = 'A'; // declarando as variaveis
       char codigo1[5] = "A01";
       char cidade1[10]= "santos";
       unsigned  populacao1 = 100000 ;
       float area1 = 200000;
       float pib1 = 300000;
       int pontos1 = 10;
       float densidade1; // densidade populacional
       float pibpc1; //pib per capta
       float super1;
       densidade1 = populacao1 / area1;
       pibpc1 = pib1 / populacao1;
       super1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpc1;
    
       char estado2 = 'B'; // declarando as variaveis
       char codigo2[5] = "B02";
       char cidade2[10]= "curitiba";
       unsigned  populacao2 = 200000 ;
       float area2 = 300000;
       float pib2 = 400000;
       int pontos2 = 20;
       float densidade2; // densidade populacional
       float pibpc2; //pib per capta
       float super2;
       densidade2 = populacao2 / area2;
       pibpc2 = pib2 / populacao2;
       super2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpc2;

       printf("Escolha o requesito para comparar as cartas:\n");
       printf("1:População\n");
       printf("2:Área\n");
       printf("3:PIB\n");
       printf("4:Pontos turisticos\n");
       printf("5:Densidade populacional\n");
       printf("6:PIB per capta\n");
       printf("digite o numero correspondente ao requesito:");
       scanf("%d" , &escolha);

       switch (escolha) 
        {case 1:
            printf("Comparação das cartas(requesito: População)\n");
             printf("Carta 1 -Santos:População: %u\n" , populacao1);
             printf("Carta 2 - Curitiba:População: %u\n" , populacao2);
        if (populacao1 > populacao2){
            printf("Resultado: Carta 1 (Santos VENCEU!\n)");
        }else{
            printf("Resultado: Carta 2 (Curitiba) VENCEU!\n");}
            break;
        case 2:
            printf("\nComparação das cartas (Requisito: Área)\n");
            printf("Carta 1 - Santos: Área: %.2f\n", area1);
            printf("Carta 2 - Curitiba: Área: %.2f\n", area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (Santos) VENCEU!\n");
            else
                printf("Resultado: Carta 2 (Curitiba) VENCEU!\n");
            break;

        case 3:
            printf("\nComparação das cartas (Requisito: PIB)\n");
            printf("Carta 1 - Santos: PIB: %.2f\n", pib1);
            printf("Carta 2 - Curitiba: PIB: %.2f\n", pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (Santos) VENCEU!\n");
            else
                printf("Resultado: Carta 2 (Curitiba) VENCEU!\n");
            break;

        case 4:
            printf("\nComparação das cartas (Requisito: Pontos turísticos)\n");
            printf("Carta 1 - Santos: Pontos turísticos: %d\n", pontos1);
            printf("Carta 2 - Curitiba: Pontos turísticos: %d\n", pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: Carta 1 (Santos) VENCEU!\n");
            else
                printf("Resultado: Carta 2 (Curitiba) VENCEU!\n");
            break;

        case 5:
            printf("\nComparação das cartas (Requisito: Densidade Populacional)\n");
            printf("Carta 1 - Santos: Densidade: %.2f\n", densidade1);
            printf("Carta 2 - Curitiba: Densidade: %.2f\n", densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 (Santos) VENCEU! (menor densidade)\n");
            else
                printf("Resultado: Carta 2 (Curitiba) VENCEU! (menor densidade)\n");
            break;

        case 6:
            printf("\nComparação das cartas (Requisito: PIB per capita)\n");
            printf("Carta 1 - Santos: PIB per capita: %.2f\n", pibpc1);
            printf("Carta 2 - Curitiba: PIB per capita: %.2f\n", pibpc2);
            if (pibpc1 > pibpc2)
                printf("Resultado: Carta 1 (Santos) VENCEU!\n");
            else
                printf("Resultado: Carta 2 (Curitiba) VENCEU!\n");
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}


    

   
    
    
       
