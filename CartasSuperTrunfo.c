#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado [30];
    char codigo [30];
    char nomedacidade [30];
    float areaemkm, populacao, PIB;
    float densidadepopulacional, PIBPerCapita;
    float superpoder;
    int numerodepontosturisticos;
    


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Coloque o nome do estado da sua carta: ");
    scanf("%s", estado);
    printf("O estado da sua carta é %s\n", estado);

    printf("Coloque o código da área da sua carta: ");
    scanf("%s", codigo);
    printf("O código da sua carta é %s\n", codigo);

    printf("Coloque o nome da cidade que tem na sua carta: ");
    scanf("%s", nomedacidade);
    printf("O nome da sua cidade é %s\n", nomedacidade);

    printf("Coloque a população que que tem na sua carta: ");
    scanf("%f", &populacao);
    printf("A população da sua carta é %.0f Habitantes\n", populacao);

    printf("Coloque a área em Km² que tem na sua carta: ");
    scanf("%f", &areaemkm);
    printf("A área em Km² da sua carta é %.0f Km²\n", areaemkm);

    printf("Coloque o valor do PIB que tem na sua carta: ");
    scanf("%f", &PIB);
    printf("O valor do PIB que tem na sua carta é de %.0f de reais\n", PIB);

    printf("Coloque a quantidade de pontos turísticos que tem na sua carta: ");
    scanf("%i", &numerodepontosturisticos);
    printf("A quantidade de pontos turísticos que tem na sua carta é %i Pontos Turísticos\n", numerodepontosturisticos);

    densidadepopulacional = areaemkm / populacao;
    PIBPerCapita = PIB / populacao;


    printf("A Densidade Populacional que tem na sua carta é: %.0f habitantes por km²\n", densidadepopulacional);
    printf("O PIB Per Capita que tem na sua carta é de: %.2f de reais\n", PIBPerCapita);



    return 0;

}