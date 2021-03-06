#include <stdlib.h>
#include <stdio.h>

int i, j;

void printer(int mat[i][j]){
        int x, y;

        for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("%i\t", mat[x][y]);
                }
                printf("\n");
        }
        printf("\n\n");
}

void iniciarMatXX(int mat[i][j]){
        int x, y;

         for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("\nInsira o numero %ix%i: ", x+1, y+1);
                        scanf(" %i", &mat[x][y]);
                }
        }
        
        printf("\n\n\t\tMatriz:\n");
        printer(mat);
}

void somar(int matR[i][j], int mat1[i][j], int mat2[i][j]){
        int x, y;
        for(y = 0;y < i;y++){
                for(x = 0;x < j;x++){
                        matR[y][x] = mat1[y][x] + mat2[y][x];
                }
            
        }
}

void main(){
        int x, y;

        printf("Numero de linhas: ");
        scanf(" %i", &i);
        printf("Numero de colunas: ");
        scanf(" %i", &j);

        int mat1[i][j], mat2[i][j];

        printf("\n________________________________________");

        iniciarMatXX(mat1);
        iniciarMatXX(mat2);

        int matR[i][j];

        printf("\n\t\tSoma:\n");
        somar(matR, mat1, mat2);
        printer(matR);
}