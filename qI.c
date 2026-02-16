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
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
}
void main(){
    srand(time(NULL));
    int l=0, c=0;
    int fim=1;
    do{
        
        solicitarMeN(&l, &c);
        int matriz1[l][c];
        solicitarMeN(&l, &c);
        int matriz2[l][c];
        printf("************************************\n");
        printf("Primeira matriz: \n");
        preencherMatriz(l, c, matriz1);
        printf("************************************\n");
        printf("Segunda matriz: \n");
        preencherMatriz(l, c, matriz2);
        
        int matriz3[l][c];
        printf("*****************************************\n");
        printf("Valores da matriz 3: \n");
        for(int i=0; i<l;i++){
            for(int j=0; j<l;j++){
                if (i>j){
                    matriz3[i][j]= matriz1[i][j];
                    printf("%d ", matriz3[i][j]);
                }if(j > i){
                    matriz3[i][j]= matriz2[i][j];
                    printf("%d ", matriz3[i][j]);
                }if( i % 2 == 0 && j % 2 ==0){
                    matriz3[i][i]= matriz1[i][i];
                    printf("%d ", matriz3[i][i]);
                }else{
                    matriz3[i][i]= matriz2[i][i];
                    printf("%d ", matriz3[i][i]);
                }
            printf("\n");
        }
}

    printf("Deseja: \n1 - Continuar;\n0 - Sair;\n");
    scanf("%d", &fim);

    if(fim == 0)
    break;
    } while (fim == 1);
    
}
