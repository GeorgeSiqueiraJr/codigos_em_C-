#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int n=0, m=0;
    int fim=1;

    do{
        
    printf("Informe o tamanho das linhas: \n");
    scanf("%d", &n);
    
    printf("Informe o tamanho das colunas: \n");
    scanf("%d", &m);

    printf("*****************************************\n");
    
    printf("Valores da matriz[%d][%d]: \n", n,m);
    int matriz[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j]= rand()%100;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("*****************************************\n");
    printf("Valores abaixo da diagonal principal: \n");
    for(int i=1; i<m;i++){
        for(int j=0; j<n;j++){
            if (i>j){
                printf("%d ", matriz[i][j]);
            }
            
        }
        printf("\n");
    }

    printf("Deseja: \n1 - Continuar;\n0 - Sair;\n");
    scanf("%d", &fim);

    if(fim == 0)
    break;
    } while (fim == 1);
    
}



/*if(matriz[i][j] == matriz[i][i]){
                i ++;
                j++;
            }else{
                printf("%d ", matriz[i][j]);
            }
                */