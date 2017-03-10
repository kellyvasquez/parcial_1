#include<stdio.h>
#include<stdlib.h>

void dato(int fila,int columna,int **matriz);
void imprimir(int fila,int columna,int **matriz);
void mult(int f,int c1,int **matri2,int **d,int **resul);

void dato(int fila,int columna,int **matriz){
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            printf("(%d,%d): ",i,j);
            scanf("%d",&matriz[i][j]); }
    }
 }

void imprimir(int fila,int columna,int **matriz){
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            printf("%d\t",*(*(matriz+i)+j)); }
        printf("\n"); }
 }

void mult (int f,int c,int c1,int **matri2,int **d,int **resul){
    for(int i=0;i<f;i++){
        for(int j=0;j<c1;j++){
            for(int k=0;k<c;k++){
                resul[i][j]=resul[i][j]+matri2[i][k]*d[k][j]; }
        }
    }
 }

int main(){

   int columna, fila, f, c, f1, c1;
   int *matriz, **matri2, **resul, *d, **g;

            printf("*****MULTIPLICACION DE MATRICES DINAMICAS*****\n\n");
            printf("Ingrese numero de filas de la matriz 1: "); scanf("%d",&f);
            printf("Ingrese numero de columnas de la matriz 1: "); scanf("%d",&c);
            printf("Ingrese numero de filas de la matriz 2: "); scanf("%d",&f1);
            printf("Ingrese numero de columnas de la matriz 2: "); scanf("%d",&c1);

             matri2=(int **)malloc(sizeof(int *)*f);
             resul=(int **)malloc(sizeof(int *)*f1);
             g=(int **)malloc(sizeof(int *)*f);

                for(int j=0;j<c;j++){
                    matri2[j]=(int *)malloc(sizeof(int)*c); }

                for(int j=0;j<c1;j++){
                    resul[j]=(int *)malloc(sizeof(int)*c1);
                    g[j]=(int *)malloc(sizeof(int)*c1); }

                for(int i=0;i<f;i++){
                    for(int j=0;j<c1;j++){
                        g[i][j]=0; }
                }

            printf("\n*****MATRIZ 1*****\n\n");
            dato(f,c,matri2);

            printf("\n*****MATRIZ 2*****\n\n");
            dato(f1,c1,resul);

            mult (f,c,c1,matri2,resul,g);

            printf("\n*****LA MULTIPLICACION ENTRE LAS DOS MATRICES ES: *****\n\n");
            imprimir(f,c1,g);

}
