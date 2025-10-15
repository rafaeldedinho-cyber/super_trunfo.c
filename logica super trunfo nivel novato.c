#include <stdio.h>
int main () {
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
    super2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpc2 ;
    
    printf("comparação das cartas(requesito: Área)\n");
    printf("carta 1 - Santos:Área:200.000 km²\n");
    printf("carta 2 - Curitiba:Área:300.000 Km²\n");

    if(area1 > area2){
        printf("Resultado: carta 1 (Santos) VENCEU!\n");
    }else {
        printf("Resultado:carta 2 (curitiba) VENCEU!\n");
    }
        


    

    
    





    return 0; // finalizando o programa


}


