#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    int Populacao_Carta01, Populacao_Carta02, Numeros_Turisticos01, Numeros_Turisticos02, Guia, Guia02;
    char Estado01[2], Estado02[2], CodigodaCarta01[10], CodigodaCarta02[10], Nome_da_cidade01[15], Nome_da_cidade02[15];
    float Area_km01, Area_km02, PIB01, PIB02, Densidade_Populacional01, Densidade_Populacional02, PIB_per_Capita01, PIB_per_Capita02, SuperPoder01, SuperPoder02, Atributo01, Atributo02;

    printf("____________________________________________________________\n\n");
    printf("            Desafio Super Trunfo - Países  \n");
    printf("____________________________________________________________\n");

    printf("\n");

    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" Cadastro das informações das cartas \n\n");

    // cadastrando os Dados da carta 01
    printf("   * Carta 01\n\n");

    printf("- Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", &Estado01);

    printf("- Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%09s", CodigodaCarta01);

    printf("- Digite o nome da cidade: ");
    scanf("%s", &Nome_da_cidade01);

    printf("- Digite o número de habitantes da Cidade: ");
    scanf("%d", &Populacao_Carta01);

    printf("- Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area_km01);

    printf("- Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB01);

    printf("- Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &Numeros_Turisticos01);

    // Densidade populacional e PIB per Capita da carta 01
    Densidade_Populacional01 = (float)Populacao_Carta01 / Area_km01;
    PIB_per_Capita01 = (PIB01 / (float)Populacao_Carta01) * 1000000000;

    // Superpoder da carta 01
    SuperPoder01 = Populacao_Carta01 + Area_km01 + PIB01 + Numeros_Turisticos01 + (1 / Densidade_Populacional01) + PIB_per_Capita01;

    printf("\n");

    // cadastrando os Dados da carta 02
    printf("   * Carta 02\n\n");

    printf("- Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", &Estado02);

    printf("- Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%09s", CodigodaCarta02);

    printf("- Digite o nome da cidade: ");
    scanf("%s", &Nome_da_cidade02);

    printf("- Digite o número de habitantes da Cidade: ");
    scanf("%d", &Populacao_Carta02);

    printf("- Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area_km02);

    printf("- Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB02);

    printf("- Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &Numeros_Turisticos02);

    // Densidade populacional e PIB per capita da carta 02
    Densidade_Populacional02 = (float)Populacao_Carta02 / Area_km02;
    PIB_per_Capita02 = (PIB02 / (float)Populacao_Carta02) * 1000000000;

    // Superpoder da carta 02
    SuperPoder02 = Populacao_Carta02 + Area_km02 + PIB02 + Numeros_Turisticos02 + (1 / Densidade_Populacional02) + PIB_per_Capita02;

    printf("____________________________________________________________\n\n");

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("------------------------------------\n");
    printf("            CARTA 01\n");
    printf("------------------------------------\n");

    printf("Estado: %s\n", Estado01);
    printf("Código: %s\n", CodigodaCarta01);
    printf("Nome da Cidade: %s\n", Nome_da_cidade01);
    printf("População: %d\n", Populacao_Carta01);
    printf("Área: %.2f km²\n", Area_km01);
    printf("PIB: %.2f bilhões de reais\n", PIB01);
    printf("Número de Pontos Turísticos: %d\n", Numeros_Turisticos01);

    // exibindo a densidade populacional e o PIB per capita da carta 01
    printf("Densidade Populacional: %.2f Hab/km² \n", Densidade_Populacional01);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita01);

    // Super Poder da carta 01
    printf("Super Poder: %.2f\n", SuperPoder01);

    printf("\n");

    printf("------------------------------------\n");
    printf("            CARTA 02\n");
    printf("------------------------------------\n");
    printf("Estado: %s\n", Estado02);
    printf("Código: %s\n", CodigodaCarta02);
    printf("Nome da Cidade: %s\n", Nome_da_cidade02);
    printf("População: %d\n", Populacao_Carta02);
    printf("Área: %.2f km²\n", Area_km02);
    printf("PIB: %.2f bilhões de reais\n", PIB02);
    printf("Número de Pontos Turísticos: %d\n", Numeros_Turisticos02);

    // exibindo a densidade populacional e o PIB per capita da carta 02
    printf("Densidade Populacional: %.2f Hab/km² \n", Densidade_Populacional02);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita02);

    // Super Poder da carta 02
    printf("Super Poder: %.2f\n", SuperPoder02);

    printf("\n");

    printf("____________________________________________________________\n\n");

    // Comparação de Cartas:
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("------------------------------------\n");
    printf("      Comparação das Cartas \n");
    printf("Selecione dois atributos distintos!\n");
    printf("------------------------------------\n");


    //inicio do jogo
    printf("*Escolha um número da lista para comparação do 1º Atributo: \n\n");
    printf(" 1. População\n");
    printf(" 2. Área km²\n");
    printf(" 3. PIB\n");
    printf(" 4. Número de Pontos Turisticos\n");
    printf(" 5. Densidade Populacional\n");
    printf(" 6. PIB per Capita\n");
    printf(" 7. Super Poder\n\n");
    scanf("%d", &Guia);

    printf("\n");

    // Verificação do atributo vencedor: a tela exibirá a carta 01, carta 02 ou indicará um empate.
    switch (Guia)
    {
    case 1:
        printf("População:\nCarta 01 - %s: %d\n", Nome_da_cidade01, Populacao_Carta01);
        printf("Carta 02 - %s: %d\n", Nome_da_cidade02, Populacao_Carta02);
        printf("\n");

        // A soma dos atributos
        Atributo01 = Atributo01 + Populacao_Carta01;
        Atributo02 = Atributo02 + Populacao_Carta02;

        // Carta que venceu (ou se houve empate).
        (Populacao_Carta01 > Populacao_Carta02) ? printf("Resultado: A Carta 01 tem a maior população. A cidade vencedora é: %s\n", Nome_da_cidade01) : (Populacao_Carta01 == Populacao_Carta02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                 : printf("Resultado: A Carta 02 tem a maior população. A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

    case 2:
        printf("Área (km²):\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, Area_km01);
        printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, Area_km02);
        printf("\n");

        // A soma dos atributos
        Atributo01 = Atributo01 + Area_km01;
        Atributo02 = Atributo02 + Area_km02;

        // Carta que venceu (ou se houve empate).
        (Area_km01 > Area_km02) ? printf("Resultado: A Carta 01 tem a maior Área (km²). A cidade vencedora é: %s\n", Nome_da_cidade01) : (Area_km01 == Area_km02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                  : printf("Resultado: A carta 02 tem a maior Área (km²). A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

    case 3:
        printf("PIB:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, PIB01);
        printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, PIB02);
        printf("\n");

        // A soma dos atributos
        Atributo01 = Atributo01 + PIB01;
        Atributo02 = Atributo02 + PIB02;

        // Carta que venceu (ou se houve empate)
        (PIB01 > PIB02) ? printf("Resultado: A carta 01 tem o maior PIB. A cidade vencedora é: %s\n", Nome_da_cidade01) : (PIB01 == PIB02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                           : printf("Resultado: A carta 02 tem o maior PIB. A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

    case 4:
        printf("Número de Pontos Turisticos:\nCarta 01 - %s: %d\n", Nome_da_cidade01, Numeros_Turisticos01);
        printf("Carta 02 - %s: %d\n", Nome_da_cidade02, Numeros_Turisticos02);
        printf("\n");


        // A soma dos atributos
        Atributo01 = Atributo01 + Numeros_Turisticos01;
        Atributo02 = Atributo02 + Numeros_Turisticos02;

        // Carta que venceu (ou se houve empate)
        (Numeros_Turisticos01 > Numeros_Turisticos02) ? printf("Resultado: A carta 01 tem o maior números de pontos turisticos. A cidade vencedora é: %s\n", Nome_da_cidade01) : (Numeros_Turisticos01 == Numeros_Turisticos02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                                                : printf("Resultado: A carta 02 tem o maior números de pontos turisticos. A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

    case 5:
        printf("Densidade Populacional:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, Densidade_Populacional01);
        printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, Densidade_Populacional02);
        printf("\n");

        // A soma dos atributos
        Atributo01 = Atributo01 + Densidade_Populacional01;
        Atributo02 = Atributo02 + Densidade_Populacional02;

        // Carta que venceu (ou se houve empate)
        (Densidade_Populacional01 < Densidade_Populacional02) ? printf("Resultado: A carta 01 tem a menor densidade populacional. A cidade vencedora é: %s\n", Nome_da_cidade01) : (Densidade_Populacional01 == Densidade_Populacional02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                                                          : printf("Resultado: A carta 02 tem a menor densidade populacional. A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

    case 6:
        printf("PIB_per_capita:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, PIB_per_Capita01);
        printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, PIB_per_Capita02);
        printf("\n");


        // A soma dos atributos
        Atributo01 = Atributo01 + PIB_per_Capita01;
        Atributo02 = Atributo02 + PIB_per_Capita02;

        // Carta que venceu (ou se houve empate)
        (PIB_per_Capita01 > PIB_per_Capita02) ? printf("Resultado: A carta 01 tem o maior PIB per capita. A cidade vencedora é: %s\n", Nome_da_cidade01) : (PIB_per_Capita01 == PIB_per_Capita02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                  : printf("Resultado: A carta 02 tem o maior PIB per capita. A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

    case 7:
        printf("Super Poder:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, SuperPoder01);
        printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, SuperPoder02);
        printf("\n");



        // A soma dos atributos
        Atributo01 = Atributo01 + SuperPoder01;
        Atributo02 = Atributo02 + SuperPoder02;

        // Carta que venceu (ou se houve empate)
        (SuperPoder01 > SuperPoder02) ? printf("Resultado: A carta 01 tem o maior super poder. A cidade vencedora é: %s\n", Nome_da_cidade01) : (SuperPoder01 == SuperPoder02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                               : printf("Resultado: A carta 02 tem o maior super poder. A cidade vencedora é: %s\n", Nome_da_cidade02);
        break;

        // se caso houver uma opção invalida, será informado o "item não localizado".
    default:
        printf("Item não localizado");
        break;
    }
    printf("\n");

    printf("*Escolha um número da lista para comparação do 2º Atributo: \n\n");
    // menu para escolha de qual atributo da carta 02 será feita a comparação
    printf(" 1. População\n");
    printf(" 2. Área km²\n");
    printf(" 3. PIB\n");
    printf(" 4. Número de Pontos Turisticos\n");
    printf(" 5. Densidade Populacional\n");
    printf(" 6. PIB per Capita\n");
    printf(" 7. Super Poder\n\n");
    scanf("%d", &Guia02);
    printf("\n");

    if (Guia == Guia02)
    {
        printf("Você escolheu o mesmo atributo, escolha Atributos Diferentes!");
    }
    else
    {
        switch (Guia02)
        {
        case 1:
            printf("População:\nCarta 01 - %s: %d\n", Nome_da_cidade01, Populacao_Carta01);
            printf("Carta 02 - %s: %d\n", Nome_da_cidade02, Populacao_Carta02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + Populacao_Carta01;
            Atributo02 = Atributo02 + Populacao_Carta02;

            // Carta que venceu (ou se houve empate).
            (Populacao_Carta01 > Populacao_Carta02) ? printf("Resultado: A Carta 01 tem a maior população. A cidade vencedora é: %s\n", Nome_da_cidade01) : (Populacao_Carta01 == Populacao_Carta02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                     : printf("Resultado: A Carta 02 tem a maior população. A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

        case 2:
            printf("Área (km²):\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, Area_km01);
            printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, Area_km02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + Area_km01;
            Atributo02 = Atributo02 + Area_km02;

            // Carta que venceu (ou se houve empate).
            (Area_km01 > Area_km02) ? printf("Resultado: A Carta 01 tem a maior Área (km²). A cidade vencedora é: %s\n", Nome_da_cidade01) : (Area_km01 == Area_km02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                      : printf("Resultado: A carta 02 tem a maior Área (km²). A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

        case 3:
            printf("PIB:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, PIB01);
            printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, PIB02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + PIB01;
            Atributo02 = Atributo02 + PIB02;

            // Carta que venceu (ou se houve empate)
            (PIB01 > PIB02) ? printf("Resultado: A carta 01 tem o maior PIB. A cidade vencedora é: %s\n", Nome_da_cidade01) : (PIB01 == PIB02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                               : printf("Resultado: A carta 02 tem o maior PIB. A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

        case 4:
            printf("Número de Pontos Turisticos:\nCarta 01 - %s: %d\n", Nome_da_cidade01, Numeros_Turisticos01);
            printf("Carta 02 - %s: %d\n", Nome_da_cidade02, Numeros_Turisticos02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + Numeros_Turisticos01;
            Atributo02 = Atributo02 + Numeros_Turisticos02;

            // Carta que venceu (ou se houve empate)
            (Numeros_Turisticos01 > Numeros_Turisticos02) ? printf("Resultado: A carta 01 tem o maior números de pontos turisticos. A cidade vencedora é: %s\n", Nome_da_cidade01) : (Numeros_Turisticos01 == Numeros_Turisticos02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                                                    : printf("Resultado: A carta 02 tem o maior números de pontos turisticos. A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

        case 5:
            printf("Densidade Populacional:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, Densidade_Populacional01);
            printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, Densidade_Populacional02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + Densidade_Populacional01;
            Atributo02 = Atributo02 + Densidade_Populacional02;

            // Carta que venceu (ou se houve empate)
            (Densidade_Populacional01 < Densidade_Populacional02) ? printf("Resultado: A carta 01 tem a menor densidade populacional. A cidade vencedora é: %s\n", Nome_da_cidade01) : (Densidade_Populacional01 == Densidade_Populacional02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                                                              : printf("Resultado: A carta 02 tem a menor densidade populacional. A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

        case 6:
            printf("PIB_per_capita:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, PIB_per_Capita01);
            printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, PIB_per_Capita02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + PIB_per_Capita01;
            Atributo02 = Atributo02 + PIB_per_Capita02;

            // Carta que venceu (ou se houve empate)
            (PIB_per_Capita01 > PIB_per_Capita02) ? printf("Resultado: A carta 01 tem o maior PIB per capita. A cidade vencedora é: %s\n", Nome_da_cidade01) : (PIB_per_Capita01 == PIB_per_Capita02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                                      : printf("Resultado: A carta 02 tem o maior PIB per capita. A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

        case 7:
            printf("Super Poder:\nCarta 01 - %s: %.2f\n", Nome_da_cidade01, SuperPoder01);
            printf("Carta 02 - %s: %.2f\n", Nome_da_cidade02, SuperPoder02);
            printf("\n");


            // A soma dos atributos
            Atributo01 = Atributo01 + SuperPoder01;
            Atributo02 = Atributo02 + SuperPoder02;

            // Carta que venceu (ou se houve empate)
            (SuperPoder01 > SuperPoder02) ? printf("Resultado: A carta 01 tem o maior super poder. A cidade vencedora é: %s\n", Nome_da_cidade01) : (SuperPoder01 == SuperPoder02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                                                                   : printf("Resultado: A carta 02 tem o maior super poder. A cidade vencedora é: %s\n", Nome_da_cidade02);
            break;

            // se caso houver uma opção invalida, será informado o "item não localizado".
        default:
            printf("Item não localizado");
            break;
        }

        printf("\n");

        printf("------------------------------------\n");
        printf("      ---> VENCEDOR! <--- \n");
        printf("------------------------------------\n");

        printf("\n");

        // Exibição do vencedor
        printf("Atributo 1 = %.2f \nAtributo 2 = %.2f \n", Atributo01, Atributo02);

        printf("\n");

        (Atributo01 > Atributo02) ? printf("Resultado: Carta 1 - A cidade vencedora é: %s\n", Nome_da_cidade01) : (Atributo01 == Atributo02) ? printf("Resultado: Houve um Empate!")
                                                                                                                                             : printf("Resultado: Carta 2 - A cidade vencedora é: %s\n", Nome_da_cidade02);

        printf("\n");

        printf("____________________________________________________________\n\n");

        printf("\n");

        return 0;
    }
}