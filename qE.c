#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*1.E) Ler uma matriz e dividir cada elemento de uma linha pelo elemento da diagonal principal dessa linha.
    R= Possibilidades:
        matriz[i][j] div matriz[i][i]*/
void main(){
    srand(time(NULL));
    int n=0,m=0;
    int fim=0;

    do{
      
    printf("Informe o tamanho de linhas da matriz: \n");
    scanf("%d", &n);
    
    printf("Informe o tamanho de colunas da matriz: \n");
    scanf("%d", &m);
  
    int matriz[n][m];
    printf("******************************************\n");

    printf("Valores da matriz: \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matriz[i][j]= rand()%100;
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
        printf("******************************************\n");
        
        printf("Divisão do elemento de cada linha pelo da diagonal principal da linha da matriz: \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int num= matriz[i][i];
                num= matriz[i][j] /num;
                printf("%d ", num);
            }
            printf("\n");
        }

        printf("Deseja 1- continuar ou 0- sair?");
        scanf("%d", &fim);
        if(fim == 0)
        break;
    } while (fim ==1);
    

}