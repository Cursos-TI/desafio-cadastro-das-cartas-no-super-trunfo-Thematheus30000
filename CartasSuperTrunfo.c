#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    //Aqui estão as variáveis utilizadas associadas a seus respectivos tipos de dados
    //Inicializei cada uma com dados para não conter lixo
    int popcar1 = 2000000, popcar2 = 2000000, numponturcar1 = 50, numponturcar2 = 50; 
    float arecar1 = 10000000, arecar2 = 1000000, pibcar1 = 3000000, pibcar2 = 3000000;
    char estcar1 = 'A', estcar2 = 'B', codcar1[10] = "A01", codcar2[10] = "B02", nomcidcar1[20] = "Friburgo", nomcidcar2[20] = "Teresópolis";
    
    //Título e saudação inicial
    printf("Bem-vindo ao Super Trunfo - Países! \n");
    printf("Vamos cadastrar suas cartas! \n");

    //separar etapas e melhorar o visual
    printf(" ****************** \n");

    //Título e início do cadastro da primeira carta
    printf(" - Primeira carta - \n");

    //sessão de printf e scanf para preenchimento da primeira carta pelo usuário
    printf("Digite a letra correspondente ao Estado (De A a H): \n");
    scanf("%c", &estcar1);

    printf("Digite o código da carta (Letra do Estado + Número da Cidade): \n");
    scanf("%s", &codcar1);

    printf("Digite o nome da cidade (Caso seja nome composto, não usar espaços): \n");
    scanf("%s", &nomcidcar1);

    printf("Digite a população (Sem pontos ou vírgulas): \n");
    scanf("%d", &popcar1);

    printf("Digite a área Km² (Utilizando pontos): \n");
    scanf("%f", &arecar1);

    printf("Digite o PIB (Utilizando pontos): \n");
    scanf("%f", &pibcar1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numponturcar1);
    
    //separar etapas e melhorar o visual
    printf(" ****************** \n");

    //Mensagem de Incentivo positivo
    printf("Muito bem! Agora iremos cadastrar a segunda carta! \n");
    printf(" ****************** \n");

    //Título e início do cadastro da segunda carta
    printf("- Segunda carta - \n");

    //sessão de printf e scanf para preenchimento da segunda carta pelo usuário
    printf("Digite a letra correspondente ao Estado (De A a H): \n");
    scanf(" %c", &estcar2);

    printf("Digite o código da carta (Letra do Estado + Número da Cidade): \n");
    scanf("%s", &codcar2);

    printf("Digite o nome da cidade (Caso seja nome composto, não usar espaços): \n");
    scanf("%s", &nomcidcar2);

    printf("Digite a população (Sem pontos ou vírgulas): \n");
    scanf("%d", &popcar2);

    printf("Digite a área Km² (Utilizando pontos): \n");
    scanf("%f", &arecar2);

    printf("Digite o PIB (Utilizando pontos): \n");
    scanf("%f", &pibcar2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numponturcar2);

    //separar etapas e melhorar o visual
    printf(" ****************** \n");

    //Aviso de término do cadastro e aviso de que virá um resumo
    printf("Muito bem! Terminamos o processo de cadastro! \n");
    printf("Veja a seguir um resumo dos cadastros de suas cartas: \n");

    //separar etapas e melhorar o visual
    printf(" ****************** \n");

    //Resumo descritivo da primeira carta
    printf("Resumo de Cadastro da Carta 1: \n");
    printf("Estado: %c \n", estcar1);
    printf("Código: %s \n", codcar1);
    printf("Nome da cidade: %s \n", nomcidcar1);
    printf("População: %d \n", popcar1);
    printf("Área (Km²): %f \n", arecar1);
    printf("PIB: %f \n", pibcar1);
    printf("Número de pontos turísticos: %d \n", numponturcar1);

    //separar etapas e melhorar o visual
    printf(" ****************** \n");

    //Resumo descritivo da segunda carta
    printf("Resumo de Cadastro da Carta 2: \n");
    printf("Estado: %c \n", estcar2);
    printf("Código: %s \n", codcar2);
    printf("Nome da cidade: %s \n", nomcidcar2);
    printf("População: %d \n", popcar2);
    printf("Área (Km²): %f \n", arecar2);
    printf("PIB: %f \n", pibcar2);
    printf("Número de pontos turísticos: %d \n", numponturcar2);

    //separar etapas e melhorar o visual
    printf(" ****************** \n");

    //Mensagem de despedida
    printf("Terminamos por aqui, até breve! \n");

    return 0;

}
