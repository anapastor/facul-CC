#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

void bold(int status) {
 static const char *seq[] = {"\x1b[0m", "\x1b[1m"};
 printf("%s", seq[!!status]);
}

int autenticarAcesso() {
//Sistema de autenticação/
setlocale(LC_ALL, "Portuguese");

        printf(" .d8888b.  8888888  .d88888b.   .d8888b. \n"); 
        printf("d88P  Y88b   888   d88P   Y88b d88P  Y88b\n"); 
        printf("Y88b.        888   888     888 Y88b.     \n"); 
        printf("  Y888b.     888   888     888   Y888b.  \n"); 
        printf("     Y88b.   888   888     888      Y88b.\n"); 
        printf("       888   888   888     888        888\n"); 
        printf("Y88b  d88P   888   Y88b. .d88P Y88b  d88P\n"); 
        printf("  Y8888P   8888888   Y88888P     Y8888P \n");

    while(1) {
        char login[100];
        char senha[100];
        printf(" _________________________________________\n");
        printf("[__________Tela de autenticação_________]\n");
        printf("|                                         \n");
        printf("|Login: ");
        scanf("%s", login);
        printf("|Senha: ");
        scanf("%s", senha);
        printf("|_________________________________________|\n");
        
        printf("\nAcesso Negado.\n");
        if (strcmp(login, "admin") == 0 && strcmp(senha, "admin") == 0) {
            break;
        } else {
            printf("Login ou senha incorretos! Tente novamente!\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");
            
        }
    }
}


int main(void) {
    setlocale(LC_ALL, "Portuguese");
    autenticarAcesso();

    //limpar a commmand-line/
    system("cls");

    //painel do administrador(a) que fiz, com as suas determinadas funcionalidades./
    printf(" ______________________________________\n");
    printf("[__________Tela de boas-vindas_________]\n");
    printf("\nAdministrador(a) autenticado com sucesso!!\n\n");

    int num;
    int programaFuncionando=1;

    while (programaFuncionando) {
        printf("____________________________________________\n");
        printf("     __  __     ___     _  _     _   _  \n");
        printf("    |  \\/  |   | __|   | \\| |   | | | | \n");
        printf("    | |\\/| |   | _|    | .` |   | |_| | \n");
        printf("    |_|  |_|   |___|   |_|\\_|    \\___/ ");

        printf("\n============================================\nO que gostaria de acessar agora?: \n<o>-1 para retornar a tela de boas-vindas"
        "\n<o> 0 para finalizar o programa\n<o> 1 para consultar a tabela dos Veículos"
        "\n<o> 2 para adicionar um veículo"
        "\n<o> 3 para editar uma linha\n<o> 4 para deletar veículo\n============================================\n");

        printf("Opção escolhida: ");
        scanf("%d", &num);

        switch (num) {
            case -1:
                system("cls");
                printf("\n===================\n");
                printf("Seja bem-vindo ao sistema de consulta ABC!\n\n");
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

    printf("\n======================\n");

    return 0;
}