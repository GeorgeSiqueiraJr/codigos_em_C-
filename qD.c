#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int solicitarMeN(int *n, int *m){
        printf("Informe o tamanho de linhas da matriz: \n");
        scanf("%d", &n);

        printf("Informe o tamanho de colunas da matriz: \n");
        scanf("%d", &m);

}
int preencherMatriz(int n, int m, int matriz[n][m]){
    for (int i = 0; i < n; i++){
            for(int j=0; j<m;j++){
                matriz[i][j]= rand () %100;
            }
        }
}
int imprimirMatriz(int n, int m, int matriz[n][m]){
    for (int i = 0; i < n; i++){
            for(int j=0; j<m;j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
}
void main(){
    srand(time(NULL));
    int l1=0, c1=0;
    int l2=0, c2=0;
    int fim=1;
    while(fim = 1){
        
        solicitarMeN(&l1, &c1);
        int matriz1[l1][c1];
        solicitarMeN(&l2, &c2);
        int matriz2[l2][c2];
        printf("************************************\n");
        printf("Primeira matriz: \n");
        preencherMatriz(l1, c1, matriz1);
        imprimirMatriz(l1, c1, matriz1);
        printf("************************************\n");
        printf("Segunda matriz: \n");
        preencherMatriz(l2, c2, matriz2);
        imprimirMatriz(l2, c2, matriz2);

        printf("************************************\n");
        if (l1 == l2 && c1 == c2){
            printf("Os tamanhos das matrizes coincidem, a som delas é: \n");
            int somaM[l1][c1], total=0;
            for(int i=0;i<l1; i++){
                for(int j=0;j<c1;j++){
                    somaM[i][j]= matriz1[i][j] + matriz2[i][j];
                    printf("O valor %d da matriz 1 na posição [%d][%d] + o valor %d da matriz 2 na posição [%d][%d] = %d\n", matriz1[i][j], i,j, matriz2[i][j], i,j, somaM);
                    total += somaM[i][j];
                }
            }
            printf("************************************\n");
            printf("A soma dos valores do vetor é %d", total);
            printf("\n");
            printf("************************************\n");
            printf("A terceira matriz formada pela soma das matrizes é: \n");

            for (int i = 0; i < l1; i++){
            for(int j=0; j<c1;j++){
            printf("%d ", somaM[i][j]);
            }
            printf("\n");
            }

        }
        printf("Deseja 1- continuar ou 0- sair?");
        scanf("%d", &fim);
        if(fim == 0)
        break;
    }

}