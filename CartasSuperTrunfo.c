#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char cidade[50];
    char estado[50];
    char pais[50];
    int populacao;
    int pturistico;
    int area;
    float pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome de um País: \n");
    scanf("%s", pais);

    printf("Digite o nome de um Estado, desse País: \n");
    scanf("%s", estado);

    printf("Digite o nome de uma Cidade, desse Estado: \n");
    scanf("%s", cidade);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade: \n");
    scanf("%d", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos a cidade tem: \n");
    scanf("%d", &pturistico);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("No País %s, no estado de %s, na cidade %s, a população da cidade é de %d, em uma cidade de %dkm², com um PIB total de R$%.2f e incriveis %d pontos turisticos! \n", 
    pais, estado, cidade, populacao, area, pib, pturistico);

    return 0;
}
