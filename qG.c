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

        int matriz[n][m];

        printf("***********************************\n");
        printf("Valores da matriz: \n");
        for(int i=0;i<n;i++){
            for(int j=0; j<m;j++){
                matriz[i][j]= rand()%100;
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
        printf("***********************************\n");
        printf("Valores acima da diagonal principal:\n");

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){ // ou j = i + 1 sem o if
                if(j > i){
                    printf("%d ", matriz[i][j]);
                } else {
                    printf("    ");  
                }
            }
            printf("\n");
        }

        printf("Deseja:\n1 - Continuar;\n0 - Sair;\n");
        scanf("%d", &fim);
        
    }while(fim != 0);

}