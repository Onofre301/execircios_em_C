#include <stdio.h>
#include <stdlib.h>

 main()
{
    char nome[30], endereco[30], telefone[15];

    printf("Digite nome do cliente: \n");
    gets(nome);

    printf("Digite o endereco do cliente: \n");
    gets(endereco);

    printf("Digite o telefone do cliente: \n");
    gets(telefone);

    printf("Nome: %s\n", nome);
    printf("Telefone: %s\n", telefone);
    printf("Endereco: %s\n", endereco);


    return 0;
}

