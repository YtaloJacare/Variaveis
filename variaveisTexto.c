#include <stdio.h>
main (){

    //delcração e atribuição de uma varia´vel de texto
    //tipo nome e tamanho

    char nome[10] = "Ytalo SRS";
    char nome2[20];
    char nome3[20];

    printf("Nome: %s", nome);

    //recebendo dados de texto scanf

    printf("\n Digite um nome:");
    scanf("%[^\n]", nome2);
    fflush(stdin);
    printf("Nome: %s", nome2);

//sem "&" em vetores -  ([^\n] leitura de "space" ou fgets - nome, tam. stdin)
//Limpa a memoria do teclaod (enterFflush) (stdin)
//__Fpurge(stdin) - Linux

    printf("\n Digite um nome3:");
    fgets(nome3,20, stdin);
    printf("\n Nome: %s", nome3);
}