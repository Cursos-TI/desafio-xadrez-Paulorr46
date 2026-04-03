#include<stdio.h>
// funções de Recuvirvidade para os moviemntos das peças

//recursividade da Torre

    void moverTorre(int casas){
        if (casas > 0){
        printf("Direita\n");
        moverTorre (casas - 1);
        }
    }

//recursividade para a Rainha

    void moverRainha(int casas){
        if (casas > 0){
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
    }

//recursividade para o Bispo
    void moverBispo(int casas) {
    if (casas > 0) {
        for (int vertical = 0; vertical < casas; vertical++) {       // Loop externo - vertical
            for (int horizontal = 0; horizontal < casas; horizontal++) { // Loop interno - horizontal
                if (vertical == horizontal) {  // if para mover em passos iguais na diagonal
                    printf("Cima, Direita\n");
                }
            }
        }
    }
}

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
        moverTorre(5);

    break;

    case 2:
    //Mover a Rainha 8 Casas a Esquerda
        moverRainha(8);

    break;

    case 3:
    //Mover Bispo 5 Casas a diagonal Superior Direita
        moverBispo(5);
        break;

    case 4: 
    // mover Cavalo em L
        
            for(int i = 0, movimentoCavalo = 1; movimentoCavalo > 0 && i < 2; i++, movimentoCavalo--){
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n"); // imprimee 'direita' 1 vez
            }
        
        break;
    
    

    default: 
    printf("Opção inválida!\n");
}

    return 0;
}   