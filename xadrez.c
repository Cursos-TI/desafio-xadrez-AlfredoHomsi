#include <stdio.h>
 
int main() {
    int bispo = 1;
    int torre = 1;
    int movimentocompleto = 1;
   
{printf("Movemento do bispo:\n");
    while (bispo <= 5) {
         
        printf("Cima\n");
        bispo++;}

    {printf("Movimento da torre:\n");
        do {
            
            printf("Direita\n");
            torre++;
        } while (torre <= 5);}

 {printf("Movimento da raina:\n");
        for (int rainha = 0; rainha<8; rainha++) {
            {
           
            printf("esquerda\n");
            }
        }}
    }
    {printf("movimento do cavalo:\n");
    while (movimentocompleto--){
        for (int i =0; i < 2; i++){
            printf("cima\n");
        }
        printf("direita\n");
    }
   }
    return 0;
}

