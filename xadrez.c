#include<stdio.h>
int main(){

    int opcao;
    int i = 0;
     int movimentoCavalo = 1; //variavel para controle o movimento do cavalo em L
    

    printf("Qual peça você gostaria de movimentar?\n");
    printf("1. Torre\n");
    printf("2. Rainha\n");
    printf("3. Bispo\n");
    printf("4. Cavalo\n");
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
    //Mover a Rainha 8 Casas a Esquerda
    do{
        printf("Esquerda\n");
        i++;
    }while(i < 8);
    break;

    case 3:
    //Mover Bispo 5 Casas a diagonal Superior Direita
    while(i < 5){
        printf("Cima, Direta\n");
        i++;
        break;
    }

    case 4: 
    // mover Cavalo em L
   
        while (movimentoCavalo > 0)
        {
            for(int i = 0; i < 2; i++){
                printf("Cima\n"); //imprime 'cima' duas vezes
            }
                printf("Direita\n"); // imprimee 'direita' duas vezes
                movimentoCavalo--;
        }
        break;
    
    

    default: 
    printf("Opção inválida!\n");
}

    return 0;
}   