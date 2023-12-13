#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int autenticarAcesso() {
//Sistema de autenticação/
setlocale(LC_ALL, "Portuguese-BR");
    while(1) {
        char login[100];
        char senha[100];
        printf("=======================================\n");
        printf("    ___  _   ___  ___ \n");
        printf("   |  __||   | |   _   ||  __|\n");
        printf("   | |__ |   | |  | |  || |__ \n");
        printf("   |__  ||   | |  | |  ||__  |\n");
        printf("    __| ||   | |  ||  | ___| |\n");
        printf("   |__||_| |__||___|\n");
        printf("=======================================\n\n");
        printf("\t\tTela de autenticação\n\n");
        printf("Login: ");
        scanf("%s", login);
        printf("Senha: ");
        scanf("%s", senha);
        if (strcmp(login, "admin") == 0 && strcmp(senha, "admin") == 0) {
            system("cls");
            break;
        } else {
            printf("Login ou senha incorretos! Tente novamente!\n");
        }
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    autenticarAcesso();

    //limpar a commmand-line/
    system("cls");

    //painel do administrador(a) que fiz, com as suas determinadas funcionalidades./
    printf("\nAdministrador(a) autenticado com sucesso!!\n\n");
    printf(" ---------------\n| M   E   N   U |\n ---------------\n");

    int num;
    int programaFuncionando=1;

    while (programaFuncionando) {
        printf("\n -------------------------------\n|O que gostaria de fazer agora?\n ---\n\t-> -1 para retornar a tela de login"
        "\n\t-> 0 para finalizar o programa\n\t-> 1 para consultar a tabela dos Veículos"
        "\n\t-> 2 para adicionar um veículo"
        "\n\t-> 3 para editar uma linha\n\t-> 4 para deletar veículo\n\n");

        printf("Digite a opção que deseja: ");
        scanf("%d", &num);

        switch (num) {
            case -1:
                system("cls");
                autenticarAcesso();
                break;
            case 0:
                programaFuncionando=!programaFuncionando;//C ou ~C – lógica matemática/
                break;
            case 1:
                system("cls");
                //consulta();
                break;
            case 2:
                system("cls");
                //adicionarVec();
                break;
            case 3:
                system("cls");
                //novaEdicaoVeiculo(); /tomar muito cuidado aqui, buga a tabela se der ctrl+c na hora de executar essa função/
                break;
            case 4:
                system("cls");
                //deletarColaborador();
                break;
            default:
            system("cls");
            printf("A opção em questão não está programada em nosso sistema! Digite outra alternativa\n");
            break;           
        }
    }
    return 0;
}