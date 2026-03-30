#include<stdio.h>
int main(){

    int opcao;
    int i = 0;

    printf("Qual peça você gostaria de movimentar?\n");
    printf("1. Torre\n");
    printf("2. Rainha\n");
    printf("3. Bispo\n");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:
    // Mover a Torre 5 casas para a direita

    for(int i = 0; i < 5 ; i++)
    {
        printf("Direita\n"); // imprimi a direção do movimento
    }

    break;

    case 2:
    do{
        printf("Esquerda\n");
        i++;
    }while(i < 8);
    break;

    case 3:
    while(i < 5){
        printf("Cima, Direta\n");
        i++;
    }
    break;

    default: 
    printf("Opção inválida!\n");
}

    return 0;
}   