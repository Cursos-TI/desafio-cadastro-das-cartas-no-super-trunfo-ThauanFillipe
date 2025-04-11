#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

float calcularDensidadePopulacional(Carta c) {
    return c.populacao / c.area;
}

float calcularPIBPerCapita(Carta c) {
    return c.pib / c.populacao;
}

float calcularSuperPoder(Carta c) {
    return c.populacao + c.area + c.pib + c.pontos_turisticos + calcularPIBPerCapita(c) + (1.0 / calcularDensidadePopulacional(c));
}

void compararCartas(Carta c1, Carta c2) {
    printf("Comparação dos atributos:\n");

    printf("Densidade Populacional: %d\n", calcularDensidadePopulacional(c1) < calcularDensidadePopulacional(c2));
    printf("PIB per Capita: %d\n", calcularPIBPerCapita(c1) > calcularPIBPerCapita(c2));
    printf("Super Poder: %d\n", calcularSuperPoder(c1) > calcularSuperPoder(c2));
}

int main() {
    Carta carta1, carta2;

    printf("Insira os dados da Carta 1:\n");
    printf("População: "); scanf("%lu", &carta1.populacao);
    printf("Área: "); scanf("%f", &carta1.area);
    printf("PIB: "); scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: "); scanf("%d", &carta1.pontos_turisticos);

    printf("\nInsira os dados da Carta 2:\n");
    printf("População: "); scanf("%lu", &carta2.populacao);
    printf("Área: "); scanf("%f", &carta2.area);
    printf("PIB: "); scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: "); scanf("%d", &carta2.pontos_turisticos);

    compararCartas(carta1, carta2);

    return 0;
}