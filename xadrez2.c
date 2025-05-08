#include <stdio.h>

void moverpeca(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverpeca(casas - 1);}
    }

    void moverRainha(int casas){
        if (casas < 5){
            printf("Esquesrda\n");
            moverRainha(casas - 1);}
        }

        void moverBispo(int casas){
            for (int direita = 1; direita <= 5; direita++) {
                for (int esquerda = 1; esquerda >= 3; esquerda--) {
                    printf("direita\n");
                }
                printf("esquerda\n");
            }
                 }

        void moverCavalo(int casas){
            while (casas--){
                for (int i =0; i < 2; i++){
                    printf("Esquerda\n");
                }
                printf("cima\n");
                break;
            }
                 }
                


int main(){

    int casas;
   { printf("movimento da torre:\n");
    moverpeca(5);}
    {printf("movimento da rainha:\n");
    moverRainha(8);}
    {printf("Movimento do bispo\n");
    moverBispo(5);}
    {printf("Movimento do cavalo:\n");
    moverCavalo(3);}
    return 0;
}
