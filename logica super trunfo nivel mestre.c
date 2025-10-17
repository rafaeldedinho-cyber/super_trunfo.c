#include <stdio.h>
int main () {
       int escolha1 , escolha2 ;
       char estado1 = 'A'; // declarando as variaveis
       char codigo1[5] = "A01";
       char cidade1[10]= "santos";
       unsigned  populacao1 = 100000 ;
       float area1 = 200000;
       float pib1 = 300000;
       int pontos1 = 10;
       float densidade1 , valorc1 , valorc12 , valorc2 , valorc22 ; // densidade populacional
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
       
       
       printf("Escolha o primeiro requesito para comparar as cartas:\n");
       printf("1:População\n");
       printf("2:Área\n");
       printf("3:PIB\n");
       printf("4:Pontos turisticos\n");
       printf("5:Densidade populacional\n");
       printf("6:PIB per capta\n");
       printf("digite o numero correspondente ao requesito:");
       scanf("%d" , &escolha1);

       printf("\nEscolha o segundo requesito para comparar as cartas:\n");
       printf("1:População\n");
       printf("2:Área\n");
       printf("3:PIB\n");
       printf("4:Pontos turisticos\n");
       printf("5:Densidade populacional\n");
       printf("6:PIB per capta\n");
       printf("digite o numero correspondente ao requesito 2:");
       scanf("%d" , &escolha2);
        if (escolha2 == escolha1){
            printf("opção invalida! Requesito repetido.\n");
        return 0;
        } 
        printf("\n PRIMEIRA CARTA:\n");
       switch (escolha1) {
        case 1: valorc1 = populacao1; valorc2 = populacao2 ;
        printf("valor primeira carta: População (Santos): %u\nValor priemira carta:População(Curitiba):%u\n" , populacao1 , populacao2); break;
        case 2: valorc1 = area1 ; valorc2 = area2 ; 
         printf("valor primeira carta :Área(Santos): %.2f\nValor priemira carta:Área(Curitiba):%.2f\n" , area1 , area2 ); break;
        case 3: valorc1 = pib1 ; valorc2 = pib2 ;
         printf("valor primeira carta :PIB(Santos): %.2f\nValor primeira carta:PIB(Curitiba):%.2f\n" , pib1 , pib2); break;
        case 4: valorc1 = pontos1 ; valorc2 = pontos2 ; 
         printf("valor primeira carta :Pontos turísticos(Santos): %d\nValor primeira carta:Pontos turísticos(Curitiba):%d\n" , pontos1 , pontos2); break;
        case 5: valorc1 = densidade1 ; valorc2 = densidade2 ; 
         printf("valor primeira carta :Densidade populacional(Santos): %.2f\nValor primeira carta:Densidade populacional(Curitiba):%.2f\n" , densidade1 , densidade2); break;
        case 6: valorc1 = pibpc1 ; valorc2 = pibpc2 ;
         printf("valor primeira carta :PIB percapta(Santos): %.2f\nValor primeira carta:PIB percapta(Curitiba):%.2f\n" , pibpc1 , pibpc2); break;
        default : printf("Opção inválida!\n]"); return 0;
       }

        switch (escolha2) {
        case 1: valorc12 = populacao1; valorc22 = populacao2 ;
        printf("valor segunda carta:População (Santos): %u\n Valor segunda carta:População(Curitiba):%u\n" , populacao1 , populacao2); break;
        case 2: valorc12 = area1 ; valorc22 = area2 ; 
        printf("valor segunda carta:Área(Santos): %.2f\n Valor segunda carta:Área(Curitiba):%.2f\n" , area1 , area2 ); break;
        case 3: valorc12 = pib1 ; valorc22 = pib2 ;
        printf("valor segunda carta:PIB(Santos): %.2f\n Valor segunda carta:PIB(Curitiba):%.2f\n" , pib1 , pib2); break;
        case 4: valorc12 = pontos1 ; valorc22 = pontos2 ; 
        printf("valor segunda carta:Pontos turísticos(Santos): %d\n Valor segunda carta:Pontos turísticos(Curitiba):%d\n" , pontos1 , pontos2); break;
        case 5: valorc12 = densidade1 ; valorc22 = densidade2 ; 
        printf("valor segunda carta:Densidade populacional(Santos): %.2f\n Valor segunda carta:Densidade populacional(Curitiba):%.2f\n" , densidade1 , densidade2); break;
        case 6: valorc12 = pibpc1 ; valorc22 = pibpc2 ;
        printf("valor segunda carta:PIB percapta(Santos): %.2f\n Valor segunda carta:PIB percapta(Curitiba):%.2f\n" , pibpc1 , pibpc2); break;
        default : printf("Opção inválida!\n]"); return 0;
           }

        printf("\nComparando os requesitos escolhidos:\n");
        printf("\nRequesito 1\n");
        if (valorc1 > valorc2 ? 1 : 0) {
            printf("carta 1 (Santos)vence primeiro desafio!\n");
        } else if (valorc1 == valorc2) {
            printf("Empate");
        } else {
            printf("carta 2 (Curitiba) vence primeiro desafio!");
        }
        printf("\nrequesito 2\n");
        if (valorc12 > valorc22 ? 1 : 0){
            printf("Carta 1 (santos) vence");
        } else if (valorc12 == valorc22) {
            printf("Empate");
        } else {
            printf("Carta 2 (Curitiba) vence segundo desafio!\n");
        }
        
        float soma1 = valorc1 + valorc12;
       float soma2 = valorc2 + valorc22;
        
        
        printf("\n Soma dos atributos para comparacao final:\n");
        printf("Carta 1 (Santos): %.2f\n" ,soma1);
        printf("Carta 2 (curitiba): %.2f\n", soma2);

        if (soma1 > soma2 ? 1 : 0) {
            printf("Carta 1 (Santos) venceu!!\n");
         } else if (soma1 == soma2) {
            printf("Empate \n");
         }else{
            printf("Carta 2 (curitiba) venceu!\n");
         }
         
        

        
        
        
        
        
      

    return 0;
}


    

   
    
    
       
