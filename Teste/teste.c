#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, numeroSecreto, palpite;

    printf("\n*** Menu principal ***\n");
    printf("1. Iniciar o jogo.\n");
    printf("2. Ver regras.\n");
    printf("3. Sair do jogo.\n");
    printf("Escolha uma opção.\n")/
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand () % 10;
            printf("Adivinhe o número entre 0 a 9: \n");
            scanf("%d",&palpite);
            if (numeroSecreto == palpite){
                printf("Você acertou!\n");
                printf("Número secreto %d\n", numeroSecreto);
            } else {
                printf("Você errou!\n");
                printf("Número secreto %d\n", numeroSecreto);
            }
            break;
        case 2:
            printf("\nREGRAS DO JOGO\n");
            printf("Para ganhar você precisa acertar qual número vai ser sorteado entre 0 a 9.");
            break;
        case 3:
            printf("Sair do jogo\n");
            break;
        default:
            printf("Opção invalida\n");
    }
    return 0;
}
