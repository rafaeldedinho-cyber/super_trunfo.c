#include <stdio.h>
int main () {
    char estado1 = 'A'; // declarando as variaveis
    char codigo1[5] = "A01";
    char cidade1[10]= "santos";
    unsigned long int populacao1 = 100000 ;
    float area1 = 200000;
    float pib1 = 300000;
    int pontos1 = 10;
    float densidade1; // densidade populacional
    float pibpc1; //pib per capta
    float super1;
    densidade1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    super1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpc1;
    

    printf("CARTA NUMERO 1:\n"); // imprimindo as variaveis
    printf("Estado:%c\n" , estado1) ;
    printf("Codigo: %s\n" , codigo1);
    printf("Cidade: %s\n" , cidade1);
    printf("População: %lu\n" , populacao1);
    printf("Área: %.2f Km² \n" , area1);
    printf("PIB:%.2f \n" ,  pib1); // %.2f para imprimir o float com 2 casas decimais
    printf("Pontos turísticos:%d\n" , pontos1); 
    printf("Densidade populacional: %.2f hab/Km² \n" , densidade1);
    printf("PIB per capta: %.2f reais \n" , pibpc1);
    printf("Super Poder:%.2f \n" , super1); // soma de todos valores numericos

    char estado2 = 'B'; // declarando as variaveis
    char codigo2[5] = "B02";
    char cidade2[10]= "curitiba";
    unsigned long int populacao2 = 200000 ;
    float area2 = 300000;
    float pib2 = 400000;
    int pontos2 = 20;
    float densidade2; // densidade populacional
    float pibpc2; //pib per capta
    float super2;
    densidade2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpc2 ;
    
    printf("\n"); //pulando uma linha
    printf("CARTA NUMERO 2:\n"); // imprimindo as variaveis
    printf("Estado:%c\n" , estado2) ;
    printf("Codigo: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %.2f Km² \n" , area2);
    printf("PIB:%.2f \n" ,  pib2); // %.2f para imprimir o float com 2 casas decimais
    printf("Pontos turísticos:%d\n" , pontos2); 
    printf("Densidade populacional: %.2f hab/Km² \n" , densidade2);
    printf("PIB per capta: %.2f reais \n" , pibpc2);
    printf("Super Poder: %.2f\n" , super2); // somas de todos valores numericos

    printf("População carta 1 maior que população carta 2: %d\n" , populacao1 > populacao2);// comparando as cartas
    printf("Área carta 1 maior que área carta 2: %d\n" ,area1 > area2);
    printf("PIB carta 1 maior que PIB carta 2: %d\n", pib1 > pib2);
    printf("Pontos turísticos carta 1 maior que pontos turistícos carta 2: %d\n" , pontos1 > pontos2);
    printf("Densidade populacional carna 1 maior que densidade populacional carta2: %d\n" , densidade1 > densidade2);
    printf("PIB per capta carta 1 maior que PIB per capta carta 2: %d\n" , pibpc1 > pibpc2);
    printf("Super poder carta 1 maior que super poder carta 2: %d\n" , super1 > super2);

    printf("\n");// exibindo o resultado comparativo
    printf("comparatividade entre as cartas:\n");
    printf("Populacao: carta 2 venceu (0)\n");
    printf("area:carta 2 venceu (0)\n");
    printf("PIB:carta 2 venceu (0)\n");
    printf("Pontos turísticos:carta 2 venceu (0)\n");
    printf("Densidade populacional:carta 1 venceu (0)\n");// o menor valor vence
    printf("PIB per capta:carta 2 venceu (1)\n");
    printf("Super poder:carta 2 venceu (0)\n");
    





    return 0; // finalizando o programa


}


