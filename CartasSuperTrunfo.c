#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//Teste Implementando Funções, isto será muito útil quando tivermos que cadastrar muitas cartas (ideia proveniente do tópico Conceitos de solução estruturada)

//função para calcular densidade populacional, (apenas divide o primeiro valor informado pelo segundo)
float densidadepop(float a, float b) {
    return a/b;
}

//função para calcular o PIB per capta, primeiramente converte o primeiro valor em bilhões, então divide pelo segundo
float PIBpercap(float a, float b){
    a *= 1e9; //converte para Bilhões 
    return a/b;
}

//função para calcular o Super Poder de uma carta (neste caso "e" deve ser subtraido pois representa a densidade populacional e quanto menor a densidade, maior o super poder)
double superpoder(float a, float b, float c, float d, float e, float f) {
    return a+b+c+d-e+f;
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[15], estado2[15], codigo1[3], codigo2[3], cidade1[15], cidade2[15];
    int pontosturisticos1, pontosturisticos2;
    unsigned long int populacao1, populacao2; 
    float area1, area2, PIB1, PIB2, densidadepop1, densidadepop2, PIBperc1, PIBperc2, superpoder1, superpoder2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Bem Vindo ao SUPERTRUNFO! \n");
    printf("Vamos iniciar o cadastro da primeira carta \n");
        printf("Digite o estado: \n");
        scanf("%s", estado1);

        printf("Digite o código: \n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade (sem espaços no nome): \n");
        scanf("%s", cidade1);

        printf("Informe qual a população da cidade: \n");
        scanf("%lu", &populacao1);

        printf("Informe a área da cidade (km²): \n");
        scanf("%f", &area1);

        printf("Informe qual 0 PIB da cidade (bilhões de reais): \n");
        scanf("%f", &PIB1);

        printf("Informe quantos pontos turísticos a cidade possui: \n");
        scanf("%d", &pontosturisticos1);

        // chama a função densidadepop e informa os valores para serem calculados, e então inserir o resultado na variável densidadepop1
        densidadepop1 = densidadepop(populacao1,area1); 

        //chama a função PIBpercap e informa os valores para serem calculados, e então inserir o resultado na variável PIBperc1
        PIBperc1 = PIBpercap(PIB1,populacao1);

        //chama a função superpoder e informa os valores para serem calculados( colocando a densidade populacional no local correto), e então inserir o resultado na variável superpoder1
        superpoder1 = superpoder(populacao1,area1,PIB1,pontosturisticos1,densidadepop1,PIBperc1);

        printf("\n");

// aqui termina o cadastro das informações da primeira carta

    printf("Vamos iniciar o cadastro da segunda carta \n");
        printf("Digite o estado: \n");
        scanf("%s", estado2);

        printf("Digite o código: \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade (sem espaços no nome): \n");
        scanf("%s", cidade2);

        printf("Informe qual a população da cidade: \n");
        scanf("%lu", &populacao2);

        printf("Informe a área da cidade (km²): \n");
        scanf("%f", &area2);

        printf("Informe qual 0 PIB da cidade (bilhões de reais): \n");
        scanf("%f", &PIB2);

        printf("Informe quantos pontos turísticos a cidade possui: \n");
        scanf("%d", &pontosturisticos2);

        //chama a função densidadepop e informa os valores para serem calculados, e então inserir o resultado na variável densidadepop2
        densidadepop2 = densidadepop(populacao2,area2); 
        
        //chama a função PIBpercap e informa os valores para serem calculados, e então inserir o resultado na variável PIBperc2
        PIBperc2 = PIBpercap(PIB2,populacao2);

        //chama a função superpoder e informa os valores para serem calculados( colocando a densidade populacional no local correto), e então inserir o resultado na variável superpoder2
        superpoder2 = superpoder(populacao2,area2,PIB2,pontosturisticos2,densidadepop2,PIBperc2);


        printf("\n");
// aqui termina o cadastro da segunda carta
  
// Comparando as cartas
printf("Comparação de Cartas:\n");
// População
if (populacao1 > populacao2)
    printf("População: Carta 1 venceu.\n");
else
    printf("População: Carta 2 venceu.\n");

//Area
if (area1 > area2)
    printf("Área: Carta 1 venceu.\n");
else
    printf("Área: Carta 2 venceu.\n");

//PIB
if (PIB1 > PIB2)
    printf("PIB: Carta 1 venceu.\n");
else
    printf("PIB: Carta 2 venceu.\n");

//Pontos Turísticos
if (pontosturisticos1 > pontosturisticos2)
    printf("Pontos Turísticos: Carta 1 venceu.\n");
else
    printf("Pontos Turísticos: Carta 2 venceu.\n");

//Densidade Populacional
if (densidadepop1 < densidadepop2)
    printf("Densidade Populacional: Carta 1 venceu.\n");
else
    printf("Densidade Populacional: Carta 2 venceu.\n");

//PIB per capta
if (PIBperc1 > PIBperc2)
    printf("PIB per capta: Carta 1 venceu.\n");
else
    printf("PIB per capta: Carta 2 venceu.\n");

//Super Poder
if (superpoder1 > superpoder2)
    printf("Super Poder: Carta 1 venceu.\n");
else
    printf("Super Poder: Carta 2 venceu.\n");

   return 0;
}
 /*   // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
printf("Cartas cadastradas com sucesso! \n");

// Informações da primeira carta
printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu habitantes \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: R$ %.2f bilhões de reais \n", PIB1);
    printf("Pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepop1);
    printf("PIB per Capta: %.2f reais\n", PIBperc1);
    printf("Super Poder: %.2f \n", superpoder1);
    printf("\n");

// Informações da segunda carta   
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu habitantes \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capta: %.2f reais\n", PIBperc2);
    printf("Super Poder: %.2f \n", superpoder2);
    return 0;
}
*/