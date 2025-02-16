#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {


 char estado[20];
 char codigo[10];
 char cidade[20];
 int populacao;
 float area;
 float pib;
 int turisticos;

   printf("**Desafio Super Trunfo**\n");

   printf("Estado:\n Código:\n Cidade:\n População:\n Área:\n Pib:\n Pontos Turisticos:\n", estado, codigo, cidade, populacao, area, pib ,turisticos);
   
   scanf(" %c\n ,%c\n ,%c\n ,%d\n ,%f\n ,%f\n ,%d\n", &estado, &codigo, &cidade, &populacao, &area, &pib, &turisticos ); 

    

    return 0;
}
