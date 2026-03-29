#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char estado, estado2;
    char codigo[5], codigo2[5]; 
    char cidade[80], cidade2[80];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;
    float densidade, densidade2;
    float pib_per_capita, pib_per_capita2;
    unsigned long int super_carta1, super_carta2;
    int escolha_ataque1, escolha_ataque2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo (01-04): ");
    scanf("%s", codigo);

    while (getchar() != '\n');
    
    printf("Digite o nome da cidade (sem acentos): ");
    scanf("%[^\n]", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a área (use virgula): ");
    scanf("%f", &area);
    
    printf("Digite o PIB em bilhões de reais (use virgula): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos);

    while (getchar() != '\n'); 

    printf("\nCADASTRADO! Próxima carta...\n\n");

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo (01-04): ");
    scanf("%s", codigo2);

    while (getchar() != '\n');

    printf("Digite o nome da cidade (sem acentos): ");
    scanf("%[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a área (use virgula): ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais (use virgula): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
     
    densidade = (float)populacao / area;
    pib_per_capita = (float) (pib*1000000000) / populacao;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (float) (pib2*1000000000) / populacao2;
    super_carta1 = populacao + area + pib + pontos + pib_per_capita - densidade;
    super_carta2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 - densidade2;



    printf("\n--- CARTAS CADASTRADAS ---\n");
    printf("Carta 1:\n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Area: %.2f KM²\n PIB: %.2f bilhões de reais\n Números de pontos turisticos: %d\n Densidade populacional: %.2f hab/KM²\n PIB per capita: %.2f reais\n", 
           estado, estado, codigo, cidade, populacao, area, pib, pontos, densidade, pib_per_capita);
    printf("Carta 2:\n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Area: %.2f KM²\n PIB: %.2f bilhões de reais\n Números de pontos turisticos: %d\n Densidade populacional: %.2f hab/KM²\n PIB per capita: %.2f reais\n", 
           estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pib_per_capita2);

    printf("Escolha o tipo de ataque:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha_ataque1);
    scanf("%d", &escolha_ataque2);

       switch (escolha_ataque1)
       {
       case 1:
             escolha_ataque1 = (populacao > populacao2) ? 1 : 0;
                     
              break;
       case 2:
              escolha_ataque1 = (area > area2) ? 1 : 0;   
              break;
       case 3:
              escolha_ataque1 = (pib > pib2) ? 1 : 0;
              break;
       case 4:
              escolha_ataque1 = (pontos > pontos2) ? 1 : 0;
              break;

       case 5:
              escolha_ataque1 = (densidade < densidade2) ? 1 : 0;
              break;
       case 6:
              escolha_ataque1 = (pib_per_capita > pib_per_capita2) ? 1 : 0;
              break;

       case 7:
              escolha_ataque1 = (super_carta1 > super_carta2) ? 1 : 0;
              break;

       default:
              printf("Escolha de ataque inválida!\n");
              break;
       }
       switch (escolha_ataque2)
       {
       case 1:
              escolha_ataque2 = (populacao2 < populacao) ? 1 : 0;                      
              break;
       case 2:
              escolha_ataque2 = (area2 < area) ? 1 : 0;                     
              break;
       case 3:
              escolha_ataque2 = (pib2 < pib) ? 1 : 0;                     
              break;
       case 4:
              escolha_ataque2 = (pontos2 < pontos) ? 1 : 0;
              break;
       case 5:
              escolha_ataque2 = (densidade2 > densidade) ? 1 : 0;
              break;
       case 6:
              escolha_ataque2 = (pib_per_capita2 < pib_per_capita) ? 1 : 0;
              break;
       case 7:
              escolha_ataque2 = (super_carta2 < super_carta1) ? 1 : 0;
              break;
       default:
              printf("Escolha de ataque inválida!\n");
              break;
       }

       if (escolha_ataque1 && escolha_ataque2)
       {
             printf("Você venceu a partida!\n");
       }else if (escolha_ataque1 && !escolha_ataque2)
       {
              printf("Empate na partida!\n");
       } else {
              printf("Você perdeu a partida!\n");
       }      
       
    return 0;
}
