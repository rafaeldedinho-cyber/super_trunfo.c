#include <stdio.h>
int main () {
    char estado1 = 'A'; // declarando as variaveis
    char codigo1[5] = "A01";
    char cidade1[10]= "santos";
    int populacao1 = 100000 ;
    float area1 = 200000;
    float pib1 = 300000;
    int pontos1 = 10;
    float densidade1; // densidade populacional
    float pibpc1; //pib per capta
    densidade1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    printf("CARTA NUMERO 1:\n"); // imprimindo as variaveis
    printf("Estado:%c\n" , estado1) ;
    printf("Codigo: %s\n" , codigo1);
    printf("Cidade: %s\n" , cidade1);
    printf("População: %d\n" , populacao1);
    printf("Área: %.2f Km² \n" , area1);
    printf("PIB:%.2f \n" ,  pib1); // %.2f para imprimir o float com 2 casas decimais
    printf("Pontos turísticos:%d\n" , pontos1); 
    printf("Densidade populacional: %.2f hab/Km² \n" , densidade1);
    printf("PIB per capta: %.2f reais \n" , pibpc1);


    char estado2 = 'B'; // declarando as variaveis
    char codigo2[5] = "B02";
    char cidade2[10]= "curitiba";
    int populacao2 = 200000 ;
    float area2 = 300000;
    float pib2 = 400000;
    int pontos2 = 20;
    float densidade2; // densidade populacional
    float pibpc2; //pib per capta
    densidade2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    
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



    return 0; // finalizando o programa


}


