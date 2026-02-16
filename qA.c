#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*1.a) Ler uma matriz de ordem MxN, onde M e N serão informados pelo usário e em seguida
imprima está matriz*/
void main(){

    srand(time(NULL));
    int n, m;
    printf("Informe o tamanho da linha: \n");
    scanf("%d", &n);

    printf("Informe o tamanho da coluna: \n");
    scanf("%d", &m);

    int matriz[n][m];

    printf("Informe os valores da matriz: \n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        matriz[i][j]= rand() % 100;
        }
    }

    printf("Os valores da matriz são: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }





}