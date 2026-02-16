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
         printf("******************************************\n");
        
        printf("Soma do elemento de cada linha da matriz: \n");
        int soma=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                soma+= matriz[i][j];
                    printf("O valor %d na posição [%d][%d] + o valor %d na posição [%d][%d] = %d\n", matriz[i][j], i,j, matriz[i][j], i,j, soma);
            }
            printf("\n");
        }


        printf("Deseja:\n1 - Continuar;\n0 - Sair;\n");
        scanf("%d", &fim);
        if(fim == 0)
            break;
    }while(fim = 1);
}