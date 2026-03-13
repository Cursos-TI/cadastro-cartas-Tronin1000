#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char estado, estado2;
    char codigo[5], codigo2[5]; 
    char cidade[80], cidade2[80];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;

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
    
    printf("Digite o PIB (use virgula): ");
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

    printf("Digite o PIB (use virgula): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n--- CARTAS CADASTRADAS ---\n");
    printf("Carta 1:\n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Area: %.2f KM²\n PIB: %.2f bilhões de reais\n Números de pontos turisticos: %d\n", 
           estado, estado, codigo, cidade, populacao, area, pib, pontos);
    printf("Carta 2:\n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Area: %.2f KM²\n PIB: %.2f bilhões de reais\n Números de pontos turisticos: %d\n", 
           estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

    return 0;
}