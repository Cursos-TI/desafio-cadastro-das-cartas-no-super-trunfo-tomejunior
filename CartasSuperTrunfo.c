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

     int main(){
      
        char estado[20];
        char cidade[20];
        char codigo[20];
        int populacao;
        float area;
        float pib;
        int turisticos;

         printf("Estado:\n");
         scanf("%s", &estado );
        
         printf("Cidade:\n");
         scanf("%s",&cidade);

         printf("Código:\n");
         scanf("%s", &codigo);

         printf("População:\n");
         scanf("%d", &populacao);
    
         printf("Área:\n");
         scanf("%f", &area);

         printf("Pib:\n");
         scanf("%f", &pib);

         printf("Pontos Turisticos:\n");
         scanf("%d", &turisticos);


         printf("Estado:%s\n", estado);

         printf("Cidade:%s\n", cidade);

         printf("Código:%s\n", codigo);

         printf("População:%d\n", populacao);
         
         printf("Área:%f\n", area);
         
         printf("Pib:%f\n", pib);

         printf("Pontos Turisticos:%d\n", turisticos);
        
return 0;

     }
