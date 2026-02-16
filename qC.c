#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int n=0, m=0;

    printf("Informe o tamanho da linha: \n");
    scanf("%d", &n);

    printf("Informe o tamanho da coluna: \n");
    scanf("%d", &m);

    int matriz[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matriz[i][j]= rand () %100;
        }
    }

    printf("Os valores da matriz é: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Os valores da matriz de forma inversa é: \n");

    for(int i=n-1; i>=0; i--){
        for(int j= 0; j<m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}