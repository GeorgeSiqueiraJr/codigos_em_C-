#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int n,m;
    do{
        printf("Informe o tamanho da linha: \n");
        scanf("%d",&n);

        printf("Informe o tamanho da coluna : \n");
        scanf("%d", &m);
        int matriz[n][m];
        if(n != m){
            printf("A matriz não é quadrada, os valores de linha e coluna são diferentes. \n");
            printf("Informe novamente: \n");
        }else{
            printf("A matriz é quadrada, com os valores: \n");
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    matriz[i][j]= rand () % 100;
                    printf("%d ", matriz[i][j]);
                } 
                printf("\n");
            }
            printf("A diagonal principal é: \n");
            for(int i=0; i<n; i++){
                    printf("%d ", matriz[i][i]);
                }
            }
    }while(n != m);
}